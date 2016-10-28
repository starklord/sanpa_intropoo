#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray
{
    public:


        PointArray();
        PointArray(Point*, int);
        PointArray(PointArray &);

        int getLength();
        void print();
        void push_back(Point &);
        void insert(const int position, const Point &p);
        void remove(const int position);
        const int getSize();
        void clear();
    protected:
    private:
        void resize(int);
        Point* pointArray;
        int length;
};

#endif // POINTARRAY_H
