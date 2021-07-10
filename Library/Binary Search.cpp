#include <bits/stdc++.h>

using ll = long long ;
using ull = unsigned long long ;
#define pint  pair<int,int>
#define vint  vector <int> 
#define vpint  vector <pair<int,int>> 

#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin); freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define sortv(v) sort(v.begin(),v.end())
#define revv(v) reverse(v.begin(),v.end())
#define rep(x) for(int xzcv5423 = 0 ; xzcv5423 < x ; xzcv5423++)

#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
#define pb push_back
#define pi 3.14159265359
#define endl "\n"
using namespace std;
void takeintv(vector <int>& v,int size){
    for(int i = 0; i < size ; i++)
        cin>> v[i];
}

void printv(vector <int>& v){
    for(int i = 0; i < v.size() ; i++)
        cout << v[i] << " ";
}

//**************************************************//
const int N = 5e5 + 5;

int a[N] = {55,231,300,544,545,600};

int bs(int lo, int hi,  int target){
    // cout << lo << " " << hi << endl;
    if(lo > hi) return -1;

    int mid = (lo + hi) / 2;
    if(a[mid] == target) 
        return mid;
    else if(target > a[mid]) 
        return bs(mid+1, hi, target);
    else 
        return bs(lo, mid-1, target);
}

int bsIterative(int lo, int hi, int target){
    while(lo <= hi){
        int mid = (lo + hi ) / 2;
            if(a[mid] == target) 
                return mid;
            else if(target > a[mid]) 
                lo = mid + 1;
            else 
                hi = mid - 1;
    }
    return -1;
}

int bsLowerIt(int lo, int hi, int target){ //lower Bound    // first to  >= target
    while (lo < hi){
        int mid = (lo + hi ) / 2;
        if( a[mid] >= target) hi = mid;
        else lo = mid + 1 ;
    }
    return (a[lo] >= target ? lo : -1);

}

int bsUpperIt(int lo, int hi, int target){ // Upper Bound  // first to > target
    while (lo < hi){
        int mid = (lo + hi ) / 2;
        if( a[mid] > target) hi = mid;
        else lo = mid + 1 ;
    }
    return (a[lo] >= target ? lo : -1);

}

int bsSmellerOrEqual(int lo, int hi, int target){
    while (lo < hi){
        int mid = (lo + hi + 1 ) / 2; //#//
        if(a[mid] <= target) lo  =  mid;
        else hi = mid - 1 ;
    }
    return (a[hi] <= target ? hi : -1);
}

ll sum(int x){
    return (x+1) * 1ll * x / 2 ;
}

int bsAnswer(ll target ,int lo = 1, int hi = 2e9 ){
    int mid;
    while(lo <= hi){
        mid = lo + (hi - lo /* for ceiling -->*/ + 1 )/2;  //#//
        if(sum(mid) == target) return mid;
        else if(sum(mid) >  target) hi = mid - 1;
        else lo = mid + 1 ;
    }
    return -1;
}

void test(){
    // int a[N] = {55,231,300,544,545,600};
    cout << bs(0,5,545) << endl;
    cout << bsIterative(0,5,545) << endl;
    cout << bsLowerIt(0,5,545)<< endl;
    cout << bsUpperIt(0,5,545)<< endl;
    cout << bsSmellerOrEqual(0,5,1000)<< endl;
    cout << bsAnswer(2000000000000000000) << endl;
    
}

int main() 
{
    Hello_World
    letMeIn  
}
