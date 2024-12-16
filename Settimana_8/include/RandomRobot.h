#ifndef RANDOMROBOT_H
#define RANDOMROBOT_H

#include <cstdlib>
#include <ctime>

#include "Robot.h"

class RandomRobot: public Robot {
	public:
        RandomRobot();

		void move(Maze& matrix) override;
        void solve(Maze& matrix) override;

        int get_x(){return x;}
        int get_y(){return y;}

        void set_x(int position){x = position;}
        void set_y(int position){y = position;}

    private:
        int x;
        int y;
};

#endif
