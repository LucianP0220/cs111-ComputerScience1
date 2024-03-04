/*************************************
Lucian Pate
CS111
homework 4-2

Make a program that will read an
unknown number of ages
************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

  int age;// variable for age
  int count = 0;// total count 
  int minor = 0;//number of minors
  int adult = 0;//number of adults
  int sum = 0;//sum of all ages
  int max;// largest age
  int min;// smallest age
  double avg;// average of the ages 

  //get age input from user
  cout<< "Enter age: ";
  cin>> age;

  //while age >=0 add to the count and the cum
 while(age >=0)
    {
   
      count++;
      sum+= age;

      //if age is greater than previous store in max
      if (age > max)
	max = age;
      //if age is less than previous store in min
      if (age < min)
	min = age;
      // if age>= 18 add to adult
      if (age >=18)
	{
	adult++;
	}
      //else add to minor
      else 
	{
        minor++;
	}
      cout<< "Enter age: ";
      cin>> age;
    }

 // if invalid age given
 if(count == 0)
	cout<< "\nNo ages were entered" <<endl;

 //if age is good find avg and output results
      else
	{
	  avg = (double) sum/count;
	  cout<< endl << avg << " (average)" << endl;
	  cout<< minor << " (minors)" << endl;
	  cout<< adult << " (adults)" << endl;
	  cout<< max << " (oldest)" << endl;
	  cout<< min << "(youngest)\n" << endl;
	}
      return 0;
}

