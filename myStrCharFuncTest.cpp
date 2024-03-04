#include <iostream>
using namespace std;
#include "myStrCharFunc.h"
int main()
{
  char wd[10] = "Hello";
  cout << wd << endl; // Hello
  cout << myToUpper('a') << endl;
  cout << myToUpper('m') << endl;
  cout << myToUpper('x') << endl;
  cout << myToUpper('A') << endl;
  cout << myToUpper('M') << endl;
  cout << myToUpper('X') << endl;
  cout << myStrlen(wd)<< endl; // 5
  return 0;
}
