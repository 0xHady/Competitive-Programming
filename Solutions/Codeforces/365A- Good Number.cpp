#include <iostream>
using namespace std;
 
int main() {
 int n, x, k, r = 0;
 cin >> n >> k;
 for (int i = 0; i < n; i++)
 {
  cin >> x;
  bool kgood = true, nums[] = { false,false,false,false,false,false,false,false,false,false };
  for (;x != 0; x /= 10) {
   nums[x % 10] = true;
  }
  for (int j = 0; j <= k; j++)
  {
   if (!nums[j])
   {
    kgood = false;
   }
  }
  r += kgood ? 1 : 0;
 }
 cout << r;
}
