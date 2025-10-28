class Solution {
public:
    bool check(vector<int>& nums,int i,int dir,int n){
        int curr = i;
        int count = 0;
        vector<int>temp = nums;
        for(int i =0 ; i < n; i++){
            if(nums[i] != 0)
                count++;
        }
        while( curr >= 0 && curr < n && count > 0){
            if(temp[curr] > 0){
                temp[curr]--;
                dir *= -1;
                if(temp[curr] == 0){
                    count--;
                }
            }
            curr += dir;
        }
        return count == 0;
    }
    int countValidSelections(vector<int>& a) {
        int n = a.size();
        int count;

        int dir = 1,ans =0;
        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                if(check(a,i,1,n)){printf("1");
                    ans++;
                    }
                if(check(a,i,-1,n)){printf("1");
                    ans++;
                    }
            }
        }return ans;
    }
};