// link to the prob: https://codeforces.com/problemset/problem/192/B
#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes
    int n; cin >> n;
    int arr[n];
    cin >> arr[0];
    int mnGap = INT_MAX;
    for(int i = 1 ; i < n; i++){
        cin >> arr[i];
        mnGap =  min(mnGap,max(arr[i],arr[i-1]));
    }
    cout << min(arr[0],min(arr[n-1],mnGap ));
}
 
