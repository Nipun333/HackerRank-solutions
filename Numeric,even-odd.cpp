/* You will be given two positive integers, a and b (a<=b), separated by a newline.

 For each integer n in the inclusive interval [a,b]:
   If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1 , "two" for 2, and so on.
   Else if n>9 and it is an even number, then print "even".
   Else if n>9 and it is an odd number, then print "odd".
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    
    string represent[] = {"zero", "one", "two", "three", "four", "five",
                        "six", "seven", "eight", "nine"};
    
    for(int n=a; n<=b; n++){
        
        if(n >= 1 && n <= 9){
        cout << represent[n]<<endl;
        } 
        else if (n%2==0){
            cout << "even"<<endl;
        } else {
            cout << "odd"<<endl;
        }
    }
    
    return 0;
}
    
