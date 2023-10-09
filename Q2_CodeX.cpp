#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float pi=3.141592653589,r;
    cout<<"Enter radius of the circle:\n";
    cin>>r;
    float area=pi*r*r;
    cout<<"Area of circle with radius "<<r<<" is:"<<area;

    return 0;
}
