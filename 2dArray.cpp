
/*****************************************************************
Lucian Pate
CS111

Template prepared by Kazumi Slott
11-1-16
Lab on 2D arrays
*****************************************************************/ 
#include <iostream>
#include <iomanip>
using namespace std;

//???????? Where does the prototype for showTable() go?

//declare 2 constants for the sizes of the 2 dimensional array
const int NUM_STU = 5;
const int NUM_TEST = 3;

void fillArray(int ar[NUM_STU][NUM_TEST]);
void showTable(const int a[NUM_STU][NUM_TEST]);


int main()
{
  int arr[NUM_STU][NUM_TEST];
  //declare the 2 dimensional array and initialize the array using the initialization list
  //int arr[NUM_TEST][NUM_STU] = { {45, 67, 78}, {78, 88, 56}, {86, 96, 78}, {78, 77, 67}, {67, 57, 57} };

  // int arr[NUM_TEST][NUM_STU] = {{45,78,86,78,67}, {67,88,96,77,57}, {78,56,78,67,57}};
  //????????? Call showTable here
 
  fillArray(arr);
 
  showTable(arr);

  return 0;
}

void fillArray(int ar[NUM_STU][NUM_TEST])
{
  int s;
  int t;
  for(int t = 0; t <= NUM_TEST; t++);
    {
      cout<< "Enter scores for test#" << t+1 <<endl;
      for(int s = 0; s < NUM_STU; s++)
	{
	  cout<< "Student#"<< s+1<<": ";
	cin>> ar[t][s];
	} 
    cout<< endl;
    }
}

void showTable(const int ar[NUM_STU][NUM_TEST])
{
  int total = 0;

  //Show the lables for the table
  cout << setw(10) << "Test#" << setw(10) << "Stu 1" << setw(10) << "Stu 2" << setw(10) << "Stu 3" 
       << setw(10) << "Stu 4" << setw(10) << "Stu 5" << setw(10) << "Average" << endl;

  //????????? Show the table using a nested for loop here
  cout<<fixed<<setprecision(1);

  for(int t = 0; t < NUM_TEST; t++)
    { 
      cout<<setw(10) << t + 1 <<setw(10);
      for(int s = 0; s < NUM_STU; s++)
	{
	  total = total + ar[t][s];
	  cout<< ar[t][s]<<setw(10);
	  
	}      
      cout<<(double)total/NUM_STU <<endl;
	  
    }

}
