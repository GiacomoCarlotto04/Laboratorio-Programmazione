#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

#include "Maze.h"

class Robot{
	public:
		virtual void move(Maze& matrix) = 0;
        virtual void solve(Maze& matrix) = 0;
};

void clear();

#endif
