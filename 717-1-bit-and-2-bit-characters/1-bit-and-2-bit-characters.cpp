class Solution {
public:
    bool isOneBitCharacter(vector<int>& a) {
        int n = a.size();
        int i = 0;
        while(i<n-1){
            if(a[i] == 0){
                i += 1;
            }
            if(a[i] == 1){
                i += 2;
            }
        }return i==n-1;
    }
};