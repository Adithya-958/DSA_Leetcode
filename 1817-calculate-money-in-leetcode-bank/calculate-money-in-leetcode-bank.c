int totalMoney(int n) {
    // int a = 1, res = 0;
    // for(int i = 1; i <= n; i++){
    //     res += a;
    //     a++;
    //     if(i%7 == 0){
    //         a = i/7 + 1;
    //     }
    // }
    // return res;
    int sum=0, res=0 ,x = n/7, y = n%7;
    int Fst_w = 28;
    int Lst_w = 28+(x-1)*7;
    sum = x*(Fst_w + Lst_w)/2;
    int start = x + 1;
    for(int i = 0; i < y; i++){
        res += start+i;
    }
    return res+sum;
}