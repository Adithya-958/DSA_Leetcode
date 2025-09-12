bool doesAliceWin(char* s) {
    char* v = "aeiou";
    int n = strlen(s);//[P]
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'){
            count++;
        }
    }


    return (count%2 == 1)||(count%2 == 0 && count > 0);
}