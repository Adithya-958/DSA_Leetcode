class Solution {
public:
    bool isAnagram(string s1, string s2) {
        int freq[26], count = 0;
        bool flag = true;
        int n = s1.length(), m = s2.length();
        if(n!=m)    return false;
        for(int i = 0; i < n; i++){
            freq[s1[i] - 'a'] ++;
        }
        for(int i = 0; i < m; i++){
            freq[s2[i] - 'a'] --;
        }
        for(int i = 0; i < n; i++){
            count += freq[s1[i] - 'a'];
            if(count!=0){
                flag = false;
            }
        }
    return flag;
    }
};
//     if(s1.length() != s2.length()) return false;
//     unordered_map<int,int>mp;
//     bool flag = true;
//     int n = s1.length();
//     int x = s2.length();
//     for(int i = 0; i < n; i++){
//         mp[s1[i]]++;
//     }
//     for(int i = 0; i < x; i++){
//         if(mp.find(s2[i]) == mp.end()|| mp[s2[i]] == 0){
//             flag = false;
//             }
//         mp[s2[i]]--;
//     }