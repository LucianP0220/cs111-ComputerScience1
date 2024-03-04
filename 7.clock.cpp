/*******************************************
Lucian Pate
CS111
assignment 2

make a program that takes 2 integers and tells the angles of the 
hour and minute hand.
************************************************/
#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
  int hours;
  int minutes;
  double hourAngle;
  double minAngle;

  cout << "Enter hours: ";
  cin >> hours;
  cout << "Enter minutes: ";
  cin >> minutes;

  hours = hours % 12;

  hourAngle = (hours * 30.0) + (minutes * .5);
  
  minAngle = minutes * 6.0;

  cout << "The angle of the hour hand is: " << hourAngle << endl;
  cout << "The angle of the minute hand is: " << minAngle << endl <<endl;

  return 0;

}
