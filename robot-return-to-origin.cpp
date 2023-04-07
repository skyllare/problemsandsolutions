/*
There is a robot starting at the position (0, 0), the origin, on a 2D plane. 
Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.

You are given a string moves that represents the move sequence of the robot where moves[i] 
represents its ith move. Valid moves are 'R' (right), 'L' (left), 'U' (up), and 'D' (down).

Return true if the robot returns to the origin after it finishes all of its moves, or false otherwise.

Note: The way that the robot is "facing" is irrelevant. 'R' will always make the robot move to the right 
once, 'L' will always make it move left, etc. Also, assume that the magnitude of the robot's movement is 
the same for each move.*/

#include <string>
#include <iostream>
#include <tuple>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) 
    {
        tuple <int, int> origin (0,0);
        tuple <int, int> currentpos (0,0);
        for (int i = 0; i < moves.length(); i++)
        {
            if (moves[i] == 'U')
            {
                get<1>(currentpos) += 1;
            }
            else if (moves[i] == 'D')
            {
                get<1>(currentpos) -= 1;
            }
            else if (moves[i] == 'R')
            {
                get<0>(currentpos) += 1;
            }
            else if (moves[i] == 'L')
            {
                get<0>(currentpos) -= 1;
            }
        }
        if (currentpos == origin)
        {
            return true;
        }
        return false;
    }
};