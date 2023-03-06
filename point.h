/*
Name: Ahmed Abdeen
ID: 900225815
*/

#include <iostream>
using namespace std;    
class point
{
private:    
float x;
float y;
public:
point();
point(float X, float Y);
void setx(float X);
void sety(float Y);
float getx();
float gety();
void Display_p();
float distance(point p);


};