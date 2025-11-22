class Solution {
public:
    int minimumOperations(vector<int>& a) {
        int count = 0, n = a.size();
        for(int  i =0; i < n; i++){
            if(a[i]%3 == 0){
                count++;
            }
        }
        if(count == n){
            return 0;
        }int ops = 0;
        for(int i =0; i < n; i++){
            if(a[i]%3 == 1){
                ops++; //remove 1
            }
            else if(a[i]%3 == 2){
                ops++;
            }
            else{
                continue;
            }
        }return ops;
    }
};