#include <iostream>
#include <math.h>
class Point{
    private:
    double x, y;

public:
    Point()
    {
        /*  
         * STUDENT ANSWER   
         * TODO: set zero x-y coordinate
         */
         this->x = 0;
         this-> y = 0;
         
    }

    Point(double x, double y)
    {
        /*  
         * STUDENT ANSWER
         */
         this-> x = x;
         this->y = y;
    }

    void setX(double x)
    {
        /*  
         * STUDENT ANSWER
         */
         this->x = x;
         
    }

    void setY(double y)
    {
        /*  
         * STUDENT ANSWER
         */
         this->y = y;
    }

    double getX() const
    {
        /*  
         * STUDENT ANSWER
         */
         return this->x;
    }

    double getY() const
    {
        /*  
         * STUDENT ANSWER
         */
         return this->y;
    }

    double distanceToPoint(const Point& pointA) {
        return std::sqrt(std::pow(this->x - pointA.x, 2) + std::pow(this->y - pointA.y, 2));
    }
};

int main(int argc, char** argv){

    Point B(1, 1);
    Point A(2,3);
    std::cout << (A.distanceToPoint(B));

    return 0;
}