#include <iostream>
using namespace std;
 
int main(){
 int k,l,m,n,d;
 cin >> k >> l >> m >> n >> d;
 int res = 0;
 for(int i=1 ; i <=d ; i++){
  if(i%k == 0 || i%l ==0 || i%m == 0 || i%n == 0)
   res++;
 }
 if(res > d) res = d ; 
 cout << res << endl;
 
}
