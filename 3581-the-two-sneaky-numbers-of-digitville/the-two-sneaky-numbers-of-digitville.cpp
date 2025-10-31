class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& a) {
        unordered_map<int,int>mp;
        int n = a.size();
        vector<int> res;
        for(int i = 0; i < n; i++){
            mp[a[i]]++;
        }
        for (auto i : mp){
            cout << i.first << ": " << i.second << '\n';
            if (i.second  == 2)
                res.push_back(i.first);
        }
    return res;
    }
};