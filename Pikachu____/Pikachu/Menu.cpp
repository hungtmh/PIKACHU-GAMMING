#pragma once
#include "Controller.h"
#include "Menu.h"
#include "Image.h"
#include "Playgame.h"

using namespace std;

void drawMenu(const vector<string>& options, int highlightIndex) {
    for (int i = 0; i < options.size(); ++i) {
        gotoXY(40,  10+ i * 4); // Điều chỉnh vị trí xuất hiện của menu
        if (i == highlightIndex) {
            setConsoleColor(HIGHLIGHT); // Highlight lựa chọn
        }
        else {
            setConsoleColor(WHITE); // Màu bình thường
        }
        std::cout << "------------------"; // Vẽ phần đầu của khung
        gotoXY(40, 11 + i * 4); // Điều chỉnh vị trí xuất hiện của lựa chọn
        std::cout << "|";
        std::cout << options[i];
        for (int j = (int)options[i].length(); j < 16; ++j) {
            std::cout << " "; // Điền khoảng trống để đồng bộ chiều dài
        }
        std::cout << "|";
        gotoXY(40, 12 + i * 4); // Vẽ phần dưới của khung
        std::cout << "------------------";
    }
    setConsoleColor(WHITE); // Reset màu sắc sau khi vẽ menu
}


void menu(leaderboard L[100])
{
    gotoXY(40, 0);
    TextColor(AQUA);
    cout << "Bui Duong Duy Cuong: 23127033";
    gotoXY(40, 1);
    TextColor(GREEN);
    cout << "Tran Manh Hung: 23127195";
    displayLogo(20, 3);
    playSound(ENTER_SOUND);
    pikachuMenu(60, 10);
    vector<string> menuOptions = { "Start", "LeaderBoard", "Help", "Exit"};
    int selectedIndex = 0;
    drawMenu(menuOptions, selectedIndex);
    //playSound(BACKGROUND_SOUND);
    bool running = true;
    while (running) {
        if (_kbhit()) 
        { // Kiểm tra xem có phím nào được nhấn không
            
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
            drawMenu(menuOptions, selectedIndex);
        }
    }
    // TODO: Xử lý tương ứng với lựa chọn
    if (menuOptions[selectedIndex] == "Start")
    {
        playSound(ENTER_SOUND);
        stageDifficult(L);
    }
    else if (menuOptions[selectedIndex] == "LeaderBoard")
    {
        playSound(ENTER_SOUND);
        printLeaderboard("Leaderboard.txt", L);
    }
    else if (menuOptions[selectedIndex] == "Help")
    {
        playSound(ENTER_SOUND);
        printHelp(L);
    }
    else
    {
        PlaySound(NULL, 0, 0);
        printExit(L);
    }
}

void printRectangle(int left, int top, int width, int height)
{
    gotoXY(left, top);
    putchar(218);
    for (int i = 0; i < width; i++)
        putchar(196);
    putchar(191);

    int i = 0;
    for (; i < height; i++)
    {
        gotoXY(left, top + i + 1);
        putchar(179);
        gotoXY(left + width + 1, top + i + 1);
        putchar(179);
    }

    gotoXY(left, top + i);
    putchar(192);
    for (i = 0; i < width; i++)
        putchar(196);
    putchar(217);
}

void printInterface(leaderboard L[100])
{
    ifstream fin("Leaderboard.txt");
    ofstream fout("Leaderboard.txt", ios::app);
    int t = 0;
    setConsoleColor(WHITE);
    printRectangle(59, 0, 33, 10);

    printRectangle(60, 1, 31, 2);
    setConsoleColor(RED);
    gotoXY(67, 2);
    cout << "PLAYER'S INFORMATION";

    setConsoleColor(BLUE);
    gotoXY(65, 5);
    if (L[t].name.size() != 0)
        cout << "Player's name: " << L[t].name;
    else {
        cout << "Player's name: unknown";
    }
    gotoXY(65, 7);
    if (L[t].MSSV.size() != 0)
        cout << "Student's ID: " << L[t].MSSV;
    else {
        cout << "Student's ID: unknown";
    }

    setConsoleColor(WHITE);
    printRectangle(59, 12, 33, 10);
    setConsoleColor(WHITE);
    printRectangle(60, 13, 31, 2);
    setConsoleColor(RED);
    gotoXY(69, 14);
    cout << "GAME INFORMATION";
    setConsoleColor(BLUE);
    gotoXY(65, 17);
    cout << "Current score:";
    gotoXY(80, 17);
    cout << L[t].score;

    setConsoleColor(WHITE);
    printRectangle(59, 24, 33, 2);
    printRectangle(59, 27, 14, 2);
    printRectangle(78, 27, 14, 2);

    setConsoleColor(PURPLE);
    gotoXY(67, 25);
    cout << "M : Move suggestion";
    setConsoleColor(GREEN);
    gotoXY(63, 28);
    cout << "H : Help";
    setConsoleColor(YELLOW);
    gotoXY(81, 28);
    cout << "Esc : Exit";
    gotoXY(0, 0);
    setConsoleColor(WHITE);
    t++;
}

void stageDifficult(leaderboard L[100])
{
    clearScreen();
    vector<string> menuOptions = { "Easy", "Medium", "Hard" };
    int selectedIndex = 0;
    drawMenu(menuOptions, selectedIndex);
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
            drawMenu(menuOptions, selectedIndex);
        }
    }
    int t = 0;
    ofstream fout("Leaderboard.txt", ios::app);
    
    if (menuOptions[selectedIndex] == "Easy")
    {
        clearScreen();
        showCursor(true);
        gotoXY(20, 0);
        std::cout << "Nhap vao ten: ";
        getline(cin, L[t].name);
        gotoXY(20, 1);
        std::cout << "Nhap vao MSSV: ";
        getline(cin, L[t].MSSV);
        L[t].score = 0;
        clearScreen();
        //Này là chỗ để chạy hàm game
        printInterface(L);
        char** board = nullptr;
        easy(board, 4, 4, L[t].score,L);
        fout << L[t].name << "\n";
        fout << L[t].MSSV << "\n";
        fout << L[t].score << "\n";
        string difficult = "easy";
        fout << difficult << "\n";
    }
    else if (menuOptions[selectedIndex] == "Medium")
    {
        clearScreen();
        showCursor(true);
        gotoXY(20, 0);
        std::cout << "Nhap vao ten: ";
        getline(cin, L[t].name);
        gotoXY(20, 1);
        std::cout << "Nhap vao MSSV: ";
        getline(cin, L[t].MSSV);
        L[t].score = 0;
        clearScreen();
        showCursor(false);
        printInterface(L);
        char** board = nullptr;
        medium(board, 6, 6, L[t].score, L);
        fout << L[t].name << "\n";
        fout << L[t].MSSV << "\n";
        fout << L[t].score << "\n";
        string difficult = "meidum";
        fout << difficult << "\n";
    }
    else if (menuOptions[selectedIndex] == "Hard")
    {
        clearScreen();
        showCursor(true);
        gotoXY(20, 0);
        std::cout << "Nhap vao ten: ";
        getline(cin, L[t].name);
        gotoXY(20, 1);
        std::cout << "Nhap vao MSSV: ";
        getline(cin, L[t].MSSV);
        L[t].score = 0;
        clearScreen();
        showCursor(false);
        printInterface(L);
        char** board = nullptr;
        hard(board, 8, 8, L[t].score, L); 
        fout << L[t].name << "\n";
        fout << L[t].MSSV << "\n";
        fout << L[t].score << "\n";
        string difficult = "hard";
        fout << difficult << "\n";
    }
    t++;
    fout.close();
}

void printLeaderboard(string fileName, leaderboard L[100]) {
    clearScreen();
    ifstream fin(fileName);
    int t = 0;

    if (fin.is_open()) {
        while (getline(fin, L[t].name) && getline(fin, L[t].MSSV) && fin >> L[t].score && fin.ignore() && getline(fin, L[t].difficult)) {
            t++;
        }
    }
    else {
        std::cout << "Unable to open file" << endl;
        return;
    }
    fin.close(); // Đóng file sau khi đọc xong

    // Tính chiều rộng cho mỗi cột
    int nameWidth = 4; // "Name" có 4 ký tự
    int mssvWidth = 4; // "MSSV" có 4 ký tự
    int scoreWidth = 6;
    int difficultWidth = 10;
    for (int i = 0; i < min(t,4); ++i) {
        nameWidth = max(nameWidth, static_cast<int>(L[i].name.length()));
        mssvWidth = max(mssvWidth, static_cast<int>(L[i].MSSV.length()));
    }

    // Vẽ tiêu đề cột
    cout << "+" << string(nameWidth + 2, '-') << "+" << string(mssvWidth + 2, '-') << "+" << string(scoreWidth + 2, '-') << "+" << string(difficultWidth + 2, '-') << "+\n";
    cout << "| " << left << setw(nameWidth) << "Name" << " | " << setw(mssvWidth) << "MSSV" << " | " << setw(scoreWidth) << "Score" << " | " << setw(difficultWidth) << "Difficult" << " |\n";
    cout << "+" << string(nameWidth + 2, '-') << "+" << string(mssvWidth + 2, '-') << "+" << string(scoreWidth + 2, '-') << "+" << string(difficultWidth + 2, '-') << "+\n";

    for (int i = 0; i < t - 1; i++)
        for (int j = i + 1; j < t; j++)
            if (L[i].score < L[j].score)
                swap(L[i], L[j]);
    // Vẽ nội dung bảng
    for (int i = 0; i < min(t,4); ++i) {
        cout << "| " << setw(nameWidth) << L[i].name << " | " << setw(mssvWidth) << L[i].MSSV << " | " << setw(scoreWidth) << L[i].score << " | " << setw(difficultWidth) << L[i].difficult << " |\n";
    }

    // Vẽ chân bảng
    cout << "+" << string(nameWidth + 2, '-') << "+" << string(mssvWidth + 2, '-') << "+" << string(scoreWidth + 2, '-') << "+" << string(difficultWidth + 2, '-') << "+\n";
    bool running = true;
    gotoXY(75, 0);
    int checkcur = false; // check xem người chơi có nhấn BACKSPACE không
    cout << "If you want to back to menu, press BACKSPACE";
    while (running) {
        if (_kbhit())
        { // Kiểm tra xem có phím nào được nhấn không

            int key = _getch();
            if (key == 8) // 8 là nút Backspace
            {
                checkcur = true;
                break;
            }
        }
    }
    if (checkcur)
    {
        clearScreen();
        menu(L);
    }
}

void printHelp(leaderboard L[100])
{
    clearScreen();
    TextColor(LIGHT_RED);
    cout << "+" << string(71, '-') << "+\n"; // Cải thiện: Sử dụng một hàng duy nhất với chiều rộng thích hợp
    cout << "| " << left << setw(70) << "* Your mission is to Match all the pairs of letters on the screen." << "|\n";
    cout << "| " << setw(70) << "* Use ARROW KEY on your keyboard to move Up, Down, Left, and Right."<< "| \n";
    cout << "| " << setw(70) << "* Use ENTER to selecta letter to match." << "|\n";
    cout << "| " << setw(70) << "* For each matched pair, you get 10 point." << "|\n";
    cout << "| " << setw(70) << "* For each wrong pair, 5 point will be deducted" << "|\n";
    cout << "| " << setw(70) << "* You win if all the matching pairs are found" << "|\n";
    cout << "| " << setw(70) << "* The scores will be sorted in the Leaderboard" << "|\n";
    cout << "| " << setw(70) << "and print out the 4 people with the highest scores" << "|\n";
    cout << "+" << string(71, '-') << "+\n";
    bool running = true;
    gotoXY(75, 0);
    cout << "If you want to back to menu, press BACKSPACE";
    while (running) {
        if (_kbhit())
        { // Kiểm tra xem có phím nào được nhấn không

            int key = _getch();
            if (key == 8) // 8 là nút Backspace
            {
                clearScreen();
                menu(L);
            }
        }
    }
    TextColor(RED | GREEN | BLUE);
}

void drawExit(const vector<string>& options, int highlightIndex) {
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

void printExit(leaderboard L[100])
{
    clearScreen();
    TextColor(LIGHT_RED);
    gotoXY(35,2);
    cout << "+" << string(30, '-') << "+\n"; // Cải thiện: Sử dụng một hàng duy nhất với chiều rộng thích hợp
    gotoXY(35,3);
    cout << "| " << left << setw(29) << "   Are you want to quit!!!" << "|\n";
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
    vector<string> menuOptions = { "Yes", "No"};
    int selectedIndex = 0;
    drawExit(menuOptions, selectedIndex);
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
        cout << "\n\n\n\n\n\n\n\n\n\n";
        exit(EXIT_FAILURE);
    }
    else if (menuOptions[selectedIndex] == "No")
    {
        clearScreen();
        menu(L);
    }
}