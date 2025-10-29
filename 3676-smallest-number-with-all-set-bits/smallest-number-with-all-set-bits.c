int smallestNumber(int n) {
    int x,count = 0;
    while(n){
        int rem = n%2;
        n = n/2;
        count++;printf("1");
    }
    printf("%d",count);
    return pow(2,count) - 1;
}