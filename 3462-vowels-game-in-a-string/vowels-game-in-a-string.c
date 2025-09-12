bool doesAliceWin(char* s) {
    char* v = "aeiou";
    int n = strlen(s);//[P]
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'){
            count++;
        }
    }


    return count;
}

/*
bool doesAliceWin(char* s) {
    int count = 0;
    int len = strlen(s);
    for(int i=0; i<len; i++){
        switch(s[i]){
            case 'a':case 'e':case 'i':case 'o':case 'u':count++;
            default: break;
        }
    }
    return count;
}
*/