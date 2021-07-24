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
    int neg[n];
 
    for(int i =0 ;i < n ; i++)
        neg[i] = 0;
 
    int temp2=0;
 
    for(int i = 0 ; i < n ;i++)
    {
        int temp ; 
        cin>>temp;
        if(temp < 0)
        {
            neg[temp2] = (temp*-1);
            temp2++;
        }
    }
    sort(neg , neg+n, greater<int>());
    int ans = 0;
 
    for(int i =0 ; i< m ; i++)
        ans+=neg[i];
    cout<<ans;
 
 
}
