/****************************
Lucian Pate
cs111


*****************************/
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

const int SIZE = 100;
struct employee
{
  string fName;
  string lName;
  char gender;
  double rate;
  int id;
  int age;
};

void readData(employee mAr[], employee fAr[], int& mi, int& fi);
void printEmployee(const employee& list);
void printAllEmp(const employee list[], int num);
void outfileArray(const employee list[], int num);
employee findOldest(const employee list[], int num);
void giveRaise(employee list[], int num, double percent);
void giveRaiseToOneEmployee(employee& list, double percent);
void combineArray(employee allEmp[], employee mAr[], employee fAr[], int n1, int n2);
void findEmp(employee list[]);
//void sortEmployees(employee list[])

int main()
{
  employee mAr[SIZE];//male array
  employee fAr[SIZE];//female array
  employee allEmp[SIZE*2];

  int m;// number of males
  int f;// number of females

  cout<< "------------readData()------------"<<endl;
  readData(mAr, fAr, m, f);
  cout<< "There are " << m << " male and " << f << " female employees\n" << endl;
  cout<< "------------printEmployee()------------"<<endl;
  printEmployee(fAr[0]);

  cout<<endl<< "------------printEmployee()------------"<<endl;
  printEmployee(mAr[0]);
 
  cout<<endl<< "------------printAllEmp()------------"<<endl;
  printAllEmp(mAr, m);

  cout<<endl<< "------------printAllEmp()------------"<<endl;
  printAllEmp(fAr, f);
  
  cout<<endl<< "------------outfileArray()------------"<<endl;
  outfileArray(mAr, m);

  cout<<endl<< "------------outfileArray()------------"<<endl;
  outfileArray(fAr, f);

  employee oldest = findOldest(mAr, m);
  cout<<endl<< "------------findOldest()------------"<<endl;
  cout<<oldest.fName<<endl;

  cout<<endl<< "------------giveRaise()------------"<<endl;
  giveRaise(fAr, f, 5.5);
  printAllEmp(fAr, f);

  cout<<endl<< "------------giveRaise()------------"<<endl;
  giveRaise(mAr, m, 5.0);
  printAllEmp(mAr, m);
 
  cout<<endl<< "------------giveRaiseToOneEmployee()------------"<<endl;
  giveRaiseToOneEmployee(fAr[1], 2.0);
  printEmployee(fAr[1]);

  cout<<endl<< "------------giveRaiseToOneEmployee()------------"<<endl;
  giveRaiseToOneEmployee(mAr[0], 50.0);
  printEmployee(mAr[0]);

  cout<<endl<< "------------combineArray()------------"<<endl;
  int combine = m + f;
  combineArray(allEmp, mAr, fAr, m, f);
  printAllEmp(allEmp, combine);  

  cout<<endl<< "------------findEmp()------------"<<endl;
  findEmp(allEmp);

  cout<<endl<< "------------findEmp()------------"<<endl;
  findEmp(allEmp);

  cout<<endl<< "------------sortEmployees()------------"<<endl;
  //sortEmployees(allEmp);
  //printAllEmp(allEmp);

  return 0;
}

/*******************************************************
employee mAr[] is the male employee array
employee fAr[] is the female employee array
int& mi is the male index keeping track of how many male employees
int& fi is the female index keeping track of how many female employees

This function reads the input file and counts male/female employees
*******************************************************/
void readData(employee mAr[], employee fAr[], int& mi, int& fi)
{
  mi = 0;
  fi = 0;

  ifstream fin;
  fin.open("employees.dat");

    if(!fin)
      {
	cout<< "Cannont open input file" << endl;
      }
    else
      {
	employee temp;
	fin >> temp.fName;
	fin >> temp.lName;
	fin >> temp.gender;
	fin >> temp.rate;
	fin >> temp.id;
	fin >> temp.age;

	while(fin && fi < SIZE && mi < SIZE)
	  {
	    if(temp.gender == 'F')
	      {
		fAr[fi] = temp;
		fi++;
	      }
	    else if(temp.gender == 'M')
	      {
		mAr[mi] = temp;
		mi++;
	      }
	    
	    fin >> temp.fName;
	    fin >> temp.lName;
	    fin >> temp.gender;
	    fin >> temp.rate;
	    fin >> temp.id;
	    fin >> temp.age;
	  }
      }
  fin.close();
}

/*******************************************************
const employee& list is the employee struct

This function prints a single employee info 
*******************************************************/
void printEmployee(const employee& list)
{
  cout<< left<<setw(10)<<list.fName;
  cout<< setw(10)<<list.lName;
  cout<< setw(10)<<list.gender;
  cout<< fixed<<setprecision(2)<<setw(10)<<list.rate;
  cout<< setw(10)<<list.id;
  cout<< setw(10)<<list.age<<endl;
} 

/*******************************************************
const employee list[] is an array for the employees
int num is the number of people in the array

This function prints all employee info
*******************************************************/
void printAllEmp(const employee list[], int num)
{

  for(int i = 0; i < num; i++)
      printEmployee(list[i]);

}

/*******************************************************
const employee list[] is an array for the employees
int num is the number of people in the array

This function outputs all employee info to output file
*******************************************************/
void outfileArray(const employee list[], int num)
{
  string filename;
  ofstream fout;

  cout<< "Enter the output file name: ";
  cin>> filename;
  fout.open(filename.c_str());
  
  for (int i = 0; i < num; i++)
    fout<< list[i].lName <<"," << list[i].fName <<endl;
  fout.close();
}
/*******************************************************
const employee list[] is an array for the employees
int num is the number of people in the array

This function finds the oldest employee 
*******************************************************/
employee findOldest(const employee list[], int num)
{
  int oldest = 0;
  int index = 0;

  for(int i = 0; i < num; i++)
    {
      if(list[i].age > oldest)
	{
	  oldest = list[i].age;
	  index = i;
	}
    }
  return list[index];
}

/*******************************************************
employee list[] is an array for the employees
int num is the number of people in the array
double percent is the percent that rate should be increase by

This function gives raises to all employees
*******************************************************/
void giveRaise(employee list[], int num, double percent)
{
  double rate1;
  double raise;
  for(int i = 0; i < num; i++)
    {
      rate1 = list[i].rate;
      raise = (percent / 100)* rate1;
      list[i].rate = rate1 + raise;
    }
}
/*******************************************************
employee& list is the employee struct
double percent is the percent that rate should be increase by

This function gives a raise to one employee
*******************************************************/
void giveRaiseToOneEmployee(employee& list, double percent)
{
  double rate1;
  double raise;
  
  rate1 = list.rate;
  raise = (percent / 100)* rate1;
  list.rate = rate1 + raise;
    
  
}
/*******************************************************
employee allEmp is the whole employee array
employee mAr & fAr are male and female employees 
int n1 is amount of male employees
int n2 is amount of female employees

This function combines mAr and Far
*************************************************************/
void combineArray(employee allEmp[], employee mAr[], employee fAr[], int n1, int n2)
{
  for(int i = 0; i < n1 + n2; i++)
    {
      if (i < n1)
      allEmp[i] = mAr[i];
      else 
	allEmp[i] = fAr[i - n1];
    }

}
/***************************************************

This function will find an employee based on the id
**************************************************/
void findEmp(employee list[])
{
  int empId;
  int i;
  bool found = false;

  cout<< "Enter Employee ID: ";
  cin >> empId;

  for(int i = 0; found && i < empId; i++)
    {
      if(list[i].id == empId)
	found = true;
    }

  if(found == true)
    cout<< endl << list[i].lName << " " << list[i].fName <<endl;
  else
    cout<< "There is no employee with ID " << empId <<endl;
 

}
