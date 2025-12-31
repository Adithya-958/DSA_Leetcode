class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        int i = 0;
        int j = a.size() - 1;
        
        while(i <= j) {
            if(a[i] == val) {
                // Swap with element at j (if it's not val)
                // Or just overwrite
                a[i] = a[j];
                j--;
            } else {
                i++;
            }
        }
        return i;  // i is the new length
    }
};