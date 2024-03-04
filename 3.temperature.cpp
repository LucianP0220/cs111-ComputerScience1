/****************************************************
Lucian pate
CS111
assignment 2

make a program that converts celsius to fahrenheit
***************************************************/
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
  int cTemp;
  double fTemp;
  cout << "Enter a temperature in Celsius: ";
  cin >> cTemp;
  cout << endl;
  fTemp = (9.0/5.0)*cTemp + 32;
  cout << cTemp << " C = " <<round (fTemp) << " F\n"<< endl;
  return 0;  
} 
