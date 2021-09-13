#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main(){
 thats_what_she_said
 int n; cin >> n;
 int x = 0;
 while(n--){
 string t; cin >> t;
 if(t == "X++" || t == "++X") x++;
 else x--;
 }
 cout << x << endl;
}
