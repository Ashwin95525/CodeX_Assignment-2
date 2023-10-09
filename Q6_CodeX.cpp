#include<iostream>
using namespace std;

int Prime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int count = 0;
    cout<<"The first 5 prime numbers are: "<<endl;
    for(int i = 2; i <= 100; i++)
    {
        if(Prime(i))
        {
            cout<<i<<endl;
            count+=1;
            if(count == 5)
            {
                break;
            }
        }
    }
    return 0;
}