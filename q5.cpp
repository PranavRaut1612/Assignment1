// Q5. Write a program to find the circumference of a circle with radius 10 in C++.
#include<iostream>
using namespace std;
int main(){
    float radius = 10;
    float pi = 3.1415;
    float circumference = 2*pi*radius;
    cout<<"The circumference of the circle is "<<circumference;
    return 0;
}