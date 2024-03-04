/************************************************************************
Lucian Pate
CS111
Homework 3-2

This program will convert a temperature between fahrenheit and Celsius.
**************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  char tempType;// Type of temp F or C
  int fTemp;// temp for F case
  int cTemp;// temp for C case 
  double conv;// variable for conversion between F and C 

  //prompt user to enter type of temp F or C
  cout<< "Which temperature do you have? Enter F for fahrenheit or C for Celsius: ";
  cin >> tempType;

  //set decimal to two places
  cout<<fixed<<setprecision(2);
  
  //switch cases for F-f or C-c
  switch(tempType)
    {
      //if case is upper or lower case F
    case 'F':
    case 'f':cout<< "Enter a temperature in Fahrenheit: ";//get temp
      cin>> fTemp;
      conv = (fTemp - 32) * 5/9;// conversion from F to C
      cout<< fTemp << " Fahrenheit = " << conv << " Celsius\n" <<endl;//output temp and conversion
      break;// break the case
      //if case is upper or lower case C
    case 'C':
    case 'c':cout<< "Enter a temperature in Celsius: ";//get temp
      cin>> cTemp;
      conv = (double) 9/5 * cTemp + 32;// conversion from C to F
      cout<< cTemp << " Celsius = " << conv << " Fahrenheit\n" <<endl;//output temp and conversion
      break;// break the case
    default : cout<< "Invalid choice\n" << endl;// if case is different output invalid
    }

  return 0;

}
