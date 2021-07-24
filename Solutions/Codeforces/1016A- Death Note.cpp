#include <iostream> 
#include <string>
#include <stdio.h>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(){
    
    int n , m ;
    cin>>n>>m;
    int r =0;
 
    for(int i =0 ; i < n ; i++)
    {
        int temp;
        cin>>temp;
 
        r+=temp;
        cout<<r/m<<" ";
        r%=m;
 
    }
    cout<<endl;
 
    
}
