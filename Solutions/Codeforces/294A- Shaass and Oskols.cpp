#include <iostream> 
#include <cmath>
#include <algorithm> 
#include <string> 
using namespace std;
 
int main(){
 
    int n_wires;
    cin>>n_wires;
 
    int wires[n_wires];
    for(int i = 0; i< n_wires ; i++)
        cin>>wires[i];
 
    int n_dead;
    cin>>n_dead;
 
    int plcs_dead[n_dead][2];
    for(int i = 0 ; i < n_dead ; i++)
        for(int j = 0 ; j < 2 ; j++)
            cin>>plcs_dead[i][j];
 
 
    int w = 0;
    int bnum = 0;
    for(int i = 0 ; i < n_dead ; i++)
    {
        w = plcs_dead[i][0] -1 ;
        bnum = plcs_dead[i][1];
 
        if ( w >= 0 )
            wires[w -1 ] += bnum -1;
 
        if( w  < n_wires)
            wires[w+1] += (wires[w]-bnum);
 
        wires[w] = 0;       
    }
 
    for(int i = 0; i< n_wires ; i++)
        cout<<wires[i]<<" ";
 
} 
