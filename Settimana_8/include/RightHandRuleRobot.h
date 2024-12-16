#ifndef RIGHTHANDRULEROBOT_H
#define RIGHTHANDRULEROBOT_H

#include <cstdlib>
#include <ctime>

#include "Robot.h"

class RightHandRuleRobot: public Robot {
	public:
        RightHandRuleRobot();

		void move(Maze& matrix) override;
        void solve(Maze& matrix) override;
        bool checkExit(Maze& matrix);

        int get_x(){return x;}
        int get_y(){return y;}

        void set_x(int position){x = position;}
        void set_y(int position){y = position;}

    private:
        int x;
        int y;
};

#endif
