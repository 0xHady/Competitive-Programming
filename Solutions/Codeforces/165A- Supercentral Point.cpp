#include <bits/stdc++.h>
#define endl "\n"
#define thats_what_she_said ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int g[2200][2200];
bool findup(int x, int y){
 while(x >= 0){
 x--;
 if(g[x][y] == 1) return true;
 }
return false;
}
bool findd(int x, int y){
 while(x <= 2150 ){
 x++;
 if(g[x][y] == 1) return true;
 }
return false;
}
 
bool findr(int x, int y){
 while(y <= 2150 ){
 y++;
 if(g[x][y] == 1) return true;
 }
return false;
}
 
bool findl(int x, int y){
 while(y >= 0){
 y--;
 if(g[x][y] == 1) return true;
 }
return false;
}
 
bool isCentral(int x, int y){
 return (findup(x,y) && findd(x,y) && findr(x,y) && findl(x,y));
}
 
int main(){
 thats_what_she_said
 int n;
 cin >> n;
 int x; 
 int y;
 while(n--){
 cin >> x; 
 cin >> y;
 g[x+1100][y+1100] = 1;
 }
 int res =0;
 for(int i  = 50 ; i < 2150; i++){
  for(int j = 50 ; j < 2150 ; j++){
   if(g[i][j] == 0) continue;
   
   if(isCentral(i,j)) 
    res++;
  }
 
 } 
 cout << res << endl;
 
 
}
