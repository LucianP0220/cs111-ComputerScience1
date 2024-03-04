/*********************************************
Lucian Pate
CS111
Homework 3-2

Write a billing program for an Electric Company 
************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

  string firstName;// variable for first name
  char ch;// Enter variable to continue after information is displayed
  int month;// variable for month
  int meter;// variable for difference in  meter reading 
  int pMeter;// variable for previous meter reading
  int cMeter;// variable for current meter reading 
  const double rate = 8.50;// const for base rate
  int overKwh;// Kwh over 400 used
  double amount;// total amount due

  //Get first name
  cout<< "Enter your first name: ";
  cin>> firstName;

  // clear stream and output program info, wait for enter key
  cin.ignore(1000, '\n');
  cout<< endl <<  "Welcome, " << firstName << "!" <<endl;
  cout << "This program will ask for the month, current and previous meter readings "
       << "then calculate your electric bill. "
       <<"Please press ""ENTER"" to continue."  << endl;
  cin.get(ch);

  //set decimal to two places
  cout<<fixed<<setprecision(2);

  //get month 
  cout<< "Enter the month: ";
  cin>> month;

  //if invalid month
  if(month < 1 || month > 12)
    cout<< month << " is an invalid month\n" <<endl;
  else// if good month
    {
      //get meter readings
      cout<< "Enter current meter reading: ";
	cin>> cMeter;
	cout<< "Enter previous meter reading: ";
	cin>> pMeter;
	//if meter reading is negative or current is less than previous
	if(cMeter < 0 || pMeter < 0)
	  cout<< "The readings are invalid"<<endl;
	else if(cMeter < pMeter)
	  cout<< "The readings are invalid"<<endl;
	else// if meter reading is good
	  {
	    meter = cMeter - pMeter;
	    // if meter reading is 400 or less
	    if(meter <= 400)
	      cout << "You consumed " << meter << " KWH and your amount due is $" << rate <<endl<<endl;
	    else// if meter reading is over 400
	      {
		overKwh = meter - 400;
		// if meter reading is may-sept
		if (month >=  5 &&  month <=  9)
		  amount = rate + (.07525 * overKwh);
		else // if its any other month 
		    amount = rate + (.06575 * overKwh);
		cout << "You consumed " << meter << " KWH and your amount due is $" << amount <<endl<<endl;
	      }
 
	  }
    }
	   

  return 0;

}
