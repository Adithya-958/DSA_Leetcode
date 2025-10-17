class Solution {
public:
    bool prime(int n){
        if(n <= 1) return false;
        if(n == 2) return true;
        if(n % 2 == 0) return false;
        for(int i = 3; i * i <= n; i += 2){
            if(n % i == 0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& a) {
        unordered_map<int,int>mp;
        for(int i : a){
            mp[i]++;
        }
        for(auto [val,c] : mp){
            if(prime(c))   return true;
        }
        return false;
    }
};