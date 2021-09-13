#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long y,x;
    for(int i = 0 ; i< t ; i++)
    {
        cin>>y>>x;
        cout<<(100*y)/(x+100)<<endl;
    }
    return 0;
}
