/*****************************************************************************
Lucian Pate
CS111
Assignment 5-1

This main tests getInt(), getDouble() and getYN() in input.h
*****************************************************************************/
#include <iostream>
#include"input.h"  //include input.h
using namespace std;

int main()
{
  int age;

  cout << "Enter an age: ";
  age = getInt(0, 200, "An age must be between 0 and 200. Enter again: ");
  cout << "age = " << age << endl;

  //Test getInt()
  //get a test score. It should be between 0 and 100.
  int score;
  cout<< "Enter a test score: ";
  score = getInt( 0, 100, "A test score must be between 0 and 100. Enter again: ");
  cout<< "score = " << score<<endl;

  //Test getDouble()
  //get a gpa. It should be between 0.00 and 4.00.
  double gpa;
  cout<< "Enter your gpa: ";
  gpa = getDouble(0.00, 4.00, "A GPA must be between 0.00 and 4.00. Enter again: ");
  cout<< " gpa = " << gpa<<endl;

  //Test getYN()
  //Ask if the user is a college student. It should only accept Y, y, N or n.
  //getYN() returns Y or N only.
  char ans;
  cout<< "Are you a college student? Enter Y or N: ";
  ans  = getYN("Your response must be Y or N. Enter again: ");
  cout<< "ans = "<< ans <<endl;


  return 0;
}
