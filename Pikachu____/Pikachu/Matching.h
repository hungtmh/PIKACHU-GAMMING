#pragma once
#include "Menu.h"
#include "Controller.h"
#include "Playgame.h"

using namespace std;

bool checkLineX(int x1, int y1, int x2, int y2, char** board);

bool checkLineY(int x1, int y1, int x2, int y2, char** board);

bool checkL(int x1, int y1, int x2, int y2, char** board);

bool checkZ(int x1, int y1, int x2, int y2, char** board);

bool checkU(int x1, int y1, int x2, int y2, char** board, int m, int n);

bool isFinished(char** board, int m, int n);

void checkeasy(char**& board, int x1, int y1, int x2, int y2, int m, int n, int& score);

void checkmedium(char**& board, int x1, int y1, int x2, int y2, int m, int n, int& score);

void checkhard(char**& board, int x1, int y1, int x2, int y2, int m, int n, int& score);

bool MoveSuggestion(char** board, int m, int n);

bool MoveSuggestionUpdate(char** board, int m, int n);