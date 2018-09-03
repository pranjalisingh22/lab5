//write program to check whether triangle is valid or not by putting input of angles.
//adding library
#include <iostream>
using namespace std;
//writing the function
int main(){
//declaring variables
int x,y,z;
cout <<"put values of angles of triangle";
cin >>x>>y>>z;
//declaring conditions to be a triangle
if (x+y+z == 180)
{
cout << "it's a triangle";
}
else
{
cout << "it's not a triangle";
}
//ending
return 0;
}
