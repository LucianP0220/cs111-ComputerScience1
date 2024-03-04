/**********************************
Lucian Pate
CS111

create a program that generates
a game of craps
**********************************/
#include<iostream>
#include<cstdlib>
using namespace std;

int rollDice();//prototype

int main()
{
  srand(time(0));//for random numbers
  int fR;//first roll
  int sR = 0;//second+ roll

  fR = rollDice();//calls function to first roll
  cout<< fR<<endl;//output first roll

  //if first roll is 7 or 11 you win
  if(fR == 7 || fR == 11)
    cout<<"====WIN===="<<endl;
  //if first roll is 2, 3, or 12 you lose
  else if(fR == 2 || fR == 3 || fR == 12)
    cout<<"====LOSE===="<<endl;
  //if none then keep rolling
  else
    {
      do
	{
	  sR = rollDice();//variable for new roll
	  cout<< sR<<endl;//output new roll
	}while(sR != 7 && sR != fR);//ending condition
      if (sR == 7)//if its 7 on second+ roll then you lose
	      cout<<"====LOSE===="<<endl;
      else//otherwise keep rolling till you win
	    cout<<"====WIN===="<<endl;
	
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
