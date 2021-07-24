#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main(){
 
    int arr[4];
    for(int i =0 ; i <4 ; i++)
        cin>>arr[i];
 
    string s;
    cin>>s;
 
    int cal = 0;
 
    for(int i =0 ; i< s.size() ; i++)
    {
        switch (s[i])
        {
        case '1':
            cal+=arr[0];
            break;            
        case '2':
            cal+=arr[1];
            break;
        case '3':
            cal+=arr[2];
            break;
        case '4':
            cal+=arr[3];
            break;
        default :
            cout<<"A7A"<<endl;
        }
    }
    cout<<cal<<endl;
    
}
