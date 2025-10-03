int maxBottlesDrunk(int n, int e) {
    int count = n;
    while(n>=e){
        n=n-e+1;
        e++;
        count++;
    }return count++;
}