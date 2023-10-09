# include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{   float age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age<13)
    {
        cout<<"You are a child";
    }
    else if (age>=13 && age<18)
    {
        cout<<"You are a teenager";
    }
    else if (age>=18 && age<65)
    {
       cout<<"You are an adult";
    }
    else if (age>=65)
    {
       cout<<"You are a Senior citizen";
    }
    
    
    
    
    return 0;
}
