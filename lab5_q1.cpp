//write a c++ program in which maximum between two numbers is found.
//including library
#include <iostream>
using namespace std;
//including function
int main(){
//asking for condition
int a,b;
cout <<"enter first number:";
cin >> a;
cout << "enter second number:";
cin >> b;
//use of if and else
{
cout <<"first number"<<a<<" is the largest.";
}
if (b>a)
{
cout<<"second number "<<b<<"is the largest.";
}
if (a>b)
else
cout <<"we are checking for largest number.";//if numbers are same or there is some eror
//ending
return 0;
}
