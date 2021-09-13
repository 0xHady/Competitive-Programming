#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
thats_what_she_said // x minutes 
    int t,sx,sy,ex,ey; cin >> t >> sx >> sy >> ex >> ey; 
    int xdist , ydist;
    char xdir, ydir;
    xdist  = abs(max(ex,sx)-min(ex,sx));
    ydist  = abs(max(ey,sy)-min(ey,sy));
    if(ex >= sx) xdir = 'E'; else xdir = 'W';
    if(ey >= sy) ydir = 'N'; else ydir = 'S';
    //cout << "xdist " << xdist << " to " << xdir << endl; 
    //cout << "ydist " << ydist << " to " << ydir << endl; 
 
    for(int i = 1 ; i <= t ; i++){
        char c; cin >> c;
        if(c == xdir)xdist--;
        else if(c == ydir)ydist--;
 
        if(xdist <= 0 && ydist <= 0){
            cout << i ;
            return 0;
        }
    }
    cout << -1 ;
}
 
