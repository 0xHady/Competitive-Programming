#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // 82 minutes
    int c =0,r = 0,mn = INT_MAX;
    string t; cin >> t;
    for(int i = 1; i <=5 ; i++){
        bool getout = false;
        for(int j = 1; j <= 20; j++){
            if( i*j >= t.size()){
                c = i; r = j;
                getout = true;
                break;
            }
        }
        if(getout)break;
    }
    int asts = (c*r)-t.size();
    //cout << "asts: " << asts << endl; 
    cout << c << ' ' << r << endl;
    int k = 0 ;
 
    for(int i = 0 ; i < c; i++){
        int st;
        if(asts > 0){
            st = ceil(asts/(c-i)); 
        asts -=st;
        }else{
            st =0;
        }
        
        //if(asts < 0) asts = 0;
        for(int j = 0 ; j < r - st ;k++,j++){
           cout <<t[k]; 
        }
        for(int j = 0; j < st ; j++){
            cout << '*';
        }
        cout << endl;
    }
}
 
