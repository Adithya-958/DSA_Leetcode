class Solution {
public:
    int specialTriplets(vector<int>& a) {
        int MOD = 1e9 + 7;
        unordered_map<int, int> leftmap;
        unordered_map<int, int> rightmap;
        for(int& i : a){
            rightmap[i]++;
            //cout << "Element " << i << " count: " << rightmap[i] << endl;
        }int res = 0;
        for(int& i: a){
            rightmap[i]--;
            int left = leftmap[i*2];
            int right = rightmap[i*2];
            res = (res+(1LL*left*right))%MOD;
            leftmap[i]++;
        }
        return res;
    }
};