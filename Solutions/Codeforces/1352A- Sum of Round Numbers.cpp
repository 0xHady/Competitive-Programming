#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
 
int main()
{
 int t; cin >>t;
 while(t--){
  string x; cin >>x;
  vector<int> v;
  for(int i = x.size()-1; i >=0; i--){
   if(x[i] -'0' > 0 && x[i]-'0' <=9){
    int n= (x[i]-'0' )*pow(10,x.size() - i-1);
    v.push_back(n);
   }
  }
  cout <<v.size()<<endl;
  for(int &i:v) cout << i <<' ';
  cout<<endl;
 }
 
}
