/*******************************
Lucian Pate
CS111
assignment 

make a program with an array of integer values
*************************************************/
#include<iostream>
using namespace std;

//prototypes
void fillArray(int ar[], int SIZE);
void printArray(const int ar[],int SIZE);
void reverseArray(int ar[], int SIZE);
int sequentialSearch(const int ar[],int SIZE,int key);
double getAvg(const int ar[], int SIZE);
int findHighest(const int ar[], int SIZE);
void doubleArray(int ar[], int SIZE);
void showBarGraph(int ar[], int SIZE);

int main()
{
  const int SIZE = 5;
  int array[SIZE];//array size
  int choice;//choice for switch
  int i; // variable for search
  int key;// key for search
  int high;//highest number in array
  double average;// average of array

  do
    //menu
    {
      cout<<"\n";
      cout<< "===================="<<endl;
      cout<< "1: Fill the array" << endl;
      cout<< "2: Print the array" << endl;
      cout<< "3: Reverse contents of the array" << endl;
      cout<< "4: Find average" <<endl;
      cout<< "5: Find Highest number"<<endl;
      cout<< "6: Double the array" << endl;
      cout<< "7: Show Bar Graph"<<endl;
      cout<< "10: Sequential search" << endl;
      cout<< "13: Quit" << endl;
      cout<< "===================="<<endl;
      cout<< "\nEnter your choice: ";
      cin>> choice;
      
      //switch choice for menu
      switch(choice)
	{
	case 1:fillArray(array, SIZE);
	  break;
	case 2: printArray(array, SIZE);
	  break;
	case 3:reverseArray(array, SIZE);
	  break;
	case 4:
	  average =  getAvg(array, SIZE);
	  cout<< "The average is "<<average<<endl;
	  break;
	case 5:
	  high = findHighest(array, SIZE);
	  cout<< "The highest number is: " << high <<endl;
	  break;
	case 6:doubleArray(array, SIZE);
	  break;
	case 7: showBarGraph(array, SIZE);
	  break;
	case 10:
	  cout<<"Enter the key: ";
	  cin>> key;
	  i = sequentialSearch(array, SIZE, key);
	  if( i == -1)
	    cout<< key << " was not found in array.";
	  else
	    cout<< key << " was found at index "<<i<<endl;
	  break;
	default:cout<<"\nInvalid choice";
	}
    }while(choice != 13);
  
  cout<< "\nThank you for using our system."<<endl;
  
  return 0;
}

// to fill array with user input
void fillArray(int ar[], int SIZE)
{
  for(int i = 0; i < SIZE; i++)
    {
      cout<<"Enter a number: ";
      cin>>ar[i];
    }
}

//output array from user input
void printArray(const int ar[],int SIZE)
{
  cout<<"\nThe numbers in the array are: ";
  for(int i = 0; i < SIZE; i++)
    cout<< ar[i]<< " ";
}
		
//reverse array from user input
void reverseArray(int ar[], int SIZE)
{
  for(int L = 0, R = SIZE - 1;L < R ;L++,R--)
    {
      int temp = ar[L];
      ar[L] = ar[R];
      ar[R] = temp;
     
    }
}

//search from user array
int sequentialSearch(const int ar[],int SIZE,int key)
{
  int i;
  for(int i = 0; i < SIZE; i++)
    {
      if (ar[i] == key)
	return i;
    }
  return -1;
}

//get average from user array
double getAvg(const int ar[], int SIZE)
{
  int total = 0;
  for(int i = 0; i <  SIZE; i++)
    total += ar[i];
  return (double)total/SIZE;
}

//find highest number from user array
int findHighest(const int ar[], int SIZE)
{
  int hIndex = 0;
  for(int i = 1; i < SIZE; i++)
    if(ar[i] > ar[hIndex])
      hIndex = i;
  return ar[hIndex];
}

//double value from user array
void doubleArray(int ar[], int SIZE)
{
for(int i = 0; i < SIZE; i++)
  ar[i]*= 2;
}

//make graph from user array 
void showBarGraph( int ar[], int SIZE)
{
  for(int i = 0; i < SIZE; i++)
    {
      cout<< "Slot " << i << ":";
      for(int n = 0; n < ar[i]/10; n++) 
      cout<< "*";

      cout<<endl;
    }

}
