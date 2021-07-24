#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    string pages[n];
    string res = s;
    bool first = 1; 
    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
        string startsWith = pages[i].substr(0, s.size());
        if (startsWith == s && first){
            res = pages[i];
            first = 0 ;
 
        }
 
        if (startsWith == s && pages[i] < res)
            res = pages[i];
    }
 
    cout << res << endl;
}
