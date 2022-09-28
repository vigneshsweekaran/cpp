#include <iostream>
#include <math.h>
using namespace std;

int fact(int n){
  int f = 1;
  for (int i=1; i<=n; i++) {
    f = f*i;
  }
  return f;
}

int main() {
  int i,x=2,s=1;
  int sum=0;
  for (int i=1; i<=6; i++) {
    sum = sum + s * pow(x,i)/fact(i);
    s *= -1
  }
  cout << "The sum is " << sum;
  
  return 0;
}