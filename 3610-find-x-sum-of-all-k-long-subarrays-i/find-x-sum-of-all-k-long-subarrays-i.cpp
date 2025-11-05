class Solution {
public:
typedef pair<int,int>p;
    vector<int> findXSum(vector<int>& a, int k, int x) {
        int n = a.size();
        vector<int>res(n-k+1);
        
        //priority_queue<p, vector<p>, greater<p>> pq;
        
        for(int i = 0; i < n-k+1; i++){
            unordered_map<int, int> freq;
            for(int j = i; j <= i+k-1; j++){
                freq[a[j]]++;
            }
            priority_queue<p, vector<p>, greater<p>> pq;
            for(auto& it : freq) {
                pq.push({it.second, it.first});
                if(pq.size()>x){
                    pq.pop();
                }
            }
            int sum = 0,count = 0;
            while(!pq.empty()){
                auto it = pq.top();
                pq.pop();
                sum += it.first * it.second;
                
            }
            res[i] = sum;
        }
        return res;
    }
};