#include "Maze.h"

using namespace std;

Maze::Maze(): matrix(SIZE) {}

Maze::Maze(string file_name): matrix(0){
	string line;
	ifstream file(file_name);
	
	while(getline(file, line)){
		matrix.push_back(line);
	}
	
	file.close();
}

int Maze::get_x(char pattern){
	int p = -1;
	for(int i = 0; i < SIZE; i++){
		p = get_maze()[i].find(pattern);
		if(p != -1)
			return p;
	}
    return p;
}

int Maze::get_y(char pattern){
	int p = -1;
	for(int i = 0; i < SIZE; i++){
		p = get_maze()[i].find(pattern);
		if(p != -1)
			return i;
	}
    return p;
}

void Maze::set_pattern(int x, int y, char pattern){
	matrix[y][x] = pattern;
}

bool Maze::has(char pattern){
	if(get_y(pattern) != -1 && get_x(pattern) != -1)
		return true;
	return false;
}


ostream& operator<<(std::ostream& os, Maze& obj) {
	for(int i = 0; i < 9; i++){
		cout << obj.get_maze()[i] << endl;
	}
	return os;
}
