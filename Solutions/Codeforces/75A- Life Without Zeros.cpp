#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    string a,b;
    cin >> a >> b;
    string aa, bb;
    for (int i = 0 ; i < a.size() ; i++)
        if (a[i] != '0')
            aa += a[i];
    for (int i = 0 ; i < b.size() ; i++)
        if (b[i] != '0')
            bb += b[i];
 
    int ai = stoi(a);
    int bi = stoi(b);
 
    int res = ai + bi ;
    string ress = to_string(res);
    string r = "";
    for (int i = 0 ; i < ress.size() ; i++)
        if (ress[i] != '0')
            r += ress[i];
 
    res = stoi(r);
 
 
 
    int aai = stoi(aa);
    int bbi = stoi(bb);
    //cout<< ai << " " << bi << " " << aai << " " << bbi << endl;
 
    if ( res == aai + bbi) cout<< "YES"<<endl;
    else cout << "NO" << endl;
 
    return 0;
}
