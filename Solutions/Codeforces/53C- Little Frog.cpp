#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>> n;
 
    int l = 1;
    int r = n;
    while ( l < r)
    {
        cout << l << " " << r << " " ;
        l++; r--;
    }
    if(n%2 == 1) cout << l ;
 
}
