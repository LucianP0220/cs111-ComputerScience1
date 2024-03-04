/***********************************
Lucian Pate
CS111
Homework 4-2

Make a program that asks for a non negative 
integer and show the digits backwards
****************************************/

#include<iostream>
using namespace std;

int main()
{

  int num;//user number
  int rev = 0;//reverse number

  //get user input
  cout<< "Enter a non-negative number: ";
  cin>> num;

  //reject bad numbers
  while(num < 0)
    {
      cout<< "The number is invalid.";
      cout<<" Enter the number again: ";
      cin>> num;
    }

  //if number is good 
  while(num>0)
    {
	rev = (rev * 10) + (num % 10);
	num/=10;
	
    }

    cout<< rev << "\n" << endl;


  return 0;
}
