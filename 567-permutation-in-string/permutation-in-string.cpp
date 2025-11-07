class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // int n = s1.length(),m = s2.length();
        // if(n>m) return false;
        // int freq[26] = {0};
        // bool flag = true;
        // for(int i = 0; i < n; i++){
        //     freq[s1[i]-'a'] += 1;
        //     freq[s2[i]-'a'] -= 1;
        // }
        // for(int j = 0; j < 26; j++){
        //     if(freq[j] != 0)   
        //         flag = false;
        // }
        // if(flag)    return true;
        // for(int i = n; i < m; i++){
        //     flag = true;
        //     freq[s2[i-n]-'a'] += 1;
        //     freq[s2[i]-'a'] -= 1;
        //     printf("1");
        //     for(int j = 0; j < 26; j++){
        //         if(freq[j] != 0){
        //             flag = false;
                    
        //             }
        //     }
        //     if(flag) return true;
        // }
        // return flag;
        int l1 = s1.size();
        int l2 = s2.size();
        if (l1 > l2 ) return false;
        vector<int> p1(26,0);vector<int> p2(26,0);
        for(int i = 0; i< l1;i++) {
            p1[s1[i]-'a']++;
            p2[s2[i]-'a']++;
        }
        if (p1==p2) return true;
        int i = 0;
        for(int j = l1; j < l2; j++) {
            p2[s2[i]-'a']--;
            p2[s2[j]-'a']++;
            i++;
            if (p1==p2)return true;
        }
       
        return false;
    }
};