#include <iostream>
#include <vector>
#include <stack>

#define vi vector <int>
#define print_vec(v) for(auto &zkksd:v)cout << zkksd << ' ' ;

using namespace std;

vi next_greater(vi v){
    int n = v.size();
    vector <int> res(n);
    stack <int> st;

    for(int i = n-1 ; i >= 0 ; i--){

        while(st.size() && v[i] > v[st.top()])
            st.pop();

        res[i] = st.empty() ? -1 : v[st.top()];

        st.push(i);
    }
    return res;
}

vi prev_greater(vi v){
    int n = v.size();
    vi res(n);
    stack <int> st;
    
    for(int i = 0 ; i < n ;i++){ // reverse iterate the next_greater
        while(st.size() && v[i] > v[st.top()])
            st.pop();
        res[i] = st.empty() ? -1 : v[st.top()];
        st.push(i);
    }
    return res;
}

vi next_smaller(vi v){
    int n = v.size();
    vi res(n);
    stack <int> st;
    
    for(int i= n-1; i >= 0 ; i--){ 
        while(st.size() && v[i] < v[st.top()])// reverse the condition of next_greater
            st.pop();
        res[i] = st.empty() ? -1 : v[st.top()];
        st.push(i);
    }
    return res;
}

vi prev_smaller(vi v){
    int n = v.size();
    vi res(n);
    stack <int> st;

    for(int i = 0;i < n; i++){// reverse iterate the next_greater
        while(st.size() && v[i] < v[st.top()])// reverse the contition of next_greater
            st.pop();
        res[i] = st.empty() ? -1 : v[st.top()];
        st.push(i);
    }
    return res;
}

void next_and_pre_greater_one_loop(vi v);

int main(){
    vector <int> v = {2,3,1,5,4};
    cout << "next_greater" << endl;
    print_vec(v); cout << endl;
    print_vec(next_greater(v));
    cout <<"\n\n";

    cout << "prev_greater" << endl;
    print_vec(v); cout << endl;
    print_vec(prev_greater(v));
    cout <<"\n\n";

    cout << "next_smaller" << endl;
    print_vec(v); cout << endl;
    print_vec(next_smaller(v));
    cout <<"\n\n";

    cout << "prev_smaller" << endl;
    print_vec(v); cout << endl;
    print_vec(prev_smaller(v));
    cout <<"\n\n";

    next_and_pre_greater_one_loop(v);
}

void next_and_pre_greater_one_loop(vi v){
    int n = v.size();
    vi prev_greater_vec(n,-1);
    vi next_greater_vec(n,-1);
    stack <int> st;

    for(int i= 0 ;i < n ; i++){
        while(st.size() && v[i] > v[st.top()]){
            //                  ^
            //                  |-> make it >= to switch the equal vectors
            next_greater_vec[st.top()] = v[i];
            st.pop();
        }
        // actuarlly prev_greater_EQUAL_vec (cuz of line 105)
        prev_greater_vec[i] = st.empty() ? -1 : v[st.top()];
        st.push(i);
    }

    cout << "prev_greater_vec" << endl;
    print_vec(v); cout << endl;
    print_vec(prev_greater_vec); cout << endl;

    cout << "next_greater_vec" << endl;
    print_vec(v); cout << endl;
    print_vec(next_greater_vec); cout << endl;
}
// https://youtu.be/dtiBmmIPR0E
