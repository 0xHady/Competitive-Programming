/**************   بسم الله الرحمن الرحيم   **************/
#include <iostream> 
#include <string>
#include <stdio.h>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <iomanip>
 
#define ll long long 
#define db double
#define srtstring(s) sort(s.begin(), s.end())
 
using namespace std;
 
int main()
{
   ll k  , w , n ;
   cin>>k>>w>>n;
   ll a =0 ;
   for(int i =1  ; i <= n ; i++)
    a+=i;
    a*=k;
    a-=w;
    if(a <= 0)
        a = 0;
    cout<<a;
}
