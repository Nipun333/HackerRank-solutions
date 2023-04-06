/*  Given a positive integer n, do the following:
     If 1<n<9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.
       Constraints - 1<=n<=10^9 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    switch (n){
        case 0:
             cout<< "zero";
             break;
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        default:
            cout << "Greater than 9";
    }


    return 0;
}
