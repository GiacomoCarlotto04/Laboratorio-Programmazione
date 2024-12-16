#include "RandomRobot.h"

using namespace std;

RandomRobot::RandomRobot(): x(0), y(0) {}

void RandomRobot::move(Maze& matrix){
    srand(time(0));
    int random_x = rand() % 3 - 1;
    int random_y = rand() % 3 - 1;
    
    while(matrix.get_pattern(x + random_x, y + random_y) == '*'){
        random_x = rand() % 3 - 1;
        random_y = rand() % 3 - 1;
    }

    matrix.set_pattern(x, y, ' ');

    set_x(x + random_x);
    set_y(y + random_y);

    matrix.set_pattern(x, y, 'R');
}

void RandomRobot::solve(Maze& matrix){
    set_x(matrix.get_x('S'));
    set_y(matrix.get_y('S'));

    while(matrix.has('E')){
        cout << matrix << endl;
        move(matrix);
        clear();
    }

    cout << matrix << endl;
}