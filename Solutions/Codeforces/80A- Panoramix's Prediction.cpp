#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
bool isprime(int n){
for(int i = 2 ; i < n ; i++)
if(n%i == 0) return false;
return true;
 
}
bool solve(int a , int b){
for(int i = a+1 ; i < b ; i++)
if(isprime(i)) return false;
return true;
 
}
int main(){
 int a,b;
 cin >> a >> b;
 bool f  = solve(a,b);
 if(f && isprime(b)) cout << "YES";
 else cout << "NO" ;
 
}
