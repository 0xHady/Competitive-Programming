#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    string m="CARScarsIuVEJxTXsUvOHhngyZKfAYmaqolMNtGQibwdjPrCpekFWzLaySBaPybRMgzYMynYD";
    string e="UnilEPFLvpVZzBNtLSCubWmaocIYneAPqxDshRkMGgJfHrFUQTjXOwdPolyProgisawesomeK";
 
    int t;
    cin>>t;
    string in="", out="";
    for(int i = 0 ; i< t ; i++)
    {
        cin>>in;
        for(int j = 0 ; j< in.length() ; j++)
        {
            for(int k = 0 ; k< m.length() ; k++)
            {
                if(in[j] == m[k])
                {
                    out+=e[k];
                    break;
                }
            }
        }
        cout<<out<<" ";
        out = "";
        
    }
}
