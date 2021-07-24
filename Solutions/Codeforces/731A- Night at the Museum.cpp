#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    char a = 'a';
    int d = 0;
    for(int i =0 ; i< s.size() ; i++)
    {
        d+= min( abs( (int)a - (int)s[i] ) , 26 - abs( (int)a - (int)s[i] ) );
        a=s[i];
    }   
    cout<<d; 
 
}
