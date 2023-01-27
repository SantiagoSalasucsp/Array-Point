#ifndef _ARRAYPOINT_H_
#define _ARRAYPOINT_H_
#include <iostream>
#include "Point.h"

class ArrayPoint{
    private:
    int tam;
    int*data;

    public:

    ArrayPoint(int tam); 
    ~ArrayPoint();
    ArrayPoint(const ArrayPoint &o);
    void setData(int index, int val);
    int getData(int index) const;
    int getSize() const;
    void print() const;








};






#endif