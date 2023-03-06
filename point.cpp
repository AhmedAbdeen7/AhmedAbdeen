/*
Name: Ahmed Abdeen
ID: 900225815
*/
#include <iostream>
#include "point.h"
#include <cmath>
using namespace std;

point :: point()
{
    x = 0;
    y = 0;
}
point :: point(float X, float Y)
{
    x = X;
    y = Y;
}
void point :: setx(float X)
{
    x = X;
}
void point :: sety(float Y)
{
    y = Y;
}
float point :: getx()
{
    return x;
}
float point :: gety()
{
    return y;
}
void point :: Display_p()
{
    cout << "(" << x << ", " << y << ")";
}
float point :: distance(point p)
{
   float num = pow((x - p.x), 2) + pow((y - p.y), 2); 
   float distance = pow(num, 0.5);
   return distance;
}
