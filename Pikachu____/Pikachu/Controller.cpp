#pragma once
#include "Controller.h"

void playSound(int i)
{
	static vector<const wchar_t*> soundFile{ L"move.wav", L"enter.wav", L"error.wav", L"placed.wav", L"win.wav",  L"background.wav", L"effect.wav", L"lose.wav", L"jack.wav", L"mtp.wav", L"tiktok.wav" };
	//tham khảo file controller
	PlaySound(soundFile[i], NULL, SND_FILENAME | SND_ASYNC);
	/*PlaySound(link, NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);*/
}

void gotoXY(int x, int y) 
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setConsoleColor(WORD color) 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void clearScreen() 
{
	system("cls");
}

void TextColor(int x)//X là mã màu
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, x);
}

void showCursor(bool show) // tham khảo game master 
{
	HANDLE consoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info = { 1, show };
	SetConsoleCursorInfo(consoleOutput, &info);
}

