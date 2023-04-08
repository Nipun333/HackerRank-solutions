
/* update function has the following parameters:
   
    int *a: an integer
    int *b: an integer 
       
   The function is declared with a void return type, so there is no value to return. Modify the values in memory so that a contains their sum and b contains their absoluted difference. 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a, int *b) {
  int sum = *a + *b;
  int diff = abs(*a - *b);
  *a = sum;
  *b = diff;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b;

  cin >>a>>b;
  update(&a, &b);
  cout << a << endl << b << endl;
  
    return 0;
}
