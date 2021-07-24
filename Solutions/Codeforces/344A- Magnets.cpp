#include <iostream>
#include <string>
using namespace std;
 
int main(){
 
    int n;
    cin>>n;
    int count = 0;
 
    int arr[n];
    for(int i =0 ; i< n ; i++ )
        cin>>arr[i];
 
    if(n == 1)
        cout<<1;
    else {
    
    for(int i =0 ; i< n-1 ; i++ )
        {
        if(i == n-2)
        {
            if(arr[i] != arr[i+1])
                count+=2;
            else
                count++;
        }
        else if(arr[i] != arr[i+1])
            count++;
        }
        cout<<count<<endl;
    }
}
