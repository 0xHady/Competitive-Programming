#include <bits/stdc++.h>
using namespace std;
int grid[5][5];
void toggle(int i, int j){
 grid[i][j] =  !grid[i][j];
 grid[i+1][j] = !grid[i+1][j];
 grid[i-1][j] = !grid[i-1][j];
 grid[i][j+1] = !grid[i][j+1];
 grid[i][j-1] = !grid[i][j-1];
}
 
 
int main(){
 for(int i = 0 ;i < 5; i++)
  for(int j = 0; j < 5 ; j++)
   grid[i][j] = 1;
 
 for(int i = 1 ; i <=3 ; i++){
  for(int j = 1 ; j <= 3 ; j++){
   int t;
   cin >> t;
   if(t%2 !=0){
   toggle(i,j);
   }
  }
 }
 
 for(int i = 1 ; i <= 3 ; i++){
 for(int j = 1 ; j <= 3 ; j++){
  cout << grid[i][j] ;
 }cout << endl;} 
 
}
