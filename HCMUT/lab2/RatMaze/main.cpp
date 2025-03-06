#include <iostream>
#include <vector>
#include <stack>
#include <fstream>
#include <string>


class Node{
public:
    int x,y;
    int dir;
    Node(int i , int j){
        x = i;
        y = j;
        dir = 0;
    }
};

bool canEatFood(int maze[5][5], int fx, int fy){
    std::stack<Node> st;

}
