int maximumEnergy(int* a, int n, int k) {
    int dp[n];
    int max = INT_MIN;
    for(int i = n-1; i >= 0; i--){
        int sum;
        if(i+k >= n){
            dp[i] = a[i];
        }
        else if(i+k < n){
            dp[i] = a[i]+dp[i+k];
        }
        if(dp[i] > max){
            max = dp[i];
        }
    }return max;
}