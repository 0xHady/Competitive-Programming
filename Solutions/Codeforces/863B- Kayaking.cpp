#include <bits/stdc++.h>
using ll = long long ;
using ull = unsigned long long ;
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin);// freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define yup puts("YES");
#define nope puts("NO");
 
using namespace std;
 
int main() 
{
    Hello_World     
    // letMeIn  
    // USACO("buckets")
 
    int n;
    int t = 0;
    cin>>n;
    int res = INT_MAX;
    n*=2;
 
    vector <int> v(n);
    for(int i = 0 ; i< n ; i++)
        cin>>v[i];
 
    sort(v.begin(),v.end());
 
    for(int i = 0 ; i < n ; i++)
        for(int j = i+1 ; j < n ; j++){
 
            vector <int> sub;
            for(int k = 0 ; k < n ; k++)
                if(k != i && k!= j)
                    sub.push_back(v[k]);
 
            t = 0;
            for(int k = 1 ; k < sub.size() ; k+=2)
                t+=sub[k]-sub[k-1];
 
            res = min(res,t);
 
        }
 
    cout<<res;
 
}
