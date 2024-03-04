/***********************
Lucian Pate
CS111 
Homework 4-2

write a program to show
Fibonacci numbers
**************************/

#include <iostream>
using namespace std;

//prototype
void showfib(int n);

int main()
{
  
  int n;//variable for fibonacci numbers
  
  //rejecting bad number
  do
    {
      cout<< "Enter the number of fibonacci numbers"
	  <<" you want to see (N >= 3): ";
      cin>> n;
    }while (n <=2);

  cout<< endl;
  showfib(n);// call showfib function
  cout<<"\n"<< endl;
  return 0;
}

//function to calculate fibonacci series 
void showfib(int n)
{
  int n1 = 0;
  int n2 = 1;
  int fib = 0;
  for(int i = 0; i < n; i++)
    {
      cout<< n1 << " ";
      fib = n1 + n2;
      n1 = n2;
      n2 = fib;
    }
}

