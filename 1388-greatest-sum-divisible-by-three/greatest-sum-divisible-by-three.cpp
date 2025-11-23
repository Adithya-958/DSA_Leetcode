// class Solution {
// public:
//     int func(int ind, int sum, vector<int>&a){
//             int max_sum = 0;
//             if(ind == a.size()){
//                 if(sum%3 == 0 ){
//                     return sum;
//                 }
//                 else return 0;
//             }
//             int take_sum = func(ind+1,sum+a[ind],a);
//             int not_take_sum = func(ind+1,sum,a);
//             return max(take_sum,not_take_sum);
//     }
//     int maxSumDivThree(vector<int>& a) {
//         int ind,sum;
//         vector<int>ds;
//         int res = func(0,0, a);
//         return res;
//     }
// };
class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp(3, INT_MIN);
        dp[0] = 0;
        
        for (int x : nums) {
            vector<int> temp = dp;
            for (int r = 0; r < 3; r++) {
                int newR = (r + x % 3) % 3;
                temp[newR] = max(temp[newR], dp[r] + x);
            }
            dp = temp;
        }
        
        return dp[0];
    }
};