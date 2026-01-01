class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        int x = 0, k = 0;
        for(int i = 0; i < n; i++){
            if(i < n-2 && a[i] == a[i+2]){
                continue;
            }
            else{
                a[k++] = a[i];
            }
        }
        return k;
    }
};