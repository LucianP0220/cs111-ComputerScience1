/*****************************************
Lucian Pate
CS111
Homework 5-1

write part of a square root function
*****************************************/

#include<iostream>
#include<iomanip>
#include"input.h"
using namespace std;

int main()
{
  int num;//number to square root
  int i;//temp variable
  int top;//top number
  int bottom;//bottom number
  double closer;//stores closer number to square
  double upperL;//upper limit 
  double lowerL;//bottom limit
  double avg;

  //get user input
  cout<< "Enter Positive integer that you want to find the square root for: ";
  num = getInt(1, 9000000, "Enter a positive integer between 1 and 9000000: "); 
  
  /*check to see if i is perfect square if so 
    top is i otherwise add 1 to top */  
  for(i = 0; i*i <= num ; ++i)
    if(i*i == num)
	top = i;
      
    else
    top = i+1;
  bottom = top-1;
  
  // output the top and bottom numbers
  //cout<<"Top is " <<top<<endl; 
  //cout<< "Bottom is "<<bottom<<endl;
  
  
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
      closer = top;
      cout<< "Start at " << top <<endl;
    }
  else // if not then bottom limit is closer to root
    {
      closer = bottom;
      cout<< "Start at " << bottom <<endl;
    }
  
  //cout<< "closer is " << closer<<endl;
  
  //repeats the division steps 10 times;
  for(int i = 1; i<= 10; i++)
    {
      avg = num/closer;
      avg = (closer + avg)/2;
      closer = avg;
    }
  //output results
  cout<< "The square root of " << num << " is " << avg <<endl;
  cout<< "The square of the square root is " << (avg * avg)<<endl;;
      
  
  return 0;
}
