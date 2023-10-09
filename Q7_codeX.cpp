#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i =0; i<21; i++)
    {
       if (i%2==0)
       {
        if(i==10){
            continue;
        }else{
            cout<<i<<endl;
            
        }
       }
       
    }
    
    return 0;
}
