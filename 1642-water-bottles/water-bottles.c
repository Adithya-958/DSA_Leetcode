int numWaterBottles(int n, int exc) {
    int count = n;
    while(n >= exc){
        int div = n/exc;
        count += div;
        n = div+(n%exc);
    }return count;
}