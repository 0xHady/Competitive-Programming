#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int arr[1001];
void f(int x){
    if(x == 1) return;
    swap(arr[x-1],arr[x]);
    f(x-1);
}
thats_what_she_said // x minutes
    int n; cin >> n;
    for(int i = 1 ; i <= n; i++) arr[i]  = i ;
    f(n);
    for(int i = 1 ; i <= n; i++) cout << arr[i] << ' ' ;
}
 
