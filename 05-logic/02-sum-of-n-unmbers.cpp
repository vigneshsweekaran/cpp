#include <iostream>
using namespace std;

int main() {
  int n = 100;
  int sum = 0;
  for (int i=1; i<=n; i++) {
    sum = sum + i;
  }
  int avg = sum/n;
  cout << avg;

  return 0;
}