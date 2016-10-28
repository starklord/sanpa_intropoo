#ifndef POINT_H
#define POINT_H


class Point
{

    public:

        Point(Point &);
        Point();
        Point(int x,int y);
        int getX();
        int getY();
        void setX(int x);
        void setY(int y);
        void printPoint();
        void modifyPoint();
    protected:
    private:
        int x;
        int y;
};

#endif // POINT_H
