#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n,k; cin >> n >> k;
    int mins= 240-k;
    int sum = 0 ;
    int res = 0;
    for(int i = 1 ;i <= n ; i++){
        if(sum+ (5*i) > mins) break;
        else {
            sum+= (5*i);
            res++;
        }
    }
    cout << res << endl;
 
    return 0;
}
