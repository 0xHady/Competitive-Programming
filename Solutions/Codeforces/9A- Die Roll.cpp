#include <iostream> 
#include <cmath>
#include <algorithm> 
#include <string> 
using namespace std; 
  
int main() 
{ 
    int y , k;
    cin>>y>>k;
    int gcd = __gcd((6-max(y,k))+1,6);
    cout<<((6-max(y,k))+1)/gcd<<"/"<<6/gcd<<endl;
} 
