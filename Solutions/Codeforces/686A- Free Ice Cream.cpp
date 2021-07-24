#include <iostream> 
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(){
    
    long long int n , x;
    cin>>n>>x;
    int sad = 0;
 
    char type;
    unsigned long long int d;
 
    for(int i = 0 ; i< n ; i++)
    {
        cin>>type;
        cin>>d;
 
        if(type == '+')
            x+=d;
        else
        {
            if(x >= d)
                x-=d;
            else
            {
                sad++;
            }
            
        }
    }
    cout<<x<<" "<<sad;
}
