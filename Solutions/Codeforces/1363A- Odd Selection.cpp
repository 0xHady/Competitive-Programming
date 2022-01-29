#include <iostream>
#include <vector>
#include <math.h>
// mobo babe
using namespace std;
 
int main()
{
 int t ; cin>> t ;
 while(t--){
  int n , x; cin  >> n >>x;
  int arr[2]{};
  while(n--){
   int tmp; cin>> tmp;
   arr[tmp%2]++;
  }
  bool f = 0;
  for(int i = 1; i <=min(x, arr[1]) ; i+=2){
   if(arr[0] >= x - i){
    f = 1;
    break;
   }
  }
  if (f) cout << "Yes" <<endl;
  else cout << "No" <<endl;
  
 }
}
