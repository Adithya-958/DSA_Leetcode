int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int triangleNumber(int* nums, int n) {
    // int i = 0, j = 1, k =2;
    int count = 0;
    // for(int i = 0; i < n; i++){
    //     if(i == n-1){
    //         j = 0;
    //         k = 1;
    //         printf("111");
    //         continue;
    //     }
    //     printf("%d,%d,%d\t", i,j,k);
    //     if (i != j && j != k && i != k) {

    //     if((nums[i]+nums[j]>nums[k])&&(nums[k]+nums[j]>nums[i])&&(nums[i]+nums[k]>nums[j])){
    //         count++;
    //         printf("%d\n", count);
    //         }
    //     }
    //     j = (j+1)%n;
    //     k = (k+1)%n;
    //         }return count;
    // 3 for loops for each i,j move k and check condition O(N^3)
    //sort and check k=2 to end i =0, j = k-1 pointers making sure i < j
    qsort(nums, n, sizeof(int), compare);
    for(int k = 2; k < n; k++){
        int i = 0, j = k-1;
        while(i<j){
            if(nums[i]+nums[j] > nums[k]){
                count += j-i;
                    j--;
                }
            else    i++;
        }
    }return count;
}