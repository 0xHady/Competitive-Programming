#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";

bitset<10000010> bs; // 10^7 ||  0 -> prime , non-zero -> non-prime
vector <int> primes;
ll sieve_size;

void sieve(ll upperbound){
    sieve_size = upperbound + 1;
    bs.set();  // sets everything to 1
    bs[0] = bs[1] = 0;

    for(ll i = 2; i <= sieve_size; i++){
        if(bs[i]){
            for(ll j = i*i; j<= sieve_size; j+=i)
                bs[j] = 0;
            primes.pb(i);
        }
    }
}

bool isPrime(ll n); // O(1) for n <= sieve_size

int main(){
    sieve(10000000);
    int n = -1;
    while(++n <= 1000) if(bs[n]) cout << n << " is prime" << endl;
    cout << "the last prime number <= 10^7 is : " << primes[primes.size()-1] << endl;


    Time
}


bool isPrime(ll n){ // O(1) for n <= sieve_size
    if(n <= sieve_size) return bs[n];

    for(int i = 0 ; i < (int)primes.size(); i++)
        if(n%primes[i] == 0)
            return false;
    return true;
}// only work for n <= (primes[primes.size()-1])^2

