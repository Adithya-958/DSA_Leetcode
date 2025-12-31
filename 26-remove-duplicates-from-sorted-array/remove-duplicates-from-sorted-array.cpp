class Solution {
public:
    int removeDuplicates(vector<int>& a) {
    //     int count = 0;
    //     int n = a.size();
    //     for(int i = 1; i < n; i++){
    //             if(a[i-1] != a[i]){
    //                 a[count++] = a[i];
    //             }
    //         }
    // return count;
    // }
        if (a.empty()) return 0;
        int i = 1;
        for (int j = 1; j < a.size(); j++) {
            if (a[j] != a[i - 1]) {
                a[i++] = a[j];
            }
        }
        return i;        
    }
};