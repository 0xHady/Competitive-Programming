#include <iostream>
#include <string>
using namespace std;
 
int main(){
 
    string s;
    cin>>s;
    int small = 0 , capital = 0;
 
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] >= 65 && s[i] <=90)
            capital++;
        else
            small++;
    }
 
    if (small >= capital)
        for(int i = 0 ; i < s.size() ; i++)
            putchar(tolower(s[i]));    
    else
        for(int i = 0 ; i < s.size() ; i++)
            putchar(toupper(s[i]));    
 
    
}
