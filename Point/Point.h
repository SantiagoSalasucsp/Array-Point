#ifndef _POINT_H_
#define _POINT_H_
#include <iostream>

class Point{
    private:
        int x;
        int y;

    public:
        Point(int,int);
        void setX(int);
        void setY(int);
        int getX() const;
        int getY() const;
        void print() const;

};

#endif