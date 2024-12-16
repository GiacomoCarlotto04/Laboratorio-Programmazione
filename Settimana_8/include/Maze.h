#ifndef MAZE_H
#define MAZE_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class Maze{
	public:
		static const int SIZE = 9;
		static const char START = 'S';
		static const char END = 'E';
		static const char WALL = '*';
		
		Maze(std::string file_name);
		Maze();
		
		std::vector<std::string> get_maze() { return matrix; }
		int get_x(char pattern);
		int get_y(char pattern);
		char get_pattern(int x, int y) {return matrix[y][x];}
		
		void set_pattern(int x, int y, char pattern);

		bool has(char pattern);

		
	private:
		std::vector<std::string> matrix;
};

std::ostream& operator<<(std::ostream& os, Maze& obj);

#endif
