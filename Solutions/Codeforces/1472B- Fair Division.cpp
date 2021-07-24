#include <bits/stdc++.h>
 
#define ll long long 
#define Hello_World ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() 
{
    Hello_World
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        int half = sum/2;
        int a = 0,b = 0;
 
        for(int i = n -1 ; i >= 0 ; i--)
        {   
            if(a + arr[i] > half)
                continue;
            a+=arr[i];
        }
        b = sum - a;
        if(a == b)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
 
    }
 
}
