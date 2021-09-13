#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define pb push_back
#define ll long long 
#define ull unsigned long long int
#define nope cout << "NO"<< endl;
#define yup cout << "YES" << endl;
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
using namespace std;
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        int n; cin >> n;
        int a  = 0 ;  int b =0; int c = 0;
        for(int i = 0 ; i < n; i++){
            int t; cin >>t;
            if(t == 25) a++;
            else if(t == 50) b++;
            else c++;
            
            if(t == 50){
                if(a > 0) a--; 
                else{ 
                    cout << "NO"; 
                    return 0;
                }
            }
            else if(t == 100){ 
                if(a > 0 && b > 0 ) {
                    a--;b--;
                }else if(a >= 3){
                    a-=3;
                }
                else{ 
                    cout << "NO"; 
                    return 0;
                }
        }
    }
        cout << "YES";
}
}
