#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int trunc(string &x){
 int i = 0  ;
 bool found = false;
 for(i; i < x.size();i++){ 
  if(x[i] == '.'){
  found = true;
  break;
  }
 }
 if(found)
 if(i+3 < x.size())
 x.erase(i+3);
 
 if(found)
 return i;
 else
 return -1;
}
 
int main(){
 thats_what_she_said
 string num; cin >> num;
 //the sign
 bool negative = (num[0] == '-' );
 if(negative) num.erase(0,1);
 //the preceision
 int dot = trunc(num);
 
 deque <char> dq; 
 //string a = "" , b = "" ;
 dq.push_back('.');
 char a = '0' , b ='0';
 
 if(dot !=-1){
 if(dot+1 < num.size())
 a  = num[dot+1];
 if(dot+2 < num.size())
 b  = num[dot+2];
 }
 dq.push_back(a);
 dq.push_back(b);
 
 int c = 1; 
 int i;
 if(dot!=-1) i = dot-1;
 else i = num.size()-1;
 
 for( i; i >= 0; i--){
  dq.push_front(num[i]);
  if(c == 3 && i != 0){
   dq.push_front(',');
   c=0;
  } 
 c++;
 }
 dq.push_front('$');
 if(negative){
 dq.push_front('(');
 dq.push_back(')');
 }
 
 
 for(auto it:dq) cout << it ;
 
}
