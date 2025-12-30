class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        int i = 0;
        for(int j = 0; j < a.size(); j++){
            if(val != a[j]){
                a[i++] = a[j];
            }
        }
        return i;        
    }
};