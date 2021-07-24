#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int n , t , k , d;
    cin>>n>>t>>k>>d;
 
    int l = ceil((float)n/k);
    int ov1 = 0 , ov2 = d;
 
    for(int i = 0 ; i < l ; i++)
    {
        if(ov1 <= ov2)
        {
            ov1+=t;
        }
        else
        {
            ov2+=t;
        }
            
    }
    if(max(ov1,ov2) < l*t)
        cout<<"YES"<<endl;
    else
        cout<<"No"<<endl;
 
}
