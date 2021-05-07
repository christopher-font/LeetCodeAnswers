bool isVowel(char l) {
    if (l == 'a' || l == 'e' || l == 'i' || l == 'o'|| l == 'u' || l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U')
        return true;
    return false;
}

bool halvesAreAlike(char * s){
    int l = strlen(s);
    
    int lv = 0;
    int rv = 0;
    
    for (int i = 0; i < l / 2; i++) {
        if (isVowel(s[i])) {
            lv++;
        }
        if (isVowel(s[(l/2) + i])) {
            rv++;
        }
    }
    return lv == rv ? true: false;
}

