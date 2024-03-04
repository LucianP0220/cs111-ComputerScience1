/***************************************************************
Lucian Pate
CS111

getInt asks for an integer and rejects bad inputs outside the range.
getDouble asks for a decimal number and rejects bad inputs outside the range.
getYN asks for Y or N and reject bad inputs other than Y, y, N or n.
*****************************************************************************/
#include <iostream>
using namespace std;

/******************************************************************************                                                              
min is the minimum value accepted                                             
max is the maxmum value accepted
msg is the message shown when the user's input was outside the range.                                        
                                
This function will read an integer number and keeps asking to enter a new number                                                             
as long as the user enters a number outside the range. It will return a number 
within the range (between min and max inclusive).                                                                                    
*******************************************************************************/
int getInt(int min, int max, string msg)
{
  int n; //user's input
  cin >> n;

  while(n < min || n > max) // the user's input was outside the range
    {
      cout << msg;  //show the message to the user
      cin >> n;     //read a new input
    }

  return n; //return a good value that is within the range (between min and max enclusive)
}

/******************************************************************************              

min is the minimum value accepted                                              
max is the maxmum value accepted                                               
msg is the message shown when the user's input was outside the range.          

This function will read a double number and keeps asking to enter a new number
as long as the user enters a number outside the range. It will return a number
within the range (between min and max inclusive).  
                                               
*******************************************************************************/
double getDouble(double min, double max, string msg)                                                                                                          
{                                                                                                                                              
  double n;// user input
  cin>> n;

  while(n < min || n > max)//if input is out of range
    {
      cout<< msg;//show message
      cin>> n;//read new input
    }                                                                                                                                          
     
  return n;//return a good value                                                                                                                                          
}


/******************************************************************************                                                               
msg is the message shown when the user inputs a character other than Y, y, N or N.                                                                                                          


As long as the user enters characters other than Y, y, N, or n, keep asking.
If the user enters a lowercase y or n, convert it to the uppercase Y or N.
This function returns either uppercase Y or N. 
******************************************************************************/

char getYN(string msg)
{
  char i;//user input
  cin>> i;
  
  //loop to display message is input is bad 
  while(i != 'Y' && i != 'y' && i != 'N' && i != 'n')
    {
      cout<< msg;
      cin>> i;
    }

  //to Convert lowercase y or n to Y or N
  if( i == 'y' || i == 'n')
    i = i - 32;
    
  return i;// Return Y or N
}


