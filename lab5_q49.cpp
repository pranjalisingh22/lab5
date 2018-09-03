//write a c++ program from 1 to n and to find there sum.
//including the library
#include <iostream>
using namespace std;
//include the function
int main(){
//declaring variables
int n, sum = 0;
cout << "enter a positive integer: ";
cin >> n;
//dtating conditions
for (int a = 1; a <= n; ++a){
sum += a;
}
cout << "sum = " << sum;
//ending
return 0;
}
