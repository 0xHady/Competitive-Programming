#include <bits/stdc++.h>
using ll = long long ;
using ull = unsigned long long ;
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin);// freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define nopos string::npos
 
 
using namespace std;
 
int main()
{
    Hello_World
    // letMeIn
    // USACO("mowing")
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];
    
    int results[n];
    for(int i = 0 ; i < n ; i++)
    {
 
        set <int> loop;
        int t = i;
        while(true)
        {
            // cout<<"here\n";
            loop.insert(t+1);
            t = arr[t]-1;
            if(loop.count(t+1) != 0) break;
        }
        results[i] = t+1;
 
 
 
    }
 
    for(int i = 0 ; i < n ; i++)
        cout<<results[i]<<" ";
 
 
}
