#include <bits/stdc++.h>
using ll = long long ;
using ull = unsigned long long ;
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin);// freopen ("out.txt","w",stdout);
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
 
using namespace std;
 
int main()
{
    Hello_World
    int t ;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
            cin>>arr[i];
        sort(arr,arr+n);
 
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] > 0|| k == 0) break;
            arr[i]*=-1;
            k--;
        }
 
        sort(arr,arr+n);
        if(k != 0)
        if(arr[0] > 0)
            if(k%2 != 0)
                arr[0]*=-1;
        ll sum = 0;
        for(int i = 0 ; i < n ; i++)
            sum+=arr[i];
        cout<<sum<<endl;
    }    
}
