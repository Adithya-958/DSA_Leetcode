int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int maxFreqSum(char* s) {
    int n = strlen(s);
    int vowelFreq[5] = {0}; // a, e, i, o, u
    int consFreq[26] = {0}; // for all letters, but we will use only consonants
    int maxVowel = 0, maxCons = 0;

    for (int i = 0; i < n; i++) {
        char c = s[i];
        int index = 0;
        if (isVowel(c)) {
            switch (c) {
                case 'a': vowelFreq[0]++; break;
                case 'e': vowelFreq[1]++; break;
                case 'i': vowelFreq[2]++; break;
                case 'o': vowelFreq[3]++; break;
                case 'u': vowelFreq[4]++; break;
            }
        } else if (c >= 'a' && c <= 'z') {
            consFreq[c - 'a']++;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (vowelFreq[i] > maxVowel) {
            maxVowel = vowelFreq[i];
        }
    }

    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        if (!isVowel(c)) {
            if (consFreq[i] > maxCons) {
                maxCons = consFreq[i];
            }
        }
    }

    return maxVowel + maxCons;
}
