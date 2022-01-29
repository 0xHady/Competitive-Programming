#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,column;
    cin >> row >> column;
    string all="", right="", left="";
    for(int i = 0 ; i < column-1 ; i++){
        all += "#";
        right+=".";
    }
    left = right;
    right+="#";
    left = "#" + left;
    all +="#";
    bool ball = 1;
    bool bleft = 0;
    for(int i = 0 ; i < row ;i++){
        if(ball){
            cout << all << endl;
        }
        else{
            if(bleft) cout << left << endl;
            else cout << right << endl;
            bleft = !bleft;
        }
        ball = !ball;
    }
}
