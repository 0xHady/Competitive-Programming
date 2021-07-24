#include <iostream> 
#include <algorithm> 
#include <string> 
using namespace std; 
  
int main() 
{ 
    int k , r,x=1;
    cin>>k>>r;
    for(;;)
    {
        if( (k*x)%10 == 0 ||(k*x)%10 == r )
            break;
        x++;
    }
 
 
    cout<<x;
 
} 
