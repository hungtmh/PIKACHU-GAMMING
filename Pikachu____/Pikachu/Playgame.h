#pragma once
#include "Controller.h"
#include "Menu.h"

void drawBoard2P(char** board, int rows, int cols);

void createBackgroundE(string* background, int& i);

void printBackGroundE(int x, int y);

void printBackGroundHighLightE(int x, int y);

void createBackgroundM(string* background, int& i);

void printBackGroundM(string* background, int x, int y);

void printBackGroundHighLightM(string* background, int x, int y);

void createBackgroundH(string* background, int& i);

void printBackGroundH(string* background, int x, int y);

void printBackGroundHighLightH(string* background, int x, int y);

void highlightCell(int x, int y, char** board, int cellWidth, int cellHeight, int cellPadding, bool highlight, string difficult);

void highlightCellforEnter(int x, int y, char** board, int cellWidth, int cellHeight, int cellPadding, bool highlight, string difficult);

void highlightCellforEnterError(int x, int y, char** board, int cellWidth, int cellHeight, int cellPadding, bool highlight, string difficult);

void fillBoardWithPairs(char**& board, int m, int n);

void drawContinue(const vector<string>& options, int highlightIndex);

void printContinue(bool& running,leaderboard L[100], string df);

void easy(char** board, int m, int n, int& score,leaderboard L[100]);

void medium(char** board, int m, int n, int& score, leaderboard L[100]);

void hard(char** board, int rows, int cols, int& score, leaderboard L[100]);
