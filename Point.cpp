//
// Created by Disney on 21/06/2022.
//
#include "point.h"
Point:: Point(double x, double y){
    this->_x = x;
    this->_y = y;
}

Point::~Point(){
}

double Point::getX() {return _x;};
double Point::getY() {return _y;};
