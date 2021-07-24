#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
    int n;
    cin>>n;
    int arr[n];
    int sir =0 , dim = 0;
 
    for(int i = 0 ; i< n ; i++)
        cin>>arr[i];
 
    ///******************///
 
    int left = 0;
    int right = n-1;
 
    ///*****************///
 
    bool s_role =  1;
 
    ///****************///
 
    while(left <= right )
    {
        if(arr[left] >= arr[right])
        {
            if(s_role == 1)
            {
                sir+= arr[left];
                s_role =  0;
            }
            else
            {
                dim+=arr[left];
                s_role =  1;
            }
            left++;
            
        }
        else
        {
            if(s_role == 1)
            {
                sir+= arr[right];
                s_role =  0;
            }
            else
            {
                dim+=arr[right];
                s_role =  1;
            }
            right--;
        }
    }
    
    ///****************///
 
    cout<<sir<<" "<<dim<<endl;
 
}
