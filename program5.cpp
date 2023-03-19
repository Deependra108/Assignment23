//5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    float length,volume;
    cout<<"Enter length of the cube:";
    cin>>length;
    volume = length*length*length;
    cout<<"Volume of cuboid is : "<<volume;
    return 0;
}
