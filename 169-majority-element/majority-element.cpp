class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n = a.size();
        int count = 0;
        int res = a[0];
        for(int i = 0; i < n; i++){
            if(count == 0){
                res = a[i];
                cout<<res<<" res_is ";
            }
            if(a[i] == res){
                count += 1;
                cout<<count<<" is ";
            }
            else {
                count -= 1;
                cout<<count<<" is ";
            }

        }
        return res;
    }
};