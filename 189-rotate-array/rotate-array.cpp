class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int n = a.size();

        k = k%n;
        if(k == 0)  return;
        vector<int> res(n);
        int j = 0;
        for(int i = n-k; i < n; i++){
            res[j] = a[i];cout<<res[i];
j++;
        }
        //cout<<"K is"<<k<<"   j is "<<j;
        for(int i = 0; i < n-k; i++){
            res[j] = a[i];cout<<res[i];
        j++;
        }

        for(int i = 0; i < n; i++){
            
            a[i] = res[i];
        }
    }
};
// [1,2,1] k = 4