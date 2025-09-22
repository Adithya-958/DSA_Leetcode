int maxFrequencyElements(int* nums, int numsSize) {
    int s[101] = {0};
    int n = numsSize;
    for(int i =0; i < n; i++){
            s[nums[i]]++;
    }
    int maxvalue = 0;
    for(int i = 0; i < n; i++){
        if(maxvalue < nums[i])  maxvalue = nums[i];
    }
    printf("%d\t", maxvalue);
    printf("s array (index: frequency):\n");
    for(int i = 0; i <= maxvalue; i++){  // Showing first 10 elements
        if(s[i] > 0){
            printf("s[%d] = %d\n", i, s[i]);
        }
    }
    int max= 0;
    for(int i = 0; i <= maxvalue; i++){  // Showing first 10 elements
        if(max < s[i]){
            max =s[i];
        }
    }    printf("%d\t\n", max);
    int sum = 0;
    for(int i = 0; i <= maxvalue; i++){  // Showing first 10 elements
        if(max == s[i]){
            sum += max; //s[i];
        }
    }printf("sum is %d\t ", sum);
    return sum;
}