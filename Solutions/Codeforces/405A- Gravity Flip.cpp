#include <iostream>
using namespace std;
 
int main(){
    int c;
    cin>>c;
    int arr[c];
    for(int i = 0 ; i < c ; i++)
        cin>>arr[i];
 
    for(int i =0; i < c ; i++)
    {
        for(int k = i+1; k < c ; k++)
        {
            int temp;
            if(arr[i] > arr[k])
            {
                temp = arr[i];
                arr[i]= arr[k];
                arr[k] = temp;
            }
        }
    }
 
    for(int i =0; i < c ; i++)
        cout<<arr[i]<<" ";
}
