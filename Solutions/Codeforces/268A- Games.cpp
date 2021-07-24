#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
    int n;
    cin>>n;
 
    int counter = 0;
 
    int teams[n][2];
 
    for(int i = 0 ; i<n ; i++)
        for(int j = 0 ; j<2 ; j++)
            cin>>teams[i][j];
 
    for(int i = 0 ; i<n ; i++)
        for(int j = 0 ; j<n ; j++)
            if(teams[i][0] == teams[j][1])
                counter++;
                
    cout<<counter<<endl;
 
}
