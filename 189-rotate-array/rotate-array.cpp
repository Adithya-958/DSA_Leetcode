class Solution {
public:
    void rev(vector<int>& a, int left, int right){
        while(left < right){
            a[left] = a[left]+a[right];
            a[right] = a[left]-a[right];
            a[left] = a[left] - a[right];
            left++;
            right--;
        }
    }
    void rotate(vector<int>& a, int k) {
        int n = a.size();
        k=k%n;
        if(k==0) return;
        rev(a,0,n-1);
        rev(a,0,k-1);
        rev(a,k,n-1);
    }
};
// [1,2,1] k = 4