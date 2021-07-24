#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
 
    int n ;
    cin>>n;
    int arr[n];
    
    int sum =0 , count = 0;
 
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(sum < 0)
        {
            count++;
            sum = 0;
        }
        
    }
 
    cout<<count<<endl;
}
