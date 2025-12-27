class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        if(n==0)    return;
        vector<int>c(m+n);
        int i = 0, j = 0, k = 0;
        while(i<m && j < n){
            if(a[i]<= b[j]){
                c[k++] = a[i];
                i++;
            }
            else{
                c[k++] = b[j];
                j++;
            }
        }
        while(i<m ){
            c[k++] = a[i];
            i++;
        }
        while( j < n){
            c[k++] = b[j];
            j++;
        }
    for (int idx = 0; idx < m + n; idx++) {
        a[idx] = c[idx];
    }
    }
};