/************************************************
Lucian Pate
CS111
Homework 4-1

write a program to display ascii values 
*************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

  int ascii;
  int count;
  for(ascii = 35; ascii <= 126; ascii++)
    {
      if(count % 14  == 0)
	cout<<endl;
      cout<< (char)ascii<<" ";
      count++; 
    }
  cout<<endl;

  return 0;
}
