#include <iostream>
using namespace std;
int main()
{
  int n;
  int a=0 ,d = 0;
  cin>>n;
  char arr[n];
  for(int i =0 ;i <n ; i++)
  {
      cin>>arr[i];
      if(arr[i] == 'A')
        a++;
      else
        d++;
  }
    if(a > d)
        cout<<"Anton";
    else if(d > a)
        cout<<"Danik";
    else
        cout<<"Friendship";
 
 
  return 0;
}
