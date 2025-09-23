int compareVersion(char* v1, char* v2) {
    int i=0, j=0;
    int n1 = 0,n2 = 0;
    while(v1[i]!='\0' || v2[j]!='\0'){
        n1 =0;n2=0;
        while(v1[i]!='\0' && v1[i]!='.')
            {n1 = n1*10+(v1[i]-'0');
            i++;printf("n1 is %d", n1);}
        while(v2[j]!='\0' && v2[j]!='.'){
            {n2 = n2*10+(v2[j]-'0');
            j++;}
            printf("n2 is %d", n2);
        }
    
    if(v1[i] == '.') i++;
    if(v2[j] == '.') j++;

    if(n1 > n2) return 1;
    if(n1<n2)   return -1;
    }
    return 0;
}