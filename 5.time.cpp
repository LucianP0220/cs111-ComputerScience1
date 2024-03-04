/***********************************************
Lucian Pate
CS111
assignment 2

Make a program that takes time in seconds and converts 
it to hours minutes and seconds
**************************************************/

#include<iostream>
using namespace std;

int main()
{
  int sec;
  int hours;
  int minutes;
  int seconds;

  cout << "Enter time in seconds: ";
  cin >> sec;

  hours = sec /3600;
  sec = sec % 3600;
  minutes = sec / 60;
  sec = sec % 60;
  seconds = sec;

  cout <<endl;
  cout << hours << " hours " << minutes << " minutes " << seconds
       << " seconds\n"<< endl;
  return 0; 

}
