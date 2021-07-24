#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
 
    string s;
    cin>>s;
    int count = 0;
 
    sort(s.begin(),s.end());
 
    for(int i =0 ; i < s.length()-1 ; i++)
    {
        if(i == s.length()-2 )
        {
            if(s[i] != s[i+1])
                count+=2;
            else
                count++;
                
            break;
        }
        if(s[i] != s[i+1])
            count++;
    }
 
    if(count % 2 != 0)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    
   return 0;
}
