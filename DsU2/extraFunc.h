// This file contains all static functions that are used in the project.

#pragma once
#include <cstdlib>

static void clearConsole() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}