#include "RightHandRuleRobot.h"

using namespace std;

RightHandRuleRobot::RightHandRuleRobot(): x(0), y(0) {}

void RightHandRuleRobot::move(Maze& matrix){
    srand(time(0));

    matrix.set_pattern(x, y, ' ');

    int random_x = 0;
    int random_y = 0;

    if(matrix.get_pattern(x + 1, y) == '*' || matrix.get_pattern(x + 1, y) == 'E'){
        if(!checkExit(matrix)){
            if(matrix.get_pattern(x, y - 1) == '*')
                set_x(x - 1);
            else
                set_y(y - 1);
        }
    }
    else if(matrix.get_pattern(x - 1, y) == '*' || matrix.get_pattern(x - 1, y) == 'E'){
        if(!checkExit(matrix)){
            if(matrix.get_pattern(x, y + 1) == '*')
                set_x(x + 1);
            else
                set_y(y + 1);
        }
    }
    else if(matrix.get_pattern(x, y + 1) == '*' || matrix.get_pattern(x, y + 1) == 'E'){
        if(!checkExit(matrix)){
            if(matrix.get_pattern(x + 1, y) == '*')
                set_y(y - 1);
            else
                set_x(x + 1);
        }
    }
    else if(matrix.get_pattern(x, y - 1) == '*' || matrix.get_pattern(x, y - 1) == 'E'){
        if(!checkExit(matrix)){
            if(matrix.get_pattern(x - 1, y) == '*')
                set_y(y + 1);
            else
                set_x(x - 1);
        }
    }
    else if(matrix.get_pattern(x - 1, y + 1) == '*' || matrix.get_pattern(x - 1, y + 1) == 'E'){
        if(!checkExit(matrix)){
             set_y(y + 1);
        }
    }
    else if(matrix.get_pattern(x - 1, y - 1) == '*' || matrix.get_pattern(x - 1, y - 1) == 'E' ){
        if(!checkExit(matrix)){
             set_x(x - 1);
        }
    }
    else if(matrix.get_pattern(x + 1, y - 1) == '*' || matrix.get_pattern(x + 1, y - 1) == 'E' ){
        if(!checkExit(matrix)){
             set_y(y - 1);
        }
    }
    else if(matrix.get_pattern(x + 1, y + 1) == '*' || matrix.get_pattern(x + 1, y + 1) == 'E' ){
        if(!checkExit(matrix)){
             set_x(x + 1);
        }
    }
    else{
        int direction = rand() % 3;
        switch(direction){
            case 0:
                set_x(x + 1);
                break;
            case 1:
                set_x(x - 1);
                break;
            case 2:
                set_y(y + 1);
                break;
            case 3:
                set_y(y - 1);
                break;
        }
    }

    matrix.set_pattern(x, y, 'R');
}

void RightHandRuleRobot::solve(Maze& matrix){
    set_x(matrix.get_x('S'));
    set_y(matrix.get_y('S'));

    while(matrix.has('E')){
        cout << matrix << endl;
        move(matrix);
        clear();
    }

    cout << matrix << endl;
}

bool RightHandRuleRobot::checkExit(Maze& matrix){
    if(matrix.get_pattern(x + 1, y) == 'E'){
        set_x(x + 1);
        return true;
    }
    else if(matrix.get_pattern(x - 1, y) == 'E'){
        set_x(x - 1);
        return true;
    }
    else if(matrix.get_pattern(x, y + 1) == 'E'){
        set_y(y + 1);
        return true;
    }
    else if(matrix.get_pattern(x, y - 1) == 'E'){
        set_y(y - 1);
        return true;
    }
    else if(matrix.get_pattern(x - 1, y + 1) == 'E'){
        set_x(x - 1);
        set_y(y + 1);
        return true;
    }
    else if(matrix.get_pattern(x - 1, y - 1) == 'E'){
        set_x(x - 1);
        set_y(y - 1);
        return true;
    }
    else if(matrix.get_pattern(x + 1, y - 1) == 'E'){
        set_x(x + 1);
        set_y(y - 1);
        return true;
    }
    else if(matrix.get_pattern(x + 1, y + 1) == 'E'){
        set_x(x + 1);
        set_y(y + 1);
        return true;
    }
    else
        return false;
}