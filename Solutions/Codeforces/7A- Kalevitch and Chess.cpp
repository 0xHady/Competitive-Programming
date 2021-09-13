#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
bool grid[8][8];
bool BlackLivesMatter(int x, char v){
    int res = 0;
    if(v == 'r')
        for(int i = 0; i < 8; i++) res+=(grid[x][i]);
    else
        for(int i = 0; i < 8; i++) res+=(grid[i][x]);
    return (res ==  8);
        
}
int main(){ 
 thats_what_she_said
    for(int i = 0 ; i < 8 ; i++){
        for(int j = 0 ; j < 8; j++){
            char t; cin >>t ;
            if(t == 'B') grid[i][j] = 1;
            else grid[i][j] = 0 ;
        }
    }        
    int res =0 ;
    for(int i = 0 ; i < 8 ; i++) res += (BlackLivesMatter(i,'r'));
    if(res < 8)
    for(int i = 0 ; i < 8 ; i++) res += (BlackLivesMatter(i,'c'));
    cout << res << endl;
 
    
}
 
