#include <bits/stdc++.h>
using ll = long long ;
using ull = unsigned long long ;
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin);// freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define yup puts("YES");
#define nope puts("NO");
 
using namespace std;
 
struct rec{
    ll x1,y1,x2,y2;
 
    ll width(){return x2 - x1 ;}
    ll hight(){return y2 - y1 ;}
    ll area() {return abs(x2-x1) * abs(y2-y1);}
};
 
 
ll inerSeko(rec a, rec b){
    ll x =  max((ll)0,min(a.x2,b.x2)-max(a.x1,b.x1));
    ll y =  max((ll)0,min(a.y2,b.y2)-max(a.y1,b.y1));
    return x*y;
    
}
 
rec interRec(rec a, rec b){
    rec res;
    res.x1 = max(a.x1,b.x1);
    res.y1 = max(a.y1,b.y1);    
    res.x2 = min(a.x2,b.x2);
    res.y2 = min(a.y2,b.y2);
 
    return res; 
}
 
 
int main() 
{
    Hello_World     
    // letMeIn  
    // USACO("billboard")
 
    rec w,b1,b2;
    cin>>w.x1>>w.y1>>w.x2>>w.y2;
    cin>>b1.x1>>b1.y1>>b1.x2>>b1.y2;
    cin>>b2.x1>>b2.y1>>b2.x2>>b2.y2;
    rec wb1,wb2;
    wb1 = interRec(w,b1);
    wb2 = interRec(w,b2);
    
 
    ll inter = inerSeko(w,b1)+ inerSeko(w,b2)-inerSeko(wb1,wb2);
    if(inter >= w.area())
        nope 
    else 
        yup
  
}
 
