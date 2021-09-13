#include <ios>
#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
    freopen("flat.in","r", stdin);
    freopen("flat.out","w", stdout);
 
    long long total_area = 0, bedrooms_area = 0, num, cost, balacony_area = 0;;
    cin >> num >> cost;
    for (int i = 0; i < num; i++) {
        int n;
        string name;
        cin >> n >> name;
        switch (name[0]) {
            case 'b':
                if (name[1] == 'e') {
                    total_area += n;
                    bedrooms_area += n;
                }
                else {
                    if (name[2] == 'l') {
                        balacony_area += n;
                    }
                    total_area += n;
                }
                break;
            case 'k':
                total_area += n;
                break;
            case 'o':
                total_area += n;
        }
    }
    double price = total_area - 0.5 * balacony_area;
    price *= cost;
 
    cout << total_area << endl << bedrooms_area << endl;
   cout << fixed << setprecision(6) << price << endl;
}
