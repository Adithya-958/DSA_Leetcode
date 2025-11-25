class Solution {
public:
int genreateklen(int k){
    int n = 0;
    while(k > 0){
        k--;
        n = n * 10 + 1;
    }
    return n;
}
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0) {
            return -1;
        }
        int remainder = 0;
        for (int length = 1; length <= k; length++) {
            remainder = (remainder * 10 + 1);
            remainder %= k;
            if (remainder == 0) return length;
        }
        return -1;
    }
};