#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){
    int n; cin >> n;
for(int line = 0; line < n +1; line++){
    for(int i = 0 ; i < (2*n) -(2*line); i++) cout <<' ';
    cout<< "0";
    if(line == 0){cout << endl; continue;}
    cout  << " ";
    for(int i = 0 ; i < line ; i++) cout << i+1 << " ";
    for(int i = line - 1 ; i > 0 ; i--) cout << i << " ";
    cout << '0' << endl; 
}
 
for(int line = 1; line <= n ; line++){
    for(int i = 0 ; i < 2*line; i++) cout <<' ';
    cout << "0";
    if(line == n) {cout << endl; continue;}
    cout << " ";
    for(int i = 1 ; i <= n-line ; i++) cout << i << ' ' ;
    for(int i =  n - line -1; i > 0; i--) cout << i << ' ';
    cout << '0' << endl;
}
 
}
