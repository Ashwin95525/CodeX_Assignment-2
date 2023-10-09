#include <time.h>   
#include <iostream>  
  
  
using namespace std; 
int main(int argc, char const *argv[])
{
    time_t ct=time(0);
    string currenttimedate=ctime(&ct);
    cout<<"current date and time is: "<<currenttimedate;
  
     return 0;
}
 
  

  
    