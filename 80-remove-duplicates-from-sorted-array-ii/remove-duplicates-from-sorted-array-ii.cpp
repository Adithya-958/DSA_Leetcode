class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        int x = 0, k = 0;
        for(int i = 0; i < n; i++){
            int count = 0;
            
            for(int j = i+1; j < n; j++){
                if(a[i] == a[j]){
                    count++;
                }
                else break;
            }
            a[k++] = a[i];
            if(count >= 1){
                a[k++] = a[i];
            }
            i += count;
        }return k;
    }
};