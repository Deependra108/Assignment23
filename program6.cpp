//6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    float avg;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    sum = a + b + c;
    avg = sum/3.0f;
    cout<<"Average of three numbers is : "<<avg;
    return 0;
}
