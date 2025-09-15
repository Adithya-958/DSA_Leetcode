
int canBeTypedWords(char* text, char* broken) {
    int m = strlen(broken);
    int wordCount = 0;
    
    char s[26];

    for(int i = 0; i < m; i++){
        s[broken[i] - 'a'] = 1;
    }
    int result = 0;
    bool canType = 1;
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] == ' '){
            if(canType){
                result++;
            }
            canType = true;
        }
        else if(s[text[i]-'a'] == true){
            canType = 0;
        }
    }
    if(canType){
        result++;
    }
    return result;
}