#include <iostream> 
#include <string>
#include <stdio.h>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(){
    
    
    int n , k ;
    cin>>n>>k;
 
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string pass = "";
 
    for(int i =0 ; i < n ; i++)
        pass+= alpha[i%k];
    cout<<pass;
 
}
