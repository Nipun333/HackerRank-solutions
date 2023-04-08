
/* Input will contain four integers - a,b,c,d one per line. Return the greatest of the four integers.
   PS: I/O will be automatically handled.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c, d;

int greatest(int a, int b, int c, int d) { 
  return max({a, b, c, d}); 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    cin>> a>> b>> c>> d;
    cout<< greatest(a,b,c,d);
    
}
