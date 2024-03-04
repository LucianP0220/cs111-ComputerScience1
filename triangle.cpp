/************************
Lucian Pate
cs111
assignment

************************/
#include<iostream>
#include<cmath>
using namespace std;

//prototypes
void progInfo();
void getCoord(int &x, int &y);
double getLength(int x1, int y1, int x2, int y2);
void getTri(double l1, double l2, double l3);
 
int main()
{
  int x1;// x coordinate for point 1
  int x2;// x coordinate for point 2
  int x3;// x coordinate for point 3
  int y1;// y coordinate for point 1
  int y2;// y coordinate for point 2
  int y3;// y coordinate for point 3
  double l1;// length for side 1
  double l2;// length for side 2
  double l3;// length for side 3

  //show program info
  progInfo();

  //call function to get x and y coordinates
  cout<< "Point 1"<<endl;
  getCoord(x1, y1);
  cout<< "Point 2"<<endl;
  getCoord(x2, y2);
  cout<< "Point 3"<<endl;
  getCoord(x3, y3); 

  //call function to get length 
  l1 = getLength(x1, y1, x2, y2);
  l2 = getLength(x2, y2, x3, y3);
  l3 = getLength(x1, y1, x3, y3);
 
  //call function to get type of triangle
  cout<< endl;
  getTri(l1, l2, l3);
  cout<< endl;

  return 0;
}

//function for program info
void progInfo() 
{
  char ch;

  cout<< "**************************************************" <<endl;
  cout<< "This program will ask you to enter 3 points of a triangle and" <<endl;
  cout<< "tell what kind of triangle it is. Please hit Enter to continue." <<endl;
  cout<< "**************************************************" <<endl;
  cin.get(ch);
}

//function to get user input for coordinate
void getCoord(int &x, int &y)
{
  cout<< "Enter x coordinate: ";
  cin>> x;
  cout<< "Enter y coordinate: ";
  cin>> y;
}

//function to calculate length between points
double getLength(int x1, int y1, int x2, int y2)
{
  double length;

  length = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
  return length;
}

//function to determine the type of triangle
void getTri(double l1, double l2, double l3)
{
  if(fabs(l1-l2) < 0.00001 && fabs(l2-l3) < 0.00001 && fabs(l1-l3) < 0.00001)
    cout<< "This triangle is equilateral" << endl;
  else if(fabs(l1-l2) < 0.00001 || fabs(l2-l3) < 0.00001 || fabs(l1-l3) < 0.00001)
    cout<< "This triangle is isosceles" << endl;
  else 
    cout<< "This triangle is scalene" << endl;

}

