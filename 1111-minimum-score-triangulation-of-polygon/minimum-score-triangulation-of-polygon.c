int t[51][51];
int recursive(int val[],int i,int j ){
    if(j-i+1<3)    return 0;
    int min = INT_MAX;
    if(t[i][j]!=-1) return t[i][j];
    for(int k = i+1; k < j; k++){
        int score = val[i]*val[j]*val[k] + 
        recursive(val,i,k) + 
        recursive(val,k,j); 
        if(min > score) {
            min = score;
            //printf("1_1:");
            }
    }
    return t[i][j] = min;
}

int minScoreTriangulation(int* val, int n) {
    memset(t,-1,sizeof(t));
    return recursive(val, 0, n-1);
}