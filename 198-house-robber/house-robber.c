#define MAX(a, b) ((a) > (b) ? (a) : (b))
// int robU(int nums[], int i) {
//     if (i < 0) {
//         return 0;
//     }
//     return MAX(robU(nums, i - 2) + nums[i], robU(nums, i - 1));
// }
int rob(int* a, int n) {
    if(n==0)    return 0;
    int p1 = 0;
    int p2 = 0;
    for(int i = 0; i < n; i++){
        int tmp = p1;
        printf("%d", tmp);
        p1 = MAX(p2+a[i],p1);
        p2 = tmp;
    }return p1;
    //return robU(a, n - 1);
}