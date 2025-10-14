bool hasIncreasingSubarrays(int* a, int n, int k) {
    if(n < 2*k) return false;
    for(int i = 0; i < n-2*k+1; i++){
        bool flag1 = 1;
        bool flag2 = 1;
        for(int j = i+1; j < i+k; j++){
                if(a[j] <= a[j-1]){
                    flag1 = 0;
                //printf("%d\t",j);
                   }
        }
        for(int j = i+k+1; j < i+(2*k); j++){
                if(a[j] <= a[j-1]){
                    flag2 = 0;
                //printf("%d\t",j);
                }
        }
        if((flag1*flag2))  return true;
    }
    return 0;
}