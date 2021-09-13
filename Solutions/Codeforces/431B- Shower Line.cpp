#include <bits/stdc++.h>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define ll long long 
#define ull unsigned long long int
#define thats_what_she_said int main(){ ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int grid[9][9];
thats_what_she_said // 160  minutes 
    int mx = -1;
    for(int i = 0 ; i < 5; i++)
        for(int j = 0 ; j < 5; j++)
            cin >> grid [i][j];
 
    int s[5] = {0,1,2,3,4};
    do{
        int cur = 0;
        cur += grid[s[0]][s[1]] + grid[s[1]][s[0]];
        cur += grid[s[2]][s[3]] + grid[s[3]][s[2]];
        
        cur += grid[s[1]][s[2]] + grid[s[2]][s[1]];
        cur += grid[s[3]][s[4]] + grid[s[4]][s[3]];
 
        cur += grid[s[2]][s[3]] + grid[s[3]][s[2]];
 
        cur += grid[s[3]][s[4]] + grid[s[4]][s[3]];
 
 
        mx = max(mx,cur);
 
 
 
 
        //cout << "S: " << s << endl;
 
        //for( int j = 0  ; j < 5 ; j++){
            //cout << " + (";
            //for(int i = j ; i <  5 ; i+=2){
               // cout << s[i] <<" is talking to ";
                //cout << "i: " << i <<endl;
                //cur += grid[s[i]-'0' -1 ][s[i]-'0']; 
                //cur += grid[s[i]-'0'][s[i]-'0' -1];
                //cout << "g"<<s[i]-'0'-1<< s[i]-'0' <<" + g";
                //cout << s[i]-'0'<<s[i]-'0' -1 << ' ' ;
                //cout << "grid[i][i+1]: " << grid[s[i-1]-'0'][s[i-1]-'0'+1] << endl; 
                
               // if(i <= 3){
               // cur += grid[s[i-1]-'0'+1][s[i-1]-'0'];
                //cout << "grid[i+1][i]: " <<grid[s[i-1]-'0'+1][s[i-1]-'0'] << endl; 
                //cout << s[i+1] << endl;
                //}else{
                 //   cout << "NOBODY" << endl;
               // }
            //}
            //cout << ") ";
            //cout << s[j] << " got in shower" << endl;
        //}
        //cout << " = " << cur << endl;
        //cout << "------------------------------" endl;
    }while(next_permutation(s,s+5));
    
    cout << mx << endl;
 
}
 
