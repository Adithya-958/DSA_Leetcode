
int canBeTypedWords(char* text, char* brokenLetters) {
    int m = strlen(brokenLetters);
    int canType = 1;
    int wordCount = 0;
    
    for (int i = 0; text[i] != '\0'; i++) {
        // Check if current character is space (end of word)
        if (text[i] == ' ') {
            if (canType) {
                wordCount++;
            }
            canType = 1; // Reset for next word
            continue;
        }
        
        // Check if current character is a broken letter
        for (int j = 0; j < m; j++) {
            if (text[i] == brokenLetters[j]) {
                canType = 0; // Mark this word as untypable
                break;
            }
        }
    }
    
    // Don't forget the last word
    if (canType) {
        wordCount++;
    }
    
    return wordCount;
}