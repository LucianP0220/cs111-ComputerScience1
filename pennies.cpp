/*************************************************
Lucian Pate
CS111
Homework 4-1

write a program that calculates earnings 
of a person that starts at a penny and doubles 
each day
***************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

  double pay = 0.01;//starting pay
  double sum = 0;//sum total of pay
  int days;//days worked

  //get number of days
  cout<< "Enter the number of days worked: ";
  cin>> days;

  //if days are not good
  if( days <= 0)
    cout<< days << " is invalid. Thank you for using the system.\n"<<endl;
  else// if days are good 
    {
      //loop for table header and upper dashes
      cout<< endl << setw(10) << "Days" << setw(15) << "Pay" <<endl;
      for (int i = 0; i <= 25; i++)
	{
	  cout<< "-";
	}
      
      //set decimal to 2 places
      cout<<endl<<fixed<<setprecision(2);
      
      //output days and calculate pay
      for(int n = 1; n <= days; n++)
	{
	  cout<< setw(10) << n << setw(15) << pay <<endl;       
	  sum+=pay;
	  pay*= 2;
	}   
      
      //Output bottom dashes 
      for (int i = 0; i <= 25; i++)
	{
	  cout<< "-";
	}
      
      //output total sum of pay 
      cout<< endl <<setw(10) << "Total" << setw(15) << sum << endl << endl;
    }
  return 0;
}
