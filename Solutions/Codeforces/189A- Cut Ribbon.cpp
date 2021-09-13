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
thats_what_she_said // x  minutes 
    int T = 1;
    //cin >> T;
    while(T--)
    {
        int n,a,b,c,mx = -1;
        cin>>n>>a>>b>>c;
        for(int i = 0 ; i <= n ; i++){
            for(int j = 0 ; j  <= n ; j++)
                { //int m = (n - ((a*i)+(j*b)));
 
                 int left = (n - ((a*i)+(j*b)));
                 //cout << "left: " << left << endl;
                  if(i*a + j*b + left  == n && left%c == 0&& left >= 0){
                  //    cout << "sum: " <<  i*a + j*b + left << endl;
                   //   cout << "i,j,k: " <<i<< " " << j<< ' ' << left/c << endl; 
                left%c ? mx = mx : mx = max(mx,i+j+(left/c));
                  }
                    //mx = max(mx,i+j+(k/c));}
                    
              //  int left = n  - ((i*a)+ (j * b));
                //left%c ? mx = mx : mx = max(mx,i+j+(left/c));
                }
        }
 
        cout << mx ;
    }
}
 
 
 
/* idk why the fuck i did this
   if     (a*2 == q.front()){q.pb(a);q.pb(a);}
   else if(b*2 == q.front()){q.pb(b);q.pb(b);}
   else if(c*2 == q.front()){q.pb(c);q.pb(c);}
   else if(a+b == q.front()){q.pb(a);q.pb(b);}
   else if(a+c == q.front()){q.pb(a);q.pb(c);}
   else if(b+c == q.front()){q.pb(b);q.pb(c);} 
*/
 
/*
 *
        
        queue <int> q;
        int n,arr[3];
        cin >> n >> arr[0]  >>arr[1] >> arr[2];
        sort(arr, arr+3);
        q.push(n);
        int cnt = 0;
        while(!q.empty()){
            bool b = 0;
            for(int i = 0 ; i < 3 ; i++){
                b = 0;
                for(int j = 0 ;  j < 3 ; j++){
                    //cout << "qsize: " << q.size() << endl;
                    if(arr[i] + arr[j] == q.front()){
                        b = 1;
                        q.pop();
                        q.push(arr[i]); 
                        q.push(arr[j]);
                        break;
                    }
                }
                if(b) break;
            }
            if(!b){ q.pop(); cnt++;}
        }
        cout << cnt;
 
 * 
 */
