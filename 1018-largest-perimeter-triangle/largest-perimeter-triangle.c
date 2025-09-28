int compare(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}
int perimeter(int a, int b, int c){
    return a+b+c;
}
bool triangle(int a, int b, int c){
    if(a+b>c && b+c>a && c+a>b){
        
        printf("1");return true;
    }
    return false;
}

int largestPerimeter(int* a, int n){
    int peri = 0;
    // for(int i = 0; i < n; i++){
    //     for(int j = i+1; j < n; j++){
    //         for(int k =j+1 ; k < n; k++){
    //             if(triangle(a[i],a[j],a[k])){
    //                 //printf("%d", perimeter(a[i],a[j],a[k]));
    //                 if(peri < perimeter(a[i],a[j],a[k])){    peri = perimeter(a[i],a[j],a[k]);
    //                 }
    //             }
    //         }
    //     }
    // }return peri;
    qsort(a,n,sizeof(int),compare);
    for(int i = n-3; i >=0 ; i-- ){
                if(triangle(a[i],a[i+1],a[i+2])){
                    //printf("%d", perimeter(a[i],a[j],a[k]));
                    if(peri < perimeter(a[i],a[i+1],a[i+2])){    peri = perimeter(a[i],a[i+1],a[i+2]);
                    }
                }
    }
return peri;
}