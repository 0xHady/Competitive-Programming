#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes 
    int n , m; cin >> n >> m;
    char arr[n][m];
    char color ;
    for(int i = 0 ; i < n ; i++){
        color = (i%2 == 0) ? 'B' : 'W' ; 
        for(int j  = 0 ; j < m ; j++){
            cin >> arr[i][j];
            if(arr[i][j] == '-'){
            if(color == 'B') color = 'W'; else color = 'B';
                continue;
            }
            else arr[i][j] = color;
            if(color == 'B') color = 'W'; else color = 'B';
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j  = 0 ; j < m ; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
 
    
}
 
