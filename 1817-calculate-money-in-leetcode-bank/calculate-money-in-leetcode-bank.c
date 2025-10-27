int totalMoney(int n) {
    int a = 1, res = 0;
    for(int i = 1; i <= n; i++){
        res += a;
        a++;
        if(i%7 == 0){
            a = i/7 + 1;
        }
    }
    return res;
}