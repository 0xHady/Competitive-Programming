#include <iostream>
#include <cmath>
using namespace std;
//mobo babe
 
int main()
{
 int a,b,t; cin >>t;
 while(t--){
  cin >> a >> b;
  cout << (int)ceil((double)abs(a-b)/10)<<endl;
 }
}
