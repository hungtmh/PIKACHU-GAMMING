#include "Matching.h"

using namespace std;

bool checkLineX(int x1, int y1, int x2, int y2, char** board) {
    // Kiểm tra xem hai ô có cùng nằm trên một dòng không.
    if (y1 != y2) return false;
    // Kiểm tra xem hai ô có phải là cùng một ô không.
    if (x1 == x2) return false;
    // Tìm điểm bắt đầu và kết thúc dựa trên tọa độ x để kiểm tra.
    int start = min(x1, x2);
    int end = max(x1, x2);
    // Kiểm tra xem có ô nào giữa hai điểm đầu cuối có ký tự khác '0' không.
    for (int i = start + 1; i < end; i++)
        if (board[y1][i] != '-')
            return false;
    return true;
}
bool checkLineY(int x1, int y1, int x2, int y2, char** board) {
    // Kiểm tra xem hai ô có cùng nằm trên một cột không.
    if (x1 != x2) return false;

    // Kiểm tra xem hai ô có phải là cùng một ô không.
    if (y1 == y2) return false;

    // Tìm điểm bắt đầu và kết thúc dựa trên tọa độ y để kiểm tra.
    int start = min(y1, y2);
    int end = max(y1, y2);

    // Kiểm tra xem có ô nào giữa hai điểm đầu cuối có ký tự khác '0' không.
    for (int i = start + 1; i < end; i++)
        if (board[i][x1] != '-')
            return false;

    return true;
}
bool checkL(int x1, int y1, int x2, int y2, char** board) {
    // Kiểm tra nếu cùng một vị trí.
    if (x1 == x2 || y1 == y2) return false;
    // Kiểm tra kết nối theo hình dạng chữ L: điểm giữa tại (x1, y2) hoặc (x2, y1)
    if (board[y2][x1] == '-')
    { // Điểm giữa phải trống hoặc là điểm đích
        if (checkLineY(x1, y1, x1, y2, board) && checkLineX(x1, y2, x2, y2, board)) return true;
    }
    // Điểm giữa (x2, y1)
    if (board[y1][x2] == '-')
    { // Điểm giữa phải trống hoặc là điểm đích
        if (checkLineX(x1, y1, x2, y1, board) && checkLineY(x2, y1, x2, y2, board)) return true;
    }
    return false;
}
bool checkZ(int x1, int y1, int x2, int y2, char** board)
{
    // Trường hợp 1: Đi xuống dọc rồi ngang
    for (int i = min(y1, y2) + 1; i <= max(y1, y2) - 1; i++)
    {
        if (board[i][x1] == '-' && board[i][x2] == '-')
        {
            if (checkLineY(x1, y1, x1, i, board) && checkLineX(x1, i, x2, i, board) && checkLineY(x2, i, x2, y2, board))
            {
                return true;
            }
        }
    }

    // Trường hợp 2: Đi ngang rồi xuống dọc
    for (int i = min(x1, x2) + 1; i <= max(x1, x2) - 1; i++)
    {
        if (board[y1][i] == '-' && board[y2][i] == '-')
        {
            if (checkLineX(x1, y1, i, y1, board) && checkLineY(i, y1, i, y2, board) && checkLineX(i, y2, x2, y2, board))
            {
                return true;
            }
        }
    }

    return false;
}
bool checkU(int x1, int y1, int x2, int y2, char** board,int m,int n) {
    // TH1: Chữ U ngang (đoạn dọc ở phải)
    if (checkLineX(n, y2, x2, y2, board) && checkLineX(n, y1, x1, y1, board)) return true; //check ngoài phạm bảng có tạo được chữ U không 
    int i = max(x1, x2) + 1;
    while (i < n) {
        if (board[y1][i] != '-') break;
        if (board[y1][i] == '-' && board[y2][i] == '-') {
            if (checkLineX(x1, y1, i, y1, board) && checkLineY(i, y1, i, y2, board) && checkLineX(i, y2, x2, y2, board)) {
                return true;
            }
        }
        i++;
    }
    // TH2: Chữ U ngang (đoạn dọc ở trái)
    if (checkLineX(-1, y2, x2, y2, board) && checkLineX(-1, y1, x1, y1, board)) return true;
    i = min(x1, x2) - 1;
    while (i >= 0) {
        if (board[y1][i] != '-') break;
        if (board[y1][i] == '-' && board[y2][i] == '-') {
            if (checkLineX(x1, y1, i, y1, board) && checkLineY(i, y1, i, y2, board) && checkLineX(i, y2, x2, y2, board)) {
                return true;
            }
        }
        i--;
    }
    // TH3: Chữ U đứng (đoạn dọc ở dưới)
    if (checkLineY(x2, y2, x2, m, board) && checkLineY(x1, y1, x1, m, board)) return true;
    i = max(y1, y2) + 1;
    while (i < m) {
        if (board[i][x1] != '-') break;
        if (board[i][x1] == '-' && board[i][x2] == '-') {
            if (checkLineY(x1, y1, x1, i, board) && checkLineX(x1, i, x2, i, board) && checkLineY(x2, i, x2, y2, board)) {
                return true;
            }
        }
        i++;
    }
    // TH4: Chữ U ngược (đoạn dọc ở trên)
    if (checkLineY(x2, y2, x2, -1, board) && checkLineY(x1, y1, x1, -1, board)) return true;
    i = min(y1, y2) - 1;
    while (i >= 0) {
        if (board[i][x1] != '-') break;
        if (board[i][x1] == '-' && board[i][x2] == '-') {
            if (checkLineY(x1, y1, x1, i, board) && checkLineX(x1, i, x2, i, board) && checkLineY(x2, i, x2, y2, board)) {
                return true;
            }
        }
        i--;
    }
    return false;
}

bool isFinished(char** board, int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            if (board[i][j] == '-') dem++;
    }
    return dem == m * n;
}

void checkeasy(char**& board, int x1, int y1, int x2, int y2, int m, int n, int& score)
{
    string df = "easy";
    if (board[y1][x1] == board[y2][x2] && (x1!=x2||y1!=y2))
    {
        if (checkU(x1, y1, x2, y2, board, m, n) || checkLineX(x1, y1, x2, y2, board) || checkLineY(x1, y1, x2, y2, board) || checkZ(x1, y1, x2, y2, board) || checkL(x1, y1, x2, y2, board))
        {
            score += 10;
            playSound(PLACED_SOUND);
            board[y1][x1] = board[y2][x2] = '-';
            highlightCellforEnter(x1, y1, board, 3, 4, 2, true, df);
            highlightCellforEnter(x2, y2, board, 3, 4, 2, true, df);
            Sleep(100);
            highlightCellforEnter(x1, y1, board, 3, 4, 2, false, df);
            highlightCellforEnter(x2, y2, board, 3, 4, 2, false, df);
            //Sleep(100);
            printBackGroundE(x1, y1);
            printBackGroundE(x2, y2);
            //drawBoard2P(board, m, n); // Không highlight ô nào
        }
        else
        {
            score -= 5;
            playSound(ERROR_SOUND);
            highlightCellforEnter(x1, y1, board, 3, 4, 2, false, df);
            highlightCellforEnter(x2, y2, board, 3, 4, 2, false, df);
            highlightCellforEnterError(x1, y1, board, 3, 4, 2, true, df);
            highlightCellforEnterError(x2, y2, board, 3, 4, 2, true, df);
            Sleep(500);
            highlightCellforEnterError(x1, y1, board, 3, 4, 2, false, df);
            highlightCellforEnterError(x2, y2, board, 3, 4, 2, false, df);
            //drawBoard2P(board, m, n);
        }
    }
    else
    {
        score -= 5;
        playSound(ERROR_SOUND);
        highlightCellforEnter(x1, y1, board, 3, 4, 2, false, df);
        highlightCellforEnter(x2, y2, board, 3, 4, 2, false, df);
        highlightCellforEnterError(x1, y1, board, 3, 4, 2, true, df);
        highlightCellforEnterError(x2, y2, board, 3, 4, 2, true, df);
        Sleep(500);
        highlightCellforEnterError(x1, y1, board, 3, 4, 2, false, df);
        highlightCellforEnterError(x2, y2, board, 3, 4, 2, false, df);
        //drawBoard2P(board, m, n);
    }
}

void checkmedium(char**& board, int x1, int y1, int x2, int y2, int m, int n, int& score)
{
    string df = "medium";
    string* background = new string[200];
    if (board[y1][x1] == board[y2][x2] && (x1 != x2 || y1 != y2))
    {
        if (checkU(x1, y1, x2, y2, board, m, n) || checkLineX(x1, y1, x2, y2, board) || checkLineY(x1, y1, x2, y2, board) || checkZ(x1, y1, x2, y2, board) || checkL(x1, y1, x2, y2, board))
        {
            score += 10;
            playSound(PLACED_SOUND);
            board[y1][x1] = board[y2][x2] = '-';
            highlightCellforEnter(x1, y1, board, 3, 4, 2, true, df);
            highlightCellforEnter(x2, y2, board, 3, 4, 2, true, df);
            Sleep(100);
            highlightCellforEnter(x1, y1, board, 3, 4, 2, false, df);
            highlightCellforEnter(x2, y2, board, 3, 4, 2, false, df);
            //Sleep(100);
            printBackGroundM(background, x1, y1);
            printBackGroundM(background, x2, y2);
            //drawBoard2P(board, m, n); // Không highlight ô nào
        }
        else
        {
            score -= 5;
            playSound(ERROR_SOUND);
            highlightCellforEnter(x1, y1, board, 3, 4, 2, false, df);
            highlightCellforEnter(x2, y2, board, 3, 4, 2, false, df);
            highlightCellforEnterError(x1, y1, board, 3, 4, 2, true, df);
            highlightCellforEnterError(x2, y2, board, 3, 4, 2, true, df);
            Sleep(500);
            highlightCellforEnterError(x1, y1, board, 3, 4, 2, false, df);
            highlightCellforEnterError(x2, y2, board, 3, 4, 2, false, df);
            //drawBoard2P(board, m, n);
        }
    }
    else
    {
        score -= 5;
        playSound(ERROR_SOUND);
        highlightCellforEnter(x1, y1, board, 3, 4, 2, false, df);
        highlightCellforEnter(x2, y2, board, 3, 4, 2, false, df);
        highlightCellforEnterError(x1, y1, board, 3, 4, 2, true, df);
        highlightCellforEnterError(x2, y2, board, 3, 4, 2, true, df);
        Sleep(500);
        highlightCellforEnterError(x1, y1, board, 3, 4, 2, false, df);
        highlightCellforEnterError(x2, y2, board, 3, 4, 2, false, df);
        //drawBoard2P(board, m, n);
    }
    delete[] background;
}

void checkhard(char**& board, int x1, int y1, int x2, int y2, int m, int n, int& score)
{
    string df = "hard";
    string* background = new string[200];
    if (board[y1][x1] == board[y2][x2] && (x1 != x2 || y1 != y2))
    {
        if (checkU(x1, y1, x2, y2, board, m, n) || checkLineX(x1, y1, x2, y2, board) || checkLineY(x1, y1, x2, y2, board) || checkZ(x1, y1, x2, y2, board) || checkL(x1, y1, x2, y2, board))
        {
            score += 10;
            playSound(PLACED_SOUND);
            board[y1][x1] = board[y2][x2] = '-';
            highlightCellforEnter(x1, y1, board, 3, 4, 2, true, df);
            highlightCellforEnter(x2, y2, board, 3, 4, 2, true, df);
            Sleep(100);
            highlightCellforEnter(x1, y1, board, 3, 4, 2, false, df);
            highlightCellforEnter(x2, y2, board, 3, 4, 2, false, df);
            //Sleep(100);
            //drawBoard2P(board, m, n); // Không highlight ô nào
        }
        else
        {
            score -= 5;
            playSound(ERROR_SOUND);
            highlightCellforEnter(x1, y1, board, 3, 4, 2, false, df);
            highlightCellforEnter(x2, y2, board, 3, 4, 2, false, df);
            highlightCellforEnterError(x1, y1, board, 3, 4, 2, true, df);
            highlightCellforEnterError(x2, y2, board, 3, 4, 2, true, df);
            Sleep(500);
            highlightCellforEnterError(x1, y1, board, 3, 4, 2, false, df);
            highlightCellforEnterError(x2, y2, board, 3, 4, 2, false, df);
            //drawBoard2P(board, m, n);
        }
    }
    else
    {
        score -= 5;
        playSound(ERROR_SOUND);
        highlightCellforEnter(x1, y1, board, 3, 4, 2, false, df);
        highlightCellforEnter(x2, y2, board, 3, 4, 2, false, df);
        highlightCellforEnterError(x1, y1, board, 3, 4, 2, true, df);
        highlightCellforEnterError(x2, y2, board, 3, 4, 2, true, df);
        Sleep(500);
        highlightCellforEnterError(x1, y1, board, 3, 4, 2, false, df);
        highlightCellforEnterError(x2, y2, board, 3, 4, 2, false, df);
        //drawBoard2P(board, m, n);
    }
    delete[] background;
}

bool MoveSuggestion(char** board, int m, int n)
{
    for (int x1 = 0; x1 < m; x1++)
    {
        for (int y1 = 0; y1 < n; y1++)
        {
            if (board[y1][x1] != '-')
            {
                for (int x2 = 0; x2 < m; x2++)
                    for (int y2 = 0; y2 < n; y2++)
                        if (x1 != x2 || y1 != y2)
                        {
                            if (board[y1][x1] == board[y2][x2])
                            {
                                if (checkU(x1, y1, x2, y2, board, m, n) || checkLineX(x1, y1, x2, y2, board) || checkLineY(x1, y1, x2, y2, board) || checkZ(x1, y1, x2, y2, board) || checkL(x1, y1, x2, y2, board))
                                {
                                    return true;
                                }
                            }
                        }
            }
        }
    }
    return false;
}

bool MoveSuggestionUpdate(char** board, int m, int n)
{
    string df = "none";
    for (int x1 = 0; x1 < m; x1++)
    {
        for (int y1 = 0; y1 < n; y1++)
        {
            if (board[y1][x1] != '-')
            {
                for (int x2 = 0; x2 < m; x2++)
                    for (int y2 = 0; y2 < n; y2++)
                        if (x1 != x2 || y1 != y2)
                        {
                            if (board[y1][x1] == board[y2][x2])
                            {
                                if (checkU(x1, y1, x2, y2, board, m, n) || checkLineX(x1, y1, x2, y2, board) || checkLineY(x1, y1, x2, y2, board) || checkZ(x1, y1, x2, y2, board) || checkL(x1, y1, x2, y2, board))
                                {

                                    highlightCellforEnter(x1, y1, board, 3, 4, 2, true, df);
                                    highlightCellforEnter(x2, y2, board, 3, 4, 2, true, df);
                                    Sleep(500);
                                    highlightCellforEnter(x1, y1, board, 3, 4, 2, false, df);
                                    highlightCellforEnter(x2, y2, board, 3, 4, 2, false, df);
                                    return true;
                                }
                            }
                        }
            }
        }
    }
    return false;
}
