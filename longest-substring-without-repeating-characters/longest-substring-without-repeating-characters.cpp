class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 ; 
        int r = 0 ;
        int mx = 0;
        int cur = 0;
        map <char,bool> mp;
        
        while(r < s.size()){
            if(!mp[s[r]]){
                mp[s[r]] = true;
                cur++;
                mx = max(mx,cur);
                r++;
            }else{
                mp[s[l]] = false;
                cur--;
                l++;
                
            }
        }
        return mx;
        
    }
};