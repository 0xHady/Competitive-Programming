#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
 int r,x,y,xx,yy;
 cin >> r >> x >> y >> xx >> yy;
 cout <<ceil( (sqrt(pow(x-xx,2)+pow(y-yy,2))) / (2*r)); 
 
}
