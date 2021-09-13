#include <bits/stdc++.h>
#include <string>
using ll = long long ;
using ull = unsigned long long ;
 
#define Hello_World ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define letMeIn freopen ("in.txt","r",stdin);// freopen ("out.txt","w",stdout);
#define USACO(x) freopen (x".in","r",stdin); freopen (x".out","w",stdout);
#define yup puts("YES");
#define nope puts("NO");
#define F first
#define S second
 
using namespace std;
 
int main() // E
{
    Hello_World
    // letMeIn
    // USACO("mowing")
 
    int n;
    cin>>n;
    // cout<<"n: "<<n<<endl;
 
    string txt= "";
    for(int i = 0 ; i < n ; i++){
        string tmp;
        cin>>tmp;
        txt+=tmp;
        if(i != n-1)
        txt+=" ";
    }
    
    // cin>>txt;
    // getline(cin,txt);
    // cout<<"txt: "<<txt<<endl;
 
    int m;
    cin>>m;
    // cout<<"m: "<<m<<endl;
    
    stack <char> st;
 
    int caps = -1;
    
    for(int i = 0 ; i < m ; i++)
    {
        string key;
        cin>>key;
        if(key == "CapsLock")
            caps*=-1;
        else if(key == "Backspace"){
            if(st.size() != 0 )
            st.pop();
        }
        else if(key == "Space")
            st.push(' ');
        else
        {
            char tmp =  key[0];
            if(caps == 1)
                tmp = toupper(tmp);
            st.push(tmp);            
        }
    }
    string result;
    while(st.size() != 0){
        result += st.top();
        st.pop();
    }
    reverse(result.begin(),result.end());
    // cout<<"stack: "<<result<<endl;
    // cout<<"txt:     "<<txt<<endl;
 
    if(result == txt)
        cout<<"Correct"<<endl;
    else 
        cout<<"Incorrect"<<endl;
    
 
    
    
 
 
}
