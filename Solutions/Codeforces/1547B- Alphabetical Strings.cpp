#include <iostream>
#include <string>
 
#define Cody_Manga std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
#define endl "\n"
int main() {
    Cody_Manga
    int number;
    std::cin >> number;
    while(number--) {
        int aPos = -1;
        char first = 'a';
        std::string word;
        std::cin >> word;                         // 1 2 3 4 5 6 7 8 9
        for (int i = 0; i < word.length(); i++) { // i h f c b a d e g
            if(word[i] == first) { // a = a
                aPos = i; // aPos = 6
                break;
            }
        }
        if(aPos == -1) {
            std::cout << "NO" << endl;
            continue;
        }
        int prev = 0, post = word.size() -1;
        
        if(aPos - 1 >= 0) prev = aPos - 1;
        
        if(aPos + 1 < word.size()) post = aPos + 1;
 
        bool check = 1;
 
        for (int j = 0; j < word.length() - 1; j++) {
            first++; // b, c
            if(word[prev] != first && word[post] != first) {
                check = 0;
                break;
            }
            if(word[prev] == first) {
              if(prev - 1 >= 0)
                prev--;
            }
            else if(word[post] == first) {
              if(post + 1 < word.size())
                post++;
            }
        }
        if(check == 1) std::cout << "YES" << endl; 
        else std::cout << "NO" << endl;
    }
}
