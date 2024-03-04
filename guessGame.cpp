/***************************************
Lucian Pate
CS111
Homework 4-2

Write a program to generate a random number
and asks user to guess the number
****************************************/

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

  srand(time(0));
  int num;//random number
  int guess;// user input guess

  //get random number
  num = rand() % 100 + 1;

  //get user guess
  cout<< "Guess a number between 1 and 100. Enter your guess: ";
  cin>> guess;

  // while guess != num output if too high or too low
  while(guess != num)
    {
      
      if(guess < num)//it too low
	cout<< "Too low, try again."<<endl;
      else//if too high
	cout<< "Too high, try again."<<endl;
      
      //take a next guess
      cout<< "Enter your guess: ";
      cin>> guess;
    }
  //if guess = num output 
  if(guess == num)
    cout<< "You Guessed it right!\n"<<endl;
  
  return 0;
}
