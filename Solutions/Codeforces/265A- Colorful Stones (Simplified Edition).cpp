#include <iostream> 
#include <algorithm> 
#include <string> 
using namespace std; 
  
int main() 
{ 
    string s , t;
    cin>>s>>t;
    
    int p = 0 ;
 
    for(int i = 0 ; i < t.size() ; i++)
    {
        if( t[i] == s[p] )
            p++;
    }
 
    cout<<p+1<<endl;
} 
