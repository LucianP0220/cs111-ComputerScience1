/***********************************************************
Lucian Pate
CS111
Assignment 2

Make a program that asks for lowercase and converts it
**********************************************************/

#include <iostream>
using namespace std;

int main()
{
  char letter;
  cout << "Enter a lowercase letter: ";
  cin >> letter;

  letter = letter - 32;

  cout << "The uppercase is " << letter <<".\n" << endl;

  return 0;
}

