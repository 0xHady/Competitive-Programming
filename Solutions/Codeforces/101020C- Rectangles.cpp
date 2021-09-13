#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int net[100][100];
    for(int a = 0 ; a <100 ; a++)
        for(int b = 0 ; b <100 ; b++)
            net[a][b] = 0;
    int i , j , k;
    int area = 0;
    int t;
    cin>>t;
    for(int q = 0 ; q < t ; q++)
    {
        int d ;
        cin>>d;
        for(int l= 0; l < d ; l++){
        cin>>i>>j>>k;
        
        for(int a = i ; a <= j-1 ;  a++ )
        {
            for(int b = 0 ; b <= k-1 ; b++)
            {
                net[a][b]=1;
            }
        }
 
        }
        
        for(int a = 0 ; a <100 ; a++)
            for(int b = 0 ; b <100 ; b++)
                area+=net[a][b];
                
        cout<<area<<endl;
        area = 0;
        for(int a = 0 ; a <100 ; a++)
        for(int b = 0 ; b <100 ; b++)
            net[a][b] = 0;
        
        
    }
}
