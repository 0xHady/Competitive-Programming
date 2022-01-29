#include <iostream>
#include <vector>
 
using namespace std;
bool vis[200];
 
int main()
{
    int n,k; cin >> n >> k;
    k--;
    int mark, res = 0;
    vector <int> v(n);
    for(int i = 0 ; i < n; i++) {
        cin >> v[i];
        if(i == k){
            mark = v[i];
        }
    }
    for(int i = 0 ; i < n; i++){
        if(v[i] >= mark && v[i] > 0)
            res++;
    }
    cout << res << endl;
 
    return 0;
}
