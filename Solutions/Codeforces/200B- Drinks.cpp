#include <iostream>
using namespace std;
 
int main(){
 long double n, s = 0;
 cin >> n;
 for (int i =0 ; i < n ; i++){
  int t; 
  cin >> t;
  s += t;
 }
 
 n*=100;
 cout << s / n * 100;
 
}
