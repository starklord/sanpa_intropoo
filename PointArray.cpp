#include "PointArray.h"
#include <iostream>
#include <stdlib.h>
PointArray::PointArray()
{
    this->pointArray = new Point;
    this->length = 0;
}

PointArray::PointArray(Point* pointArray, int length)
{
    int i;
    this->pointArray = new Point[length];
    for(i=0; i<length;i++){
        this->pointArray[i]=pointArray[i];
    }
    this->length = length;
}

PointArray::PointArray(PointArray &p){
    this->length = p.length;
    int i;
    this->pointArray = new Point[length];
    for(i=0;i<length;i++){
        this->pointArray[i]=p.pointArray[i];
    }
}

void PointArray::resize(int nLength){
    int oLength = this->length;
    int i;
    if(oLength>nLength){
        for(i=nLength;i<oLength;i++){
            delete pointArray[i];
        }
    }
    if(oLength<nLength){
        for(i=oLength;i<nLength;i++){
            pointArray[i]=new Point;
        }
    }
    this->length = nLength;
}

int PointArray::getLength(){
    return length;
}

void PointArray::print() {
    int i;
    for(i=0;i<length;i++){
            std::cout << this->pointArray[i].getX() <<","<<this->pointArray[i].getY() <<", length: "<< this->length << std::endl;
    }

}

void PointArray::push_back(Point &p){
    Point* pp = pointArray;
    int i;
    for(i=0;i<=length;i++){
        pp++;
    }
    *pp = p;
    length++;
    std::cout<<"added: "<<pointArray[length].getX()<<","<<pointArray[length].getY()<< std::endl;
}
