#pragma once
#include "Controller.h"
#include "Image.h"


#define MAX 100
struct leaderboard
{
	string name;
	string MSSV;
	int score;
	string difficult;
};

void drawMenu(const vector<string>& options, int highlightIndex);

void menu(leaderboard L[100]);

void printRectangle(int left, int top, int width, int height);

void printInterface(leaderboard L[100]);

void stageDifficult(leaderboard L[100]);

void printLeaderboard(string fileName, leaderboard L[100]);

void printHelp(leaderboard L[100]);

void drawExit(const vector<string>& options, int highlightIndex);

void printExit(leaderboard L[100]);