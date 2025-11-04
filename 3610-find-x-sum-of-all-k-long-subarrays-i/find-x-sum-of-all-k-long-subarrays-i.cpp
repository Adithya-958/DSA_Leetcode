class Solution {
public:
    typedef pair<int, int> p;
    vector<int> findXSum(vector<int>& a, int k, int x) {
        int n = a.size();
        vector<int> res(n - k + 1);
        
        for(int i = 0; i < n - k + 1; i++) {
            unordered_map<int, int> freq;
            // Min-heap to store (frequency, value) pairs with custom comparator
      
            priority_queue<p, vector<p>, greater<p>> pq;
            
            // Count frequencies in current window
            for(int j = i; j <= i + k - 1; j++) {
                freq[a[j]]++;
            }
            
            // Push (frequency, value) pairs to min-heap
            for(auto& it : freq) {
                pq.push({it.second, it.first});  // (frequency, value)
                if(pq.size() > x) {
                    pq.pop();  // Remove the smallest (by frequency, then by value)
                }
            }
            
            // Calculate sum of all occurrences of top x frequent elements
            int sum = 0;
            while(!pq.empty()) {
                auto top = pq.top();
                pq.pop();
                sum += top.first * top.second;  // frequency * value
            }
            res[i] = sum;
        }
        return res;
    }
};