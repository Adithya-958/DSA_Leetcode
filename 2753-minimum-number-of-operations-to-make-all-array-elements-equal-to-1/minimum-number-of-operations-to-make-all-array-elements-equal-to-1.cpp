#include <algorithm>
class Solution {
public:

    int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    int minOperations(vector<int>& a) {
        int n = a.size();
        int one;
        one = count(a.begin(),a.end(),1);
        if(one) return n-one;
        int g = 0;
        for(int i = 0; i < n; i++){
            
            g = gcd(g,a[i]);
            cout<<"g vallue:"<<g<<endl;
        }

        if(g > 1)   return -1;
        int minLen = n;
        for(int i = 0; i < n; i++){
            int curr_gcd = 0;
            for(int j = i; j < n; j++){
                curr_gcd = gcd(curr_gcd, a[j]);
                if(curr_gcd == 1){
                    if(j-i+1 < minLen){
                        minLen = j-i+1;
                    }
                    break;
                }
            }
        }return minLen+n-2;
    }
};