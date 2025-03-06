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
class Circle
{
private:
    Point center;
    double radius;

public:
    Circle()
    {
        /*  
         * STUDENT ANSWER   
         * TODO: set zero center's x-y and radius
         */
        center.setX(0);
        center.setY(0);

    }

    Circle(Point center, double radius)
    {
        /*  
         * STUDENT ANSWER
         */
        this->center.setX(center.getX());
        this->center.setY(center.getY());
        this->radius = radius;
    }
    Circle(const Circle &circle)
    {
        /*  
         * STUDENT ANSWER
         */

    }
    
    void setCenter(Point point)
    {
        /*  
         * STUDENT ANSWER
         */
    }

    void setRadius(double radius)
    {
        /*  
         * STUDENT ANSWER
         */
    }

    Point getCenter() const
    {
        /*  
         * STUDENT ANSWER
         */
    }

    double getRadius() const
    {
        /*  
         * STUDENT ANSWER
         */
    }
    
    void printCircle()
    {
        printf("Center: {%.2f, %.2f} and Radius %.2f\n", this->center.getX(), this->center.getY(), this->radius);
    }
};