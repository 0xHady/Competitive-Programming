#include <bits/stdc++.h>
using namespace std;
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
#define lzeros(mask) __builtin_clz(mask) // no of leading zeros
#define tzeros(mask) __builtin_ctz(mask) // no of trailing zeros
string uppercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::toupper); return s;}
string lowercase(string &s) {transform(s.begin(), s.end(), s.begin(), ::tolower); return s;}
#define endl "\n"
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
thats_what_she_said // x  minutes 
    int T = 1;
    cin >> T;
    while(T--)
    {
        int n; cin >> n;
        char arr[n];
        bool allq = 1;
        for(int i = 0 ; i < n; i++){
           cin >> arr[i]; 
           if(arr[i] != '?') allq =0;
        }
        if(allq){
            char c = 'B';
            for(int i = 0 ; i < n; i++){
                cout << c;
                (c == 'B') ? c = 'R' : c = 'B';
 
            }
            cout << endl;
            continue;
        }
        bool notDone =1 ;
        while(notDone){
            notDone = 0;
            if(arr[0] == 'B' && arr[1] == '?') arr[1] = 'R';
            else if(arr[0] == 'R' && arr[1] == '?') arr[1] = 'B';
 
            for(int i = 1 ; i < n -1 ;i++){
                if(arr[i] == '?'){ notDone = 1; continue;}
                char sup;
                (arr[i] == 'B') ? sup = 'R' : sup = 'B';
                if(arr[i-1] == '?') arr[i-1] = sup;
                if(arr[i+1] == '?') arr[i+1] = sup;
            }
 
            if(arr[n-1] == 'R' && arr[n-2] == '?') arr[n-2] = 'B';
            else if (arr[n-1] == 'B' && arr[n-2] == '?') arr[n-2] = 'R';
        }
        for(int i =0 ; i < n; i++) cout << arr[i];
        cout << endl;
 
    }
}
