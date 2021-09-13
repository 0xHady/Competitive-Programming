#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define pb push_back
#define F first
#define S second
#define ll long long 
#define ull unsigned long long int
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
const int N = 2e6;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
using namespace std;
char grid[4][4];
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        for(int i = 0 ; i < 4; i++)
            for(int j = 0 ; j < 4; j++)
                cin >> grid[i][j];
 
        for(int i = 0; i < 3 ; i++){
            for(int j  = 0 ; j < 3 ; j++){
             //   cout << "i,j  sum" << i << ',' << j << "   " ;
            int sumb = 0;
                sumb+=(grid[i][j] == '#') + (grid[i+1][j] == '#') + (grid[i][j+1] == '#')+ (grid[i+1][j+1] == '#');
            int suma = 0;
                suma+=(grid[i][j] == '.') + (grid[i+1][j] == '.') + (grid[i][j+1] == '.')+ (grid[i+1][j+1] == '.');
            //    cout << sum << endl;
            if(sumb >= 3 || suma >= 3){cout << "YES"; return 0;}
            }
        }
        cout << "NO";
    }
}
