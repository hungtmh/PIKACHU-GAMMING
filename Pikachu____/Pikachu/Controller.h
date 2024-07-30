#pragma once
#pragma comment(lib, "Winmm.lib")
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <conio.h>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <iomanip> //D�ng cho std::setw

// COLOR CODE
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define AQUA 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define WHITE 7
#define GRAY 8
#define LIGHT_BLUE 9
#define LIGHT_GREEN 10
#define LIGHT_AQUA 11
#define LIGHT_RED 12
#define LIGHT_PURPLE 13
#define LIGHT_YELLOW 14
#define BRIGHT_WHITE 15
#define HIGHLIGHT 240

// MOVEMENT
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ESC 27
#define KEY_ENTER 13

// SOUNDTRACK
#define MOVE_SOUND 0
#define ENTER_SOUND 1
#define ERROR_SOUND 2
#define PLACED_SOUND 3
#define WIN_SOUND 4
#define BACKGROUND_SOUND 5
#define EFFECT_SOUND 6
#define LOSE_SOUND 7
#define JACK 8
#define MTP 9
#define TIKTOK 10

using namespace std;

void playSound(int i);

void gotoXY(int x, int y);

void setConsoleColor(WORD color);

void clearScreen();

void TextColor(int x);

void showCursor(bool show);
