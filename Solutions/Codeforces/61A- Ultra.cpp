#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
 
int main(){
 string s1,s2;
 cin >> s1 >> s2;
 int ch;
 for(int i = 0 ; i < s2.size() ; i++){
 ch = (s1[i] -'0')^(s2[i] - '0');
 cout << ch ;
 }
 
 
 
 
}
