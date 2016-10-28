
#include "Point.h"
#include <iostream>
//constructors
Point::Point()
{
        this->x = 0;
        this->y = 0;
}
Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

Point::Point(Point &p){
    this->x = p.x;
    this->y = p.y;
}
//getters an setters
int Point::getX(){
    return this->x;
}
int Point::getY(){
    return this->y;
}
void Point::setX(int x){
    this->x = x;
}
void Point::setY(int y){
    this->y = y;
}
//prints
void Point::printPoint(){
    std::cout << this->x <<","<<this->y << std::endl;
}

void Point::modifyPoint(){
    this->x += 10;
    this->y += 10;
}


