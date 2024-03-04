/*******************************************
Lucian Pate
CS111
Assignment 3-1

Write a program that asks foe todays date, company name, and quantity they 
wish to buy and computes total cost.
**********************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  string date;//initialize date for user input
  string company;//initialize company for user input
  int quantity;//initialize quantity for user input
  double price;//total price before discount
  double discount;//calculated discount
  double total;//total price after discount is subtracted
  const double package = 99.00;// cost of software

  //take user input for date, company name, and quantity
  cout<< "Enter today's date(mm/dd/yy): ";
  cin>> date;
  cin.ignore(1000, '\n');
  cout<< "Enter your company name: ";
  getline(cin, company);
  cout<< "Enter the quantity you would like to purchase: ";
  cin>> quantity;

  // if negative output invalid
  if(quantity < 0)
    cout<< endl << "Invalid quantity\n" << endl;
  else if(quantity == 0)// if 0 output message
    cout<< endl << "Hope you decide to buy our software in the future\n" << endl;
  else if(quantity > 0)// if greater than 0 then calculate appropriate discount and output totals
    {
      if(quantity >=10 &&  quantity <= 19)
      discount = .20;
      
      else if(quantity >=20 &&  quantity <= 49)
	discount = .30;

	else if (quantity >= 50 && quantity <= 99)
	  discount = .40;
      
	else if (quantity >= 100)
	  discount = .50;
    
      //calculate price, discount, and total price  
      price = quantity * package;
      discount = price * discount;
      total = price - discount;

      //output for the receipt 
      cout<< endl << "Invoice for " << company << endl << endl;
      cout<< fixed << setprecision(2);
      cout<< left << setw(30) << "Price before discount" << setw(4) << "$" << right << setw(6) << price << endl;
      cout<< left << setw(30) << "Discount" << setw(4) << "$" << right << setw(6) << discount << endl;
      cout<< left << setw(30) << "Total Due" << setw(4) << "$" << right<< setw(6) << total << endl;
      cout<< endl;
    }


  return 0;

}
