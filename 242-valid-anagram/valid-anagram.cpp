class Solution {
public:
    bool isAnagram(string s1, string s2) {
    if(s1.length() != s2.length()) return false;
    unordered_map<int,int>mp;
    bool flag = true;
    int n = s1.length();
    int x = s2.length();
    for(int i = 0; i < n; i++){
        mp[s1[i]]++;
    }
    for(int i = 0; i < x; i++){
        if(mp.find(s2[i]) == mp.end()|| mp[s2[i]] == 0){
            flag = false;
            }
        mp[s2[i]]--;
    }
    return flag;
    }
};