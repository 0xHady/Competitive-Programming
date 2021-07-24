#include <iostream> 
#include <string>
#include <stdio.h>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(){
    
    string s;
    string s2 = "";
    cin>>s;
    for(int i =0 ; i <s.size() ; i++)
    {
        if(isdigit(s[i]))
        {
            s2+=s[i];
        }
    }
    sort(s2.begin() , s2.end());
 
    for(int i =0 ; i<s2.size() ; i++)
    {
        if(i == s2.size()-1)
            cout<<s2[s2.size()-1];
        else
        {
            cout<<s2[i]<<"+";
        }
        
    }    
    
    
}
