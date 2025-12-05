class Solution {
public:
    int countPartitions(vector<int>& a) {
        int res = 0;
        int n = a.size();
        if(n == 2){
            if((a[0]%2 != 0 && a[1]%2 == 0)||((a[0]%2 == 0 && a[1]%2 != 0))){
                return res;
            }
            else return res+1;
        }
        int total = 0;
        for(auto& i:a){
            total += i;
        }
        return ((total%2 == 0)?n-1:0);
        // int sum1 = 0, sum2 = 0;
        // for(int i = 0; i < n -1; i++){
        //     sum1 += a[i];
        //     printf("%d is for %d iteration\n",sum1, i);
        //     for(int j = i+1; j < n; j++){
        //         sum2+=a[j];
        //         printf("%d is for %d iteration",sum2, j);
        //     }
        //     if((sum2-sum1)%2 == 0)  res++;
        //     sum2 = 0;
        // }
        return res;
    }
};