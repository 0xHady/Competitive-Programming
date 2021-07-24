#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
bool inListt(string query, vector <string>& names){
 for(int i = 0 ; i < names.size() ; i++)
  if(names[i] == query) return true;
return false;
}
 
int main(){
 int n ; cin >> n;
 map <string , int > mp;
 map <int , vector <string> > listt;
 map <string,int> mxScore;
 int mx = -INT_MAX;
 string winner;
 vector <pair < string , int >> records;
 for (int i = 0 ; i < n ; i++){
  string name; int score;
  cin >> name >> score;
  mp[name] += score; 
  if(mp[name] > mxScore[name])
  mxScore[name] = mp[name];
  
  records.push_back({name,score}); 
 
 }
 for(auto it:mp){
  mx = max(it.second,mx);
  listt[it.second].push_back(it.first);
 }
 map <string, int > a7a  ;
 for(int i = 0 ; i < records.size() ; i++){
  if(!inListt( records[i].first, listt[mx] )) continue; 
  a7a[records[i].first] += records[i].second; 
  string curN = records[i].first; int curS = a7a[curN]; 
  if(curS >= mx){cout << curN << endl; return 0 ;}
 
 }
 
 
 
}
