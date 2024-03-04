/***********************************************
Lucian Pate
assignment
CS111
**********************************************/
#include <iostream> //outputInvoice1 uses cout                                                                                
#include <iomanip>  //for setw and setprecision                                                  
using namespace std;


/*********************************************************************************
tw is the total weight of all the items the customer is buying.

This function calculates a shipping cost as follows and returns it.
25 pounds and under$5 (flat rate)
26 – 50 poundsabove rate for first 25 pounds and 10 cents/pound for pounds over 25
over 50 poundsabove rate for first 50 pounds and 7 cents/pound for pounds over 50
**********************************************************************************/
double calcShipping(int tw)  //You may not change the parameter
{
  //Complete this function in mailOrderB.h that you downloaded from my public directory.
  double amount;
  int medLbs;
  int heavyLbs; 
  const double rate = 5.00;
  medLbs = tw - 25;
  heavyLbs = tw - 50;

  if(tw <= 25)
    amount = rate;
  else if(tw >= 26 && tw <= 50)
    amount = rate + (.10 * medLbs);
  else if(tw > 50)
    amount = rate + (.07 * heavyLbs);
 
  cout<< fixed << setprecision(2);
  cout<< "$" << (double)amount<<endl;

}

/********************************************************************************* 
total is the total price the items the customer is buying
disc is the discount amount
tax is the sales tax amount
ship is the shipping cost

This function will output the bottom half of the invoice.
**********************************************************************************/

void outputInvoice2(double total, double disc, double tax, double ship)//you may not change the parameters 
{
  double due;

  due = total - disc + tax + ship;

  cout<< fixed << setprecision(2);
  cout<< left << setw(20) << "TOTAL SALE AMOUNT: " << "$" << right << setw(10) << total << endl;
  cout<< left << setw(20) << "DISCOUNT: " << "$" << right << setw(10) << disc << endl;
  cout<< left << setw(20) << "SALES TAX: " << "$" << right << setw(10) << tax << endl;
  cout<< left << setw(20) << "SHIPPING: " << "$" << right << setw(10) << ship << endl;
  cout<< left << setw(20) << "TOTAL DUE" << "$" << right << setw(10) << due << endl;
  cout<< endl;
}


