#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string cp="vscode",pass;
    
    while(1){
        cout<<"Enter your password \n";
        getline(cin,pass);
        if (cp==pass)
        {
            cout<<"You have Entered the correct password\n";
            break;
        }else{
                cout<<"Incorrect password\n";
        }}
        

    
    
    
    
    

    return 0;
}
