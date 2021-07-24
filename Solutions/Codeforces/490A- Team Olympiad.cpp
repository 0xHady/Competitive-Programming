#include <iostream> 
#include <string>
#include <stdio.h>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;
/*
int smlst(int x, int y , int z)
{
    int temp = 6000;
    if(x<temp)
        temp = x;
    if(y<temp)
        temp = y;
    if(z<temp)
        temp = z;
    return temp;
}
*/
int main(){
/*
    int n;
    cin>>n;
    int x[n];
    int s1 = 0 ,s2 = 0 ,s3 = 0 ;
    for(int i = 0; i <n ; i++)
    {
        cin>>x[i];
 
        if(x[i] == 1)
            s1++;
        else if(x[i] == 2)
            s2++;
        else
            s3++;
    }
 
    int mn = smlst(s1,s2,s3);
    cout<<mn<<endl;
 
    int ars1[mn];
    int ars2[mn];
    int ars3[mn];
    int a = 0, b = 0, c = 0;
 
    for(int i =0 ; i < n ; i++)
    {
        if(x[i] == 1)
        {
            ars1[a] = i ;
            a++;
        }
        else if(x[i] == 2)
        {
            ars2[b] = i ;
            b++;
        }
        else
        {
            ars3[c] = i;
            c++;
        }
    }
    for(int i =0 ; i < mn ; i++)
    {
        cout<<ars1[i]<<" "<<ars2[i]<<ars3[i]<<endl;
    }
    
 
 
    for(int i = 0 ; i <mn ; i++)
    {
        for(int j =0 ; j < n ; j++)
        {
            int temp = 1;
            if(temp > 3)
                break;
            if(x[j] == temp)
            {
                cout<<i+1<<" ";
                temp++;
            }
        }
        cout<<endl;
    }
    */
 
   int n;
   cin>>n;
    int arr[n];
 
    for(int i =0 ; i< n ; i++)
    {
        cin>>arr[i];
    }
    int s1 =0 , s2 =0 , s3=0 ;
    int ars1[5000];
    int ars2[5000];
    int ars3[5000];
 
    for( int i =0 ; i< n ; i++)
    {
        if(arr[i] == 1)
        {
            ars1[s1] = i+1;
            s1++;
        }
        else if(arr[i]== 2)
        {
            ars2[s2] = i+1;
            s2++;
        }
        else 
        {
            ars3[s3] = i+1;
            s3++;
        }
    }
 
    int mn = min(min(s1,s2), s3);
    cout<<mn<<endl;
 
    for(int i =0 ; i< mn ; i++)
    {
        cout<<ars1[i]<<" "<<ars2[i]<<" "<<ars3[i]<<endl;
    }
 
 
}
