#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){
 thats_what_she_said
 int n,k,l,c,d,p,nl,np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 int a = min((k*l)/nl,(c*d));
 int b = min(a,(p/np));
 cout << b/n << endl;
}
