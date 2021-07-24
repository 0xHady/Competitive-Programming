#include <iostream> 
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(){
    
    string s1 , s2 = "";
    getline(cin,s1);
    for(int i =0 ; i <s1.size() ; i++)
    {
 
        if((int)s1[i] >=97 && (int)s1[i] <= 122)
        {
            s2+=s1[i];
        }
    }
    if(s2 == "")
    {
        cout<<0;
        return 0;
    }
    sort(s2.begin(), s2.end());
    int c = 0;
    for(int i = 0 ; i < s2.size()-1 ; i++)
    {
        if( i == s2.size()-1 && s2[i] != s2[i+1])
            c+=2;
 
        else if(i == s2.size()-1 && s2[i] == s2[i+1])
            c++;
 
        else if (s2[i] != s2[i+1])
            c++;
 
    }
    cout<<c+1<<endl;
}
