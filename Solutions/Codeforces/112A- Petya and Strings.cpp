#include <iostream>
#include <string>
using namespace std;
 
int main(){
   
   string f,s;
   cin>>f>>s;
   int t = 0;
   for(int i = 0; i < f.length(); i++)
   {
       if(tolower(f[i]) < tolower(s[i]))
       {
           t=-1;
           break;
       }
       if(tolower(f[i]) > tolower(s[i]))
       {
           t=1;
           break;
       }
   }
   cout<<t<<endl;
   return 0;
}
