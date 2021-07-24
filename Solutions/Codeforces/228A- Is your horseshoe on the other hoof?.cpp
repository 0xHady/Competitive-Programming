#include <iostream> 
#include <algorithm> 
#include <string> 
using namespace std; 
  
int main() 
{ 
    long long arr[4];
    for(int i = 0 ;i<4 ; i++)
    {
        cin>>arr[i];
    }
    int counter = 0;
    sort(arr , arr+4);
    for(int i = 0 ;i<3 ; i++)
    {
        if( arr[i] == arr[i+1])
            counter++;
    }
 
    cout<<counter<<endl;
} 
