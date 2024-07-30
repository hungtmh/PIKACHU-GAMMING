#include "Menu.h"
#include "Controller.h"
using namespace std;

int main()
{
	leaderboard L[100]; 
    gotoXY(15, 10);
    setConsoleColor((RED << 4) | BRIGHT_WHITE);
    cout << "Please press f11 to enable fullscreen before playing! "; 
    gotoXY(15, 14); 
    system("pause");
    setConsoleColor(WHITE);
    clearScreen();
    showCursor(false);
    menu(L);
    return 0;
}