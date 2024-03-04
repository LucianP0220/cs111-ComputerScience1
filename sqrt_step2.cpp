/***********************************************************************
Lucian Pate
CS111
assignment 3-0

Make a program that takes 3 user inputs (num, top, bottom) and outputs 
which number is closer to the square root of num
************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int num; //number youre trying to square root
  int top; //higher number to input
  int bottom; //lower number to input
  double upperL; // upper limit 
  double lowerL; // lower limit

  //prompt user to input 3 numbers
  cout<< "Num = ";
  cin>> num;
  cout<< "Top = ";
  cin>> top;
  cout<< "Bottom = ";
  cin>> bottom;

  // calculate the upper and lower limits to be compared
  upperL = num - (top * top);
  lowerL = num - (bottom * bottom);

  //it upper limit returns a negative
  if(upperL < 0)
    upperL = -upperL;
  //if lower limit returns a negative
  if(lowerL < 0)
    lowerL = -lowerL;

  // comparing to see if upper limit is closer to square root
  if (upperL < lowerL)
    {
      cout<< "Top is closer to the square root of " << num << ".\n"<<endl;
    }
  else // if not then bottom limit is closer to root
    cout<< "Bottom is closer to the square root of " << num << ".\n"<<endl;

  return 0;

}
