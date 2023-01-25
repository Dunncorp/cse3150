#include <iostream>

#define MAX(a,b) (a < b) ? b : a

using namespace std;


int main() {

  int a = 5, b = 10;
  cout << "a is "
       << a
       << " and b is "
       << b
       << endl;
  int aa = a, bb = b;
  int m = MAX(a++,b++);
  int mm = max(aa++,bb++);
  
  cout << "max of  a = "
       << a
       << " and  b = "
       << b
       << " is "
       << m
       << " ?!?!"
       << endl;

  cout << "max of aa = "
       << aa
       << " and bb = "
       << bb
       << " is "
       << mm
       << " ?!?!"
       << endl;
  
  return 0;
}


