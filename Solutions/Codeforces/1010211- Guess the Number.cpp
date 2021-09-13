#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x  minutes 
   int l = 1, r = 1000000, mid;
   while(l != r  ){
       mid = (l + r +1  ) / 2;
       cout << mid << endl;
       cout << flush;
       string response; cin >> response;
       if(response == ">="){
           l  = mid;
       }else{
           r = mid - 1;
       }
       //cout << "lo: " << l << endl << "hi: " << r << endl;
   } 
   cout << "! " << l << endl;
   cout << flush;
}
