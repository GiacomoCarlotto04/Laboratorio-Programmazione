#include "Maze.h"
#include "RandomRobot.h"
#include "RightHandRuleRobot.h"

#include <iostream>

int main(){
	Maze maze(".\\bin\\maze.txt");
	RandomRobot robot1;
	RightHandRuleRobot robot2;
	
	robot1.solve(maze);

	return 1;
}
