/*******************************
Lucian Pate
lab


*******************************/
#include<iostream>
#include<fstream>
using namespace std;
#include"myStrCharFunc.h"

const int SIZE = 26;
const int MAX = 30;
typedef char cstr[MAX];
struct letter
{
  int count;
  int shortest;
  int longest;
};

void initializeArray(letter[]);
void readFile(letter[]);
void processWord(cstr word, letter[]);
void printInfoOnAllLetter(letter[]);

int main()
{
  letter arr[SIZE];
  int choice;
  initializeArray(arr);
  readFile(arr);

  do
    {
      cout<< "1. Show information on all letters" <<endl;
      cout<< "2. Show information on one letter" << endl;
      cout<< "3. Quit Program" << endl;
      cout<< "Enter your choice here: ";
      cin>> choice;
      cout<< endl;
      
      switch(choice)
	{
	case 1:  
	  //printInfoOnAllLetter(arr);
	  break;
	case 2: 
	  //printInfoOnOneLetter(arr);
	  break;
	case 3: cout<<"Thank you for using the system. Good Bye."<<endl;
	  break;
	default: cout<< "Invalid choice. Please try again"<<endl;
	}
    }while(choice != 3);

  return 0;
}

void initializeArray(letter arr[SIZE])
{
  for(int i = 0; i < SIZE; ++i)
    {
  arr[i].count = 0;
  arr[i].shortest = 999;
  arr[i].longest = 0;
    }
}

void readFile(letter arr[SIZE])
{
  cstr word;
  ifstream fin;
  fin.open("project2.dat");
  if(!fin)
    {
      cout<< "Cannot open input file"<<endl;
    }

  fin >> word;
  while(fin)
    {
      processWord(word,arr);
      fin>> word;
    }
}

void processWord(cstr word, letter ar[SIZE])
{
  char temp = myToUpper(word[0]);
  int index = temp - 'A';
  
  ar[index].count++;
  
  int length = myStrlen(word);
  
  if(ar[index].shortest > length)
    {
     ar[index].shortest = length;
    }
     else if(ar[index].longest < length)
       { 
	 ar[index].longest = length;
       }     
}

void printInfoOnAllLetter(letter ar[SIZE];

