class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
    unordered_set<int>m1;
    unordered_set<int>m2;
    vector<int> res;
    for (int i = 0; i < a.size(); ++i) {
        m1.insert(a[i]); // Insert elements like 0, 10, 20, 30, 40
    }
    for (int i = 0; i < b.size(); ++i) {
        m2.insert(b[i]); // Insert elements like 0, 10, 20, 30, 40
    }
    int n = max(a.size(),b.size());
    for(int i : m1){
        if(m2.find(i)!=m1.end())
            res.push_back(i);
    }return res;


    }
};