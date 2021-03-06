#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";

vector <int> divs1; // sorted in non-decrecing order 1 2 3
vector <int> divs2; // sorted in non-ascending order 9 8 4

void fillDivs(int n){
    for(int i = 1 ; i*i <= n ;i++){
        if(!(n%i)){
            divs1.pb(i);
            if(i != (n/i)) // to avoid having duplicates in the vector
                divs2.pb(n/i);
        }
    }
}

// you can export the list into one vector
// and sort it if you can 
// sort takes O(nlog(n)) 
// so, it depends on the constraints

int main(){

    int n ; cin >> n;
    fillDivs(n);
    for(auto &x:divs2) cout << x << ' ';
    for(int i = divs1.size()-1 ; i >= 0 ; i--) cout << divs1[i] << ' ';

    Time
}

/*
 * A number is divisible by 2  if the last digit is 0, 2, 4, 6 or 8.
 * A number is divisible by 3  if the sum of the digits is divisible by 3.	
 * A number is divisible by 4  if the number formed by the last two digits is divisible by 4.	
 * A number is divisible by 5  if the last digit is either 0 or 5.	
 * A number is divisible by 6  if it is divisible by 2 AND it is divisible by 3.
 *
 * 7 check:
 * Double the last digit and subtract it from a number made by the other digits. 
 * The result must be divisible by 7. (We can apply this rule to that answer again)
 * 672 (Double 2 is 4, 67−4=63, and 63÷7=9) Yes

 * A number is divisible by 8  if the number formed by the last three digits is divisible by 8.	
 * A number is divisible by 9  if the sum of the digits is divisible by 9.	
 * A number is divisible by 10  if the last digit is 0.	
 *
 * 11 check:
 * Subtract the last digit from a number made by the other digits.
 * If that number is divisible by 11 then the original number is, too.
 * 1464 − 1 is 1463
 * 146 − 3 is 143
 * 14 − 3 is 11, which is divisible by 11
 * so 14641 is divisible by 11
 * 
 *
 * A number is divisible by 12 if it's divisible by 3 and 4
 */

 /*
 * Divisibility doesn't change by adding zeros (check CF 260-A)
 */

// TODO: Add more numbers (https://divisible.info/DivisibilityRules/Divisibility-Rules.html)
