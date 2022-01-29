#include <bits/stdc++.h>
using namespace std;
main(){
 
int n;
int b;
int d; 
cin>>n>>b>>d;
int a[n];
for ( int i = 0; i<n; i++)
 cin>>a[i];
 
int counter=0;
int waste=0;
for ( int i = 0; i<n; i++)
 {
     if (  a[i]<= b && waste <= d)
         {
            waste+=a[i];
             if (waste > d)
                 {
             counter++;
             waste=0;
                }
         }
         else if ( waste > d)
         {
             counter++;
             waste=0;
         }
 }
 cout<<counter;
 
  
        
  
}
