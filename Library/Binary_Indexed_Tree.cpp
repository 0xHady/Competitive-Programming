#include <bits/stdc++.h>
using namespace std;

struct fenwick{
    vector <int> v;
    int n = 0;

    fenwick(int Size){
        v.resize(Size+1,0);
        n = Size+1;// 1 based index
    }

    void add(int pos,int x){
        ++pos;
        while(pos < n){
            v[pos] += x;
            pos += (pos & (-pos)); //add the last set bit
        }
    }

    long long sum(int pos){// from 1 to pos
        ++pos;
        long long res = 0;
        while(pos > 0){
            res += v[pos];
            pos -= (pos&(-pos));// remove the last set bit
        }
        return res;
    }

    long long sum(int l,int r){
        return sum(r) - sum(l-1);
    }
};

int main(){
    vector <int> v = {1,2,3,4,5,6,7};
    fenwick tree((int)v.size());

    for(int i = 0 ; i < (int)v.size() ; i++) tree.add(i,v[i]);

    cout << "tree.sum(3): " << tree.sum(3) << endl;
    cout << "tree.sum(3,5): " << tree.sum(3,5) << endl;

}
