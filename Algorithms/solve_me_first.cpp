#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {
  int num1, num2;
  int sum;
  
  cout<<"Report the first number: ";
  cin>>num1;
  cout<<"Report the second number: ";
  cin>>num2;
  sum = solveMeFirst(num1,num2);

  cout<<"Sum Result: "<<sum<<endl;

  return 0;
}