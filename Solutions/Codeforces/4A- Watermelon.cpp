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
   int n ;
   cin>>n;
    bool c = 0;
   
   for(int i = 2 ; i <n ; i+=2)
   {
       for(int j = 2 ; j < n ; j+=2)
       {
           if(i + j == n)
           {
                c = 1;
                break;
           }
       }
       if(c == 1)
        break;
   }
   
   
   string s = (c == 1) ? "YES" :"NO";
   cout<<s;
 
   
    
}
