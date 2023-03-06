/*
Name: Ahmed Abdeen
ID: 900225815
*/

#include <iostream>
#include "point.cpp"
#include <cstdlib>
#include <ctime>

using namespace std;
point Centre(point *C, int n);
point Closer(point* A, point* B, int n1, int n2, point p);

int main()
{
srand(time(NULL));
int n = 200,m =20;
point* A = new point [n];
point* B = new point [n];
point* C = new point [m];

for (int i = 0;i < n;i++)
{
    (A+i)->setx((rand()%900+700)/10.00);
    (A+i)->sety((rand()%900+700)/10.00);
    (B+i)->setx((rand()%400+200)/10.00);
    (B+i)->sety((rand()%400+200)/10.00);
}
for (int i = 0;i < m;i++)
{
  (C+i)->setx((rand()%1000+50)/10.00);
  (C+i)->sety((rand()%1000+50)/10.00);
}
for (int i = 0;i < m;i++)
{
    point a1 = Centre(A,n);
    point a2 = Closer(A, B, n, n, C[i]);
    if (a1.getx() == a2.getx() && a1.gety() == a2.gety() )
    {
    (C+i)->Display_p();
    cout << " belongs to cluster A\n";
    }
    else 
    {
    (C+i)->Display_p();
    cout << " belongs to cluster B\n";

    }   

}
delete [] A;
delete [] B;
delete [] C;
    return 0;
}
point Centre(point *C, int n)
{
    float sum_x = 0.0;
    for (int i = 0;i < n;i++)
    {
        sum_x = sum_x + (C+i)->getx();

    }
    float average_x = sum_x/n;
    float sum_y = 0.0;
    for (int i = 0;i < n;i++)
    {
        sum_y = sum_y + (C+i)->gety();

    }
    float average_y = sum_y/n;
    point b;
    b.setx(average_x);
    b.sety(average_y);
    return b;
}
point Closer(point* A, point* B, int n1, int n2, point p)
{
  point c = Centre(A, n1);
  point d = Centre(B, n2);
  if(c.distance(p) < d.distance(p))
   return c;
   else
   return d;
}

