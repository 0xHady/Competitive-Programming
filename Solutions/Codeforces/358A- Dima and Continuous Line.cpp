#include <iostream>
#include <vector>
#include <math.h>
// mobo babe
using namespace std;
bool both_in(int a, int b, int c, int d){
 if(a>b) swap(a,b);
 if(c>d) swap(c,d);
 return ( a>= c && a<=d && b>=c && b<=d);
}
 
bool both_out(int a, int b, int c , int d){
 if(a>b) swap(a,b);
 if(c>d) swap(c,d);
 return ((a>=d && b >= d)||(a <= c && b<=c));
}
 
bool super(int a, int b , int c , int d){
 if(a>b) swap(a,b);
 if(c>d) swap(c,d);
 return (a<=c && b >=d);
}
 
int main()
{
 int n; cin >>n;
 vector <int> v(n);
 for(auto &i:v) cin>>i;
 
 for(int i = 0; i < n-1 ; ++i){
  for(int j = 0; j <i; ++j){
   if(! ((both_in(v[i],v[i+1],v[j],v[j+1]))
     ||  (both_out(v[i],v[i+1],v[j],v[j+1]))
     ||   (super(v[i],v[i+1],v[j],v[j+1]))  ) )
     return cout <<"yes",0;
  }
 }
 
 return cout <<"no",0;
}
