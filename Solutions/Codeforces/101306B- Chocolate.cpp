#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    long long k,n,m, mars = 0 , origi  ;
    string s;
    cin>>k>>n>>m;
    for(int i= 1; i<=k ; i++)
    {
        cin>>s;
        if(s == "Mars")
            mars++;
    }
    
    origi = k - mars;
    
    while(m > 0 && k > 0 && origi> 0) {m--; k--; origi--;}
    while(n > 0 && k > 0) {n--; k--;}
    
    cout<<n+m;
    
}
