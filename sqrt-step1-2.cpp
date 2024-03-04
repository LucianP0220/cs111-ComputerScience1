/*****************************************
Lucian Pate
CS111
Homework 4-1

write part of a square root function
*****************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int num;//number to squre root
  int i;//temp variable
  int top;//top number
  int bottom;//bottom number
  double upperL;//upper limit 
  double lowerL;//bottom limit

  //get user input
  cout<< "Enter Num: ";
  cin>> num;

  /*check to see if i is perfect square if so 
    top is i otherwise add 1 to top */  
  for(i = 0; i*i <= num ; ++i)
    if(i*i == num)
      top = i;
    else
      top = i+1;
  bottom = top-1;

  //output the top and bottom numbers
  cout<<"Top is " <<top<<endl; 
  cout<< "Bottom is "<<bottom<<endl;
      

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
      cout<< "Between " << top << " and " << bottom <<", " << top << " is closer.\n"<<endl;
    }
  else // if not then bottom limit is closer to root
    cout<< "Between " << top << " and " << bottom <<", " << bottom << " is closer.\n"<<endl;

  return 0;
}
