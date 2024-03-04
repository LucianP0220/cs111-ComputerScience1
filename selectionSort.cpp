/********************************
Lucian Pate
cs111
assignment 6-2

write a program that fills an array with random numbers 
and sorts them in descending order
********************************/
#include <iostream>
#include<cstdlib>
using namespace std;

//prototype
void selectionSort(int array[], int N);

int main()
{
  const int SIZE = 10;//declare constant size is 10
  srand(time(0));// for random numbers
  int arr[SIZE];// declare array with SIZE

  //fill the array with 10 random numbers between 0 and 100
  for(int i; i < SIZE; i++)
    arr[i] = rand()%101;
  

  //call selectionSort
  selectionSort(arr, SIZE);

  //print the array
  for(int n = 0; n < SIZE; n++)
    cout<<arr[n]<<" ";

  cout<<endl;

  return 0;
}


//change this function so it will sort the numbers in descending order: largest down to smallest
void selectionSort(int array[], int N) 
{
  int smlIndex; //the index of the smallest value
  int temp; //temporary variable that holds the smallest value

  //last is the last index in unsorted portion
  for(int last = N-1; last >= 0; last--)
    { 
      smlIndex = 0; //assume the first item is the smallest
  
      //find the smallest in unsorted portion ([0..last])
      for(int i = 0; i <= last; i++) 
	{
	  if(array[i] < array[smlIndex]) //The current item is smaller 
	    smlIndex = i;
	}

      //swap the smallest with the last item in the unsorted portion
      temp = array[smlIndex]; 
      array[smlIndex] = array[last]; 
      array[last] = temp;
    } 
}
