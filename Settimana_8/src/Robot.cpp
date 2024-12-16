#include "Robot.h"

using namespace std;

void clear(){
	#ifdef _WIN32
        Sleep(500);
        system("cls");
    #else
        usleep(500);
        system("clear");
    #endif
}