/**********************************
Lucian Pate
CS111

create a program that generates
a game of craps
**********************************/
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include"input.h"
using namespace std;

int rollDice();//prototype
bool playGame();

int main()
{
  int games;
  double wins = 0.0;
  double lose = 0.0;

  srand(time(0));
  cout<< "How many games do you want to play?: ";
  games = getInt(1, 100000000, "You need to input a number between 1 and 100000000: ");
  for (int i = 1; i <= games; i++)
    {
      if(playGame())
	wins++;
      else
	lose++;
    }
  cout<<fixed<<setprecision(3);
  cout<<"Win%: " << (double)wins/games * 100 <<endl;
  cout<<"Lose%: " << (double)lose/games * 100 << endl; 
  return 0;
}

bool playGame()
{
  // srand(time(0));//for random numbers
  int fR;//first roll
  int sR = 0;//second+ roll

  fR = rollDice();//calls function to first roll
  //cout<< fR<<endl;//output first roll

  //if first roll is 7 or 11 you win
  if(fR == 7 || fR == 11)
    return true;
  //if first roll is 2, 3, or 12 you lose
  else if(fR == 2 || fR == 3 || fR == 12)
    return false;
  //if none then keep rolling
  else
    {
      do
	{
	  sR = rollDice();//variable for new roll
	  // cout<< sR<<endl;//output new roll
	}while(sR != 7 && sR != fR);//ending condition
      if (sR == 7)//if its 7 on second+ roll then you lose
	return false;
      else//otherwise keep rolling till you win
	return true;
	
    }
return 0;
}

int rollDice()
{
  int die1;//die 1
  int die2;//die 1
  int roll;//sum of die 1 and die 2

  die1 = rand()%6+1;//random number between 1 and 6
  die2 = rand()%6+1;//random number betweem 1 and 6
  roll = die1 + die2;//sum of die

  return roll;
}
