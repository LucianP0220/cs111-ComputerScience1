/**************************************
Lucian Pate
CS111
Homework 4-1

create a program that takes a user input
and outputs n starts on n rows
****************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

  int i;//number of rows

  //get number of rows
  cout<< "Enter the number of rows: ";
  cin>> i;

  //if input no good
  if(i < 1)
    cout<< "This program works for n >= 1 only\n" << endl;
  else//if input is good
    {
      //row goes from 1 to n
      for(int row = 1; row <= i; row++)
	{

	  //outputs a space
	  for(int n = 1; n <= i-row; n++)
	    cout<<" ";
	  
	  //for each row col goes from 1 to row and outputs *
	  for( int col = 1; col <= row; col++)
	    cout<< "*";
	  cout<< endl;
	}
    }
  return 0;
}
