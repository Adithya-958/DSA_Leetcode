int smallestNumber(int n) {
    int x,count = 0;
 int n1=0;
    while(n>0){
        n = n>>1;
        count++;
    }
    return (1<<count)-1;
}