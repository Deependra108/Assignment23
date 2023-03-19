// 10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int a[10],i,add=0;
    cout<<"Enter 10 numbers :";
    for(i=0; i<10; i++)
    {
        cin>>a[i];
        add =  add + a[i];
    }
    cout<<"Addition of 10 numbers is : "<<add;
    return 0;

}
