#include "Playgame.h"
#include "Matching.h"
#include <iomanip>
using namespace std;

void drawBoard2P(char** board, int rows, int cols) {
    const int cellWidth = 3; // Độ rộng của mỗi ô
    const int cellPadding = 2; // Đệm bên trong mỗi ô
    const int cellHeight = 4; // Độ cao mới cho mỗi ô
    for (int i = 0; i < rows; ++i) {
        for (int h = 0; h < cellHeight; ++h) {
            if (h == 0) {
                for (int j = 0; j < cols; ++j) {
                    if (j == 0) cout << " ";
                    cout << string(cellWidth + cellPadding, '-');
                    if (j < cols - 1) cout << " ";
                }
                cout << endl;
                continue;
            }

            for (int j = 0; j < cols; ++j) {
                gotoXY(j * (cellWidth + cellPadding + 1), i * cellHeight + h);
                cout << "|";
                if (h == cellHeight / 2) {
                   // cout << setw(cellWidth) << board[i][j];
                    cout << "  " << board[i][j];
                    cout << string(cellPadding, ' ');
                }
                else {
                    cout << string(cellWidth + cellPadding, ' ');
                }
                if (j == cols - 1) {
                    cout << "|";
                }
            }
            cout << endl;
        }
    }
    // Dòng cuối
    for (int j = 0; j < cols; ++j) {
        if (j == 0) cout << " ";
        cout << string(cellWidth + cellPadding, '-');
        if (j < cols - 1) cout << " ";
    }
    cout << endl;
}

void createBackgroundE(string* background, int& i) {
    ifstream bg;
    bg.open("easy.txt");
    i = 0;
    while (!bg.eof()) {
        getline(bg, background[i]);
        i++;
    }
    bg.close();
}

void printBackGroundE(int x, int y)
{
    int n;
    string* background = new string[200];
    createBackgroundE(background, n);
    if (y == 0)
    {
        if (x == 0)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 1)
    {
        if (x == 0)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 2)
    {
        if (x == 0)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 3)
    {
        if (x == 0)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
}

void printBackGroundHighLightE(int x, int y)
{
    int n;
    string* background = new string[200];
    createBackgroundE(background, n);
    if (y == 0)
    {
        if (x == 0)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 1)
    {
        if (x == 0)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 2)
    {
        if (x == 0)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 3)
    {
        if (x == 0)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
}

void createBackgroundM(string* background, int& i) {
    ifstream bg;
    bg.open("medium.txt");
    i = 0;
    while (!bg.eof()) {
        getline(bg, background[i]);
        i++;
    }
    bg.close();
}

void printBackGroundM(string* background, int x, int y)
{
    int n;
    createBackgroundM(background, n);
    if (y == 0)
    {
        if (x == 0)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 1)
    {
        if (x == 0)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 2)
    {
        if (x == 0)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 3)
    {
        if (x == 0)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 4)
    {
        if (x == 0)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 5)
    {
        if (x == 0)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
}

void printBackGroundHighLightM(string* background, int x, int y)
{
    int n;
    createBackgroundM(background, n);
    if (y == 0)
    {
        if (x == 0)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 1)
    {
        if (x == 0)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 2)
    {
        if (x == 0)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 3)
    {
        if (x == 0)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 4)
    {
        if (x == 0)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 5)
    {
        if (x == 0)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    delete[] background;
}

void createBackgroundH(string* background, int& i) {
    ifstream bg;
    bg.open("hard.txt");
    i = 0;
    while (!bg.eof()) {
        getline(bg, background[i]);
        i++;
    }
    bg.close();
}

void printBackGroundH(string* background, int x, int y)
{
    int n;
    createBackgroundH(background, n);
    if (y == 0)
    {
        if (x == 0)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(36, i);
                for (int j = 36; j < 43; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 0; i < 5; i++)
            {
                gotoXY(42, i);
                for (int j = 42; j < 49; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 1)
    {
        if (x == 0)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(36, i);
                for (int j = 36; j < 43; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 4; i < 9; i++)
            {
                gotoXY(42, i);
                for (int j = 42; j < 49; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 2)
    {
        if (x == 0)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(36, i);
                for (int j = 36; j < 43; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 8; i < 13; i++)
            {
                gotoXY(42, i);
                for (int j = 42; j < 49; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 3)
    {
        if (x == 0)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(36, i);
                for (int j = 36; j < 43; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 12; i < 17; i++)
            {
                gotoXY(42, i);
                for (int j = 42; j < 49; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 4)
    {
        if (x == 0)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(36, i);
                for (int j = 36; j < 43; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 16; i < 21; i++)
            {
                gotoXY(42, i);
                for (int j = 42; j < 49; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 5)
    {
        if (x == 0)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(36, i);
                for (int j = 36; j < 43; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 20; i < 25; i++)
            {
                gotoXY(42, i);
                for (int j = 42; j < 49; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 6)
    {
        if (x == 0)
        {
            for (int i = 24; i < 29; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 24; i < 29; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 24; i < 29; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 24; i < 29; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 24; i < 29; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 24; i < 29; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 24; i < 29; i++)
            {
                gotoXY(36, i);
                for (int j = 36; j < 43; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 24; i < 29; i++)
            {
                gotoXY(42, i);
                for (int j = 42; j < 49; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 7)
    {
        if (x == 0)
        {
            for (int i = 28; i < 33; i++)
            {
                gotoXY(0, i);
                for (int j = 0; j < 7; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 28; i < 33; i++)
            {
                gotoXY(6, i);
                for (int j = 6; j < 13; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 28; i < 33; i++)
            {
                gotoXY(12, i);
                for (int j = 12; j < 19; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 28; i < 33; i++)
            {
                gotoXY(18, i);
                for (int j = 18; j < 25; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 28; i < 33; i++)
            {
                gotoXY(24, i);
                for (int j = 24; j < 31; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 28; i < 33; i++)
            {
                gotoXY(30, i);
                for (int j = 30; j < 37; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 28; i < 33; i++)
            {
                gotoXY(36, i);
                for (int j = 36; j < 43; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 28; i < 33; i++)
            {
                gotoXY(42, i);
                for (int j = 42; j < 49; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
}

void printBackGroundHighLightH(string* background, int x, int y)
{
    int n;
    createBackgroundH(background, n);
    if (y == 0)
    {
        if (x == 0)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(37, i);
                for (int j = 37; j < 42; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 1; i < 4; i++)
            {
                gotoXY(43, i);
                for (int j = 43; j < 48; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 1)
    {
        if (x == 0)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(37, i);
                for (int j = 37; j < 42; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 5; i < 8; i++)
            {
                gotoXY(43, i);
                for (int j = 43; j < 48; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 2)
    {
        if (x == 0)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(37, i);
                for (int j = 37; j < 42; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 9; i < 12; i++)
            {
                gotoXY(43, i);
                for (int j = 43; j < 48; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 3)
    {
        if (x == 0)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(37, i);
                for (int j = 37; j < 42; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 13; i < 16; i++)
            {
                gotoXY(43, i);
                for (int j = 43; j < 48; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 4)
    {
        if (x == 0)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(37, i);
                for (int j = 37; j < 42; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 17; i < 20; i++)
            {
                gotoXY(43, i);
                for (int j = 43; j < 48; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 5)
    {
        if (x == 0)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(37, i);
                for (int j = 37; j < 42; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 21; i < 24; i++)
            {
                gotoXY(43, i);
                for (int j = 43; j < 48; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 6)
    {
        if (x == 0)
        {
            for (int i = 25; i < 28; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 25; i < 28; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 25; i < 28; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 25; i < 28; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 25; i < 28; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 25; i < 28; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 25; i < 28; i++)
            {
                gotoXY(37, i);
                for (int j = 37; j < 42; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 25; i < 28; i++)
            {
                gotoXY(43, i);
                for (int j = 43; j < 48; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
    }
    else if (y == 7)
    {
        if (x == 0)
        {
            for (int i = 29; i < 32; i++)
            {
                gotoXY(1, i);
                for (int j = 1; j < 6; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 1)
        {
            for (int i = 29; i < 32; i++)
            {
                gotoXY(7, i);
                for (int j = 7; j < 12; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            for (int i = 29; i < 32; i++)
            {
                gotoXY(13, i);
                for (int j = 13; j < 18; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 3)
        {
            for (int i = 29; i < 32; i++)
            {
                gotoXY(19, i);
                for (int j = 19; j < 24; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 4)
        {
            for (int i = 29; i < 32; i++)
            {
                gotoXY(25, i);
                for (int j = 25; j < 30; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 5)
        {
            for (int i = 29; i < 32; i++)
            {
                gotoXY(31, i);
                for (int j = 31; j < 36; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 6)
        {
            for (int i = 29; i < 32; i++)
            {
                gotoXY(37, i);
                for (int j = 37; j < 42; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        else if (x == 7)
        {
            for (int i = 29; i < 32; i++)
            {
                gotoXY(43, i);
                for (int j = 43; j < 48; j++)
                {
                    cout << background[i][j];
                }
                cout << endl;
            }
        }
        }
    delete[] background;
}

void highlightCell(int x, int y, char** board, int cellWidth, int cellHeight, int cellPadding, bool highlight, string difficult) {
    string* background = new string[200];
    if (difficult == "none") goto label;
    else if (board[y][x] == '-')
    {
        highlight ? setConsoleColor(HIGHLIGHT) : setConsoleColor(WHITE);
        if (difficult == "easy") printBackGroundHighLightE(x, y);
        else if (difficult == "medium") printBackGroundHighLightM(background, x, y);
        else if (difficult == "hard") printBackGroundHighLightH(background, x, y);
        setConsoleColor(WHITE);
        return;
    }
    label:
    gotoXY(x * (cellWidth + cellPadding + 1) + 1, y * cellHeight + cellHeight / 2 - 1);
    highlight ? setConsoleColor(HIGHLIGHT) : setConsoleColor(WHITE);
    cout << "     ";
    gotoXY(x * (cellWidth + cellPadding + 1) + 1, y * cellHeight + cellHeight / 2);
    //cout << setw(cellWidth) << board[y][x] << "  " << endl;
    cout << "  " << board[y][x] <<"  "<< endl;
    gotoXY(x * (cellWidth + cellPadding + 1) + 1, y * cellHeight + cellHeight / 2 +1);
    cout << "     ";
    setConsoleColor(WHITE);
    delete[] background;
}

void highlightCellforEnter(int x, int y, char** board, int cellWidth, int cellHeight, int cellPadding, bool highlight, string difficult) {
    string* background = new string[200];
    if (difficult == "none") goto label;
    else if (board[y][x] == '-')
    {
        highlight ? setConsoleColor((LIGHT_GREEN << 4) | BRIGHT_WHITE) : setConsoleColor(WHITE);
        if (difficult == "easy") printBackGroundHighLightE(x, y);
        else if (difficult == "medium") printBackGroundHighLightM(background, x, y);
        else if (difficult == "hard") printBackGroundHighLightH(background, x, y);
        setConsoleColor(WHITE);
        return;
    }
label:
    gotoXY(x * (cellWidth + cellPadding + 1) + 1, y * cellHeight + cellHeight / 2 - 1);
    highlight ? setConsoleColor((LIGHT_GREEN << 4) | BRIGHT_WHITE) : setConsoleColor(WHITE);
    cout << "     ";
    gotoXY(x * (cellWidth + cellPadding + 1) + 1, y * cellHeight + cellHeight / 2);
    cout << "  " << board[y][x] << "  " << endl;
    gotoXY(x * (cellWidth + cellPadding + 1) + 1, y * cellHeight + cellHeight / 2 + 1);
    cout << "     ";
    setConsoleColor(WHITE);
    delete[] background;
}

void highlightCellforEnterError(int x, int y, char** board, int cellWidth, int cellHeight, int cellPadding, bool highlight, string difficult) {
    string* background = new string[200];
    if (difficult == "none") goto label;
    else if (board[y][x] == '-')
    {
        highlight ? setConsoleColor((RED << 4) | BRIGHT_WHITE) : setConsoleColor(WHITE);
        if (difficult == "easy") printBackGroundHighLightE(x, y);
        else if (difficult == "medium") printBackGroundHighLightM(background, x, y);
        else if (difficult == "hard") printBackGroundHighLightH(background, x, y);
        setConsoleColor(WHITE);
        return;
    }
label: 
    gotoXY(x * (cellWidth + cellPadding + 1) + 1, y * cellHeight + cellHeight / 2 - 1);
    highlight ? setConsoleColor((RED << 4) | BRIGHT_WHITE) : setConsoleColor(WHITE);
    cout << "     ";
    gotoXY(x * (cellWidth + cellPadding + 1) + 1, y * cellHeight + cellHeight / 2);
    cout << "  " << board[y][x] << "  " << endl;
    gotoXY(x * (cellWidth + cellPadding + 1) + 1, y * cellHeight + cellHeight / 2 + 1);
    cout << "     ";
    setConsoleColor(WHITE);
    delete[] background;
}

// Hàm để khởi tạo bảng với các kí tự ngẫu nhiên
void fillBoardWithPairs(char**& board, int m, int n) { // Sử dụng tham chiếu đến con trỏ để thay đổi mảng được truyền vào
    srand(static_cast<unsigned int>(time(NULL)));
    int size = m * n;
    char* characters = new char[size];

    // Kiểm tra xem tổng số ô có phải là số chẵn hay không
    if (size % 2 != 0) {
        clearScreen();
        std::cout << "The board has an odd number of cells. Can't fill with pairs." << endl;
        delete[] characters;
        return;
    }
    int count = 0;
    // Tạo ra một mảng chứa các cặp ký tự ngẫu nhiên
    for (int i = 0; i < size / 2; ++i) {
        char tmp = 'A' + rand() % 26;
        characters[count++] = tmp; // Tạo cặp ký tự từ 'A' đến 'Z'
        characters[count++] = tmp;
    }

    // Trộn lẫn các cặp ký tự để chúng xuất hiện ngẫu nhiên trên bảng
    random_shuffle(characters, characters + size);

    // Điền các ký tự vào bảng
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            board[i][j] = characters[i * n + j];
        }
    }

    delete[] characters; // Giải phóng bộ nhớ
}

void drawContinue(const vector<string>& options, int highlightIndex) {
    for (int i = 0; i < options.size(); ++i) {
        gotoXY(40, 6 + i * 4); // Điều chỉnh vị trí xuất hiện của menu
        if (i == highlightIndex) {
            setConsoleColor(HIGHLIGHT); // Highlight lựa chọn
        }
        else {
            setConsoleColor(WHITE); // Màu bình thường
        }
        std::cout << "------------------"; // Vẽ phần đầu của khung
        gotoXY(40, 7 + i * 4); // Điều chỉnh vị trí xuất hiện của lựa chọn
        std::cout << "|";
        std::cout << options[i];
        for (int j = (int)options[i].length(); j < 16; ++j) {
            std::cout << " "; // Điền khoảng trống để đồng bộ chiều dài
        }
        std::cout << "|";
        gotoXY(40, 8 + i * 4); // Vẽ phần dưới của khung
        std::cout << "------------------";
    }
    setConsoleColor(WHITE); // Reset màu sắc sau khi vẽ menu
}

void printContinue(bool& isRunning,leaderboard L[100], string df)
{
    isRunning = true;
    TextColor(LIGHT_RED);
    playSound(WIN_SOUND);
    gotoXY(35, 1);
    cout << "+" << string(30, '-') << "+\n"; // Cải thiện: Sử dụng một hàng duy nhất với chiều rộng thích hợp
    gotoXY(35, 2);
    cout << "| " << left << setw(29) << "   You win !!!!!" << "|\n";
    gotoXY(35, 3);
    cout << "| " << left << setw(29) << "   Are you want to continue!" << "| \n";
    gotoXY(35, 4);
    cout << "|                              |\n";
    gotoXY(35, 5);
    cout << "|                              |\n";
    gotoXY(35, 6);
    cout << "|                              |\n";
    gotoXY(35, 7);
    cout << "|                              |\n";
    gotoXY(35, 8);
    cout << "|                              |\n";
    gotoXY(35, 9);
    cout << "|                              |\n";
    gotoXY(35, 10);
    cout << "|                              |\n";
    gotoXY(35, 11);
    cout << "|                              |\n";
    gotoXY(35, 12);
    cout << "|                              |\n";
    gotoXY(35, 13);
    cout << "|                              |\n";
    gotoXY(35, 14);
    cout << "+" << string(30, '-') << "+\n";
    vector<string> menuOptions = { "Yes", "No" };
    int selectedIndex = 0;
    drawContinue(menuOptions, selectedIndex);
    //playSound(BACKGROUND_SOUND);
    bool running = true;
    while (running) {
        if (_kbhit()) { // Kiểm tra xem có phím nào được nhấn không
            int key = _getch();

            switch (key) {
            case 72: // Phím mũi tên lên
                selectedIndex = (selectedIndex - 1 + (int)menuOptions.size()) % (int)menuOptions.size();
                break;
            case 80: // Phím mũi tên xuống
                selectedIndex = (selectedIndex + 1) % (int)menuOptions.size();
                break;
            case 13: // Phím Enter
                running = false; // Thoát vòng lặp
                break;
            }
            drawExit(menuOptions, selectedIndex);
        }
    }
    if (menuOptions[selectedIndex] == "Yes")
    {
        clearScreen();
        char** board = nullptr;
        printInterface(L);
        int score = 0;
        if (df == "easy")
        {
            medium(board, 6, 6, score, L);
        }
        else if (df == "medium" || df == "hard")
        {
            clearScreen();
            hard(board, 8, 8, score, L);
        }
    }
    else if (menuOptions[selectedIndex] == "No")
    {
        clearScreen();
        isRunning = false;
    }
}

void easy(char** board, int rows, int cols, int& score,leaderboard L[100]) {
    rows = 4; // Số hàng của bảng
    cols = 4; // Số cột của bảng
    bool checkcur = false;  //check xem còn ô không
    int currentX = 0; // Vị trí hiện tại của con trỏ theo hàng
    int currentY = 0; // Vị trí hiện tại của con trỏ theo cột
    bool firstSelectionMade = false; // Kiểm tra xem lựa chọn đầu tiên đã được thực hiện chưa
    int firstX = -1, firstY = -1; // Lưu vị trí của lựa chọn đầu tiên
    score = 0;
    string df = "easy";
    setConsoleColor(WHITE);
    printInterface(L);
    gotoXY(80, 17);
    cout << "     ";
    gotoXY(80, 17);
    cout << score;
    gotoXY(0, 0);
    // Khởi tạo bảng
    board = new char* [rows];
    for (int i = 0; i < rows; ++i) {
        board[i] = new char[cols];
    }
    fillBoardWithPairs(board, rows, cols);
    // Vẽ bảng lần đầu tiên
    drawBoard2P(board, rows, cols);
    showCursor(false);
    // Highlight ô đầu tiên
    highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
    bool running = true;
    bool isRunning = true;
    while (running) {
        if (_kbhit()) {
            // Xóa highlight ô hiện tại
            highlightCell(currentX, currentY, board, 3, 4, 2, false, df);
            if (firstX != -1 &&  firstY != -1)
            {
                highlightCellforEnter(firstX, firstY, board, 3, 4, 2, true, df);
            }
            int key = _getch();
            if (key == 0 || key == 224)
            {
                key = _getch();
                switch (key) {
                case KEY_UP:
                    playSound(MOVE_SOUND);
                    currentY = max(0, currentY - 1);
                    break;
                case KEY_DOWN:
                    playSound(MOVE_SOUND);
                    currentY = min(rows - 1, currentY + 1);
                    break;
                case KEY_LEFT:
                    playSound(MOVE_SOUND);
                    currentX = max(0, currentX - 1);
                    break;
                case KEY_RIGHT:
                    playSound(MOVE_SOUND);
                    currentX = min(cols - 1, currentX + 1);
                    break;
                }
                highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
            }
            else
            {
                if (key == 77 || key == 109)
                {
                    if (MoveSuggestionUpdate(board, rows, cols))
                    {
                        highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
                    }
                }
                else if (key == 72 || key == 104)
                {
                    clearScreen();
                    printHelp(L);
                }
                else if (key == KEY_ESC)
                {
                    clearScreen();
                    exit(EXIT_FAILURE);
                    break;
                }
                else if (key == KEY_ENTER)
                {
                    playSound(ENTER_SOUND);
                    if (!firstSelectionMade) {
                        // Lưu vị trí lựa chọn đầu tiên và highlight
                        firstX = currentX;
                        firstY = currentY;
                        firstSelectionMade = true;
                    }
                    else {
                        // Lựa chọn thứ hai, kiểm tra khớp và vẽ lại bảng
                        checkeasy(board, firstX, firstY, currentX, currentY, rows, cols, score);
                        gotoXY(80, 17);
                        cout << "     ";
                        gotoXY(80, 17);
                        cout << score;
                        gotoXY(currentX, currentY);
                        firstSelectionMade = false; // Đặt lại cho lựa chọn tiếp theo
                        firstX = firstY = -1;
                        // Xóa highlight của lựa chọn thứ nhất và thứ hai
                    }
                }
                // Highlight ô mới sau khi di chuyển hoặc thực hiện lựa chọn
                highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
                if (firstSelectionMade) {
                    // Highlight lựa chọn đầu tiên nếu nó đã được thực hiện
                    highlightCellforEnter(firstX, firstY, board, 3, 4, 2, true, df);
                }
                if (isFinished(board, rows, cols))
                {
                    // Vẽ lại bảng một lần nữa để đảm bảo người dùng nhìn thấy trạng thái cuối cùng
                    //drawBoard2P(board, rows, cols); // Không highlight ô nào
                    clearScreen();
                    printContinue(running,L, df);
                    // Có thể thêm một đợi nhấn phím ở đây nếu muốn
                }
                else
                {
                    if (!MoveSuggestion(board, rows, cols))
                    {
                        score = 0;
                        checkcur = true;
                        break;
                    }
                }
            }
        }
    }
    if (checkcur)
    {
        playSound(LOSE_SOUND);
        clearScreen();
        TextColor(LIGHT_RED);
        Sleep(500);
        gotoXY(35, 1);
        cout << "+" << string(40, '-') << "+\n"; // Cải thiện: Sử dụng một hàng duy nhất với chiều rộng thích hợp
        gotoXY(35, 2);
        cout << "| " << left << setw(39) << "   You lose !!!!!" << "|\n";
        gotoXY(35, 3);
        cout << "| " << left << setw(39) << "Wait for a minute to play again!" << "| \n";
        gotoXY(35, 4);
        cout << "|                                        |\n";
        gotoXY(35, 5);
        cout << "|                                        |\n";
        gotoXY(35, 6);
        cout << "|                                        |\n";
        gotoXY(35, 7);
        cout << "+" << string(40, '-') << "+\n";
        Sleep(5000);
        PlaySound(NULL, 0, 0);
        clearScreen();
        easy(board, rows, cols, score,L);
    }
    // Giải phóng bộ nhớ của bảng
    for (int i = 0; i < rows; ++i) {
        delete[] board[i];
    }
    delete[] board;
}

void medium(char** board, int rows, int cols, int& score, leaderboard L[100]) {
    rows = 6; // Số hàng của bảng
    cols = 6; // Số cột của bảng
    bool checkcur = false;  //check xem còn ô không
    int currentX = 0; // Vị trí hiện tại của con trỏ theo hàng
    int currentY = 0; // Vị trí hiện tại của con trỏ theo cột
    bool firstSelectionMade = false; // Kiểm tra xem lựa chọn đầu tiên đã được thực hiện chưa
    int firstX = -1, firstY = -1; // Lưu vị trí của lựa chọn đầu tiên
    score = 0;
    string df = "medium";
    setConsoleColor(WHITE);
    printInterface(L);
    gotoXY(80, 17);
    cout << "     ";
    gotoXY(80, 17);
    cout << score;
    gotoXY(0, 0);
    // Khởi tạo bảng
    board = new char* [rows];
    for (int i = 0; i < rows; ++i) {
        board[i] = new char[cols];
    }
    fillBoardWithPairs(board, rows, cols);
    // Vẽ bảng lần đầu tiên
    drawBoard2P(board, rows, cols);
    showCursor(false);
    // Highlight ô đầu tiên
    highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
    bool running = true;
    bool isRunning = true;
    while (running) {
        if (_kbhit()) {
            // Xóa highlight ô hiện tại
            highlightCell(currentX, currentY, board, 3, 4, 2, false, df);
            if (firstX != -1 && firstY != -1)
            {
                highlightCellforEnter(firstX, firstY, board, 3, 4, 2, true, df);
            }
            int key = _getch();
            if (key == 0 || key == 224)
            {
                key = _getch();
                switch (key) {
                case KEY_UP:
                    playSound(MOVE_SOUND);
                    currentY = max(0, currentY - 1);
                    break;
                case KEY_DOWN:
                    playSound(MOVE_SOUND);
                    currentY = min(rows - 1, currentY + 1);
                    break;
                case KEY_LEFT:
                    playSound(MOVE_SOUND);
                    currentX = max(0, currentX - 1);
                    break;
                case KEY_RIGHT:
                    playSound(MOVE_SOUND);
                    currentX = min(cols - 1, currentX + 1);
                    break;
                }
                highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
            }
            else
            {
                if (key == 77 || key == 109)
                {
                    if (MoveSuggestionUpdate(board, rows, cols))
                    {
                        highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
                    }
                }
                else if (key == 72 || key == 104)
                {
                    printHelp(L);
                }
                else if (key == KEY_ESC)
                {
                    clearScreen();
                    exit(EXIT_FAILURE);
                    break;
                }
                else if (key == KEY_ENTER)
                {
                    playSound(ENTER_SOUND);
                    if (!firstSelectionMade) {
                        // Lưu vị trí lựa chọn đầu tiên và highlight
                        firstX = currentX;
                        firstY = currentY;
                        firstSelectionMade = true;
                    }
                    else {
                        // Lựa chọn thứ hai, kiểm tra khớp và vẽ lại bảng
                        checkmedium(board, firstX, firstY, currentX, currentY, rows, cols, score);
                        gotoXY(80, 17);
                        cout << "     ";
                        gotoXY(80, 17);
                        cout << score;
                        gotoXY(currentX, currentY);
                        firstSelectionMade = false; // Đặt lại cho lựa chọn tiếp theo
                        firstX = firstY = -1;
                        // Xóa highlight của lựa chọn thứ nhất và thứ hai
                    }
                }
                // Highlight ô mới sau khi di chuyển hoặc thực hiện lựa chọn
                highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
                if (firstSelectionMade) {
                    // Highlight lựa chọn đầu tiên nếu nó đã được thực hiện
                    highlightCellforEnter(firstX, firstY, board, 3, 4, 2, true, df);
                }
                if (isFinished(board, rows, cols))
                {
                    // Vẽ lại bảng một lần nữa để đảm bảo người dùng nhìn thấy trạng thái cuối cùng
                    //drawBoard2P(board, rows, cols); // Không highlight ô nào
                    clearScreen();
                    printContinue(running, L, df);
                    // Có thể thêm một đợi nhấn phím ở đây nếu muốn
                }
                else
                {
                    if (!MoveSuggestion(board, rows, cols))
                    {
                        score = 0;
                        checkcur = true;
                        break;
                    }
                }
            }
        }
    }
    if (checkcur)
    {
        clearScreen();
        TextColor(LIGHT_RED);
        gotoXY(35, 1);
        cout << "+" << string(30, '-') << "+\n"; // Cải thiện: Sử dụng một hàng duy nhất với chiều rộng thích hợp
        gotoXY(35, 2);
        playSound(LOSE_SOUND);
        cout << "| " << left << setw(29) << "   You lose !!!!!" << "|\n";
        gotoXY(35, 3);
        cout << "| " << left << setw(29) << "Wait for a minute to play again!" << "| \n";
        gotoXY(35, 4);
        cout << "|                              |\n";
        gotoXY(35, 5);
        cout << "|                              |\n";
        gotoXY(35, 6);
        cout << "|                              |\n";
        gotoXY(35, 7);
        cout << "+" << string(30, '-') << "+\n";
        Sleep(1000);
        PlaySound(NULL, 0, 0);
        clearScreen();
        medium(board, rows, cols, score, L);
    }
    // Giải phóng bộ nhớ của bảng
    for (int i = 0; i < rows; ++i) {
        delete[] board[i];
    }
    delete[] board;
}

void hard(char** board, int rows, int cols, int& score, leaderboard L[100]) {
    rows = 8; // Số hàng của bảng
    cols = 8; // Số cột của bảng
    bool checkcur = false;  //check xem còn ô không
    int currentX = 0; // Vị trí hiện tại của con trỏ theo hàng
    int currentY = 0; // Vị trí hiện tại của con trỏ theo cột
    bool firstSelectionMade = false; // Kiểm tra xem lựa chọn đầu tiên đã được thực hiện chưa
    int firstX = -1, firstY = -1; // Lưu vị trí của lựa chọn đầu tiên
    score = 0;
    string df = "hard";
    setConsoleColor(WHITE);
    printInterface(L);
    gotoXY(80, 17);
    cout << "     ";
    gotoXY(80, 17);
    cout << score;
    gotoXY(0, 0);
    // Khởi tạo bảng
    board = new char* [rows];
    for (int i = 0; i < rows; ++i) {
        board[i] = new char[cols];
    }
    fillBoardWithPairs(board, rows, cols);
    // Vẽ bảng lần đầu tiên
    drawBoard2P(board, rows, cols);
    showCursor(false);
    // Highlight ô đầu tiên
    highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
    bool running = true;
    bool isRunning = true;
    while (running) {
        if (_kbhit()) {
            // Xóa highlight ô hiện tại
            highlightCell(currentX, currentY, board, 3, 4, 2, false, df);
            if (firstX != -1 && firstY != -1)
            {
                highlightCellforEnter(firstX, firstY, board, 3, 4, 2, true, df);
            }
            int key = _getch();
            if (key == 0 || key == 224)
            {
                key = _getch();
                switch (key) {
                case KEY_UP:
                    playSound(MOVE_SOUND);
                    currentY = max(0, currentY - 1);
                    break;
                case KEY_DOWN:
                    playSound(MOVE_SOUND);
                    currentY = min(rows - 1, currentY + 1);
                    break;
                case KEY_LEFT:
                    playSound(MOVE_SOUND);
                    currentX = max(0, currentX - 1);
                    break;
                case KEY_RIGHT:
                    playSound(MOVE_SOUND);
                    currentX = min(cols - 1, currentX + 1);
                    break;
                }
                highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
            }
            else
            {
                if (key == 77 || key == 109)
                {
                    if (MoveSuggestionUpdate(board, rows, cols))
                    {
                        highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
                    }
                }
                else if (key == 72 || key == 104)
                {
                    printHelp(L);
                }
                else if (key == KEY_ESC)
                {
                    clearScreen();
                    clearScreen();
                    exit(EXIT_FAILURE);
                }
                else if (key == KEY_ENTER)
                {
                    playSound(ENTER_SOUND);
                    if (!firstSelectionMade) {
                        // Lưu vị trí lựa chọn đầu tiên và highlight
                        firstX = currentX;
                        firstY = currentY;
                        firstSelectionMade = true;
                    }
                    else {
                        // Lựa chọn thứ hai, kiểm tra khớp và vẽ lại bảng
                        checkhard(board, firstX, firstY, currentX, currentY, rows, cols, score);
                        gotoXY(80, 17);
                        cout << "     ";
                        gotoXY(80, 17);
                        cout << score;
                        gotoXY(currentX, currentY);
                        firstSelectionMade = false; // Đặt lại cho lựa chọn tiếp theo
                        firstX = firstY = -1;
                        // Xóa highlight của lựa chọn thứ nhất và thứ hai
                    }
                }
                // Highlight ô mới sau khi di chuyển hoặc thực hiện lựa chọn
                highlightCell(currentX, currentY, board, 3, 4, 2, true, df);
                if (firstSelectionMade) {
                    // Highlight lựa chọn đầu tiên nếu nó đã được thực hiện
                    highlightCellforEnter(firstX, firstY, board, 3, 4, 2, true, df);
                }
                if (isFinished(board, rows, cols))
                {
                    // Vẽ lại bảng một lần nữa để đảm bảo người dùng nhìn thấy trạng thái cuối cùng
                    //drawBoard2P(board, rows, cols); // Không highlight ô nào
                    clearScreen();
                    printContinue(running, L, df);
                    // Có thể thêm một đợi nhấn phím ở đây nếu muốn
                }
                else
                {
                    if (!MoveSuggestion(board, rows, cols))
                    {
                        score = 0;
                        checkcur = true;
                        break;
                    }
                }
            }
        }
    }
    if (checkcur)
    {
        clearScreen();
        TextColor(LIGHT_RED);
        gotoXY(35, 1);
        cout << "+" << string(30, '-') << "+\n"; // Cải thiện: Sử dụng một hàng duy nhất với chiều rộng thích hợp
        gotoXY(35, 2);
        playSound(LOSE_SOUND);
        cout << "| " << left << setw(29) << "   You lose !!!!!" << "|\n";
        gotoXY(35, 3);
        cout << "| " << left << setw(29) << "Wait for a minute to play again!" << "| \n";
        gotoXY(35, 4);
        cout << "|                              |\n";
        gotoXY(35, 5);
        cout << "|                              |\n";
        gotoXY(35, 6);
        cout << "|                              |\n";
        gotoXY(35, 7);
        cout << "+" << string(30, '-') << "+\n";
        Sleep(1000);
        PlaySound(NULL, 0, 0);
        clearScreen();
        hard(board, rows, cols, score, L);
    }
    // Giải phóng bộ nhớ của bảng
    for (int i = 0; i < rows; ++i) {
        delete[] board[i];
    }
    delete[] board;
}
