#include <iostream>
using namespace std;
int main()
{
 
  int n , ans= 0;
  cin>>n;
 
 
 
  for(int i =0 ; i < n ;i++)
  {
      int x , y ,z ;
      cin>>x>>y>>z;
      ans+= ((x+y+z)>= 2);
      
  }
 
  cout<<ans<<endl;
 
 
  return 0;
  
}
