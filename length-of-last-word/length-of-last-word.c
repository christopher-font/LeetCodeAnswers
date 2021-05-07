

int lengthOfLastWord(char * s){    
    int count = 0;
    
    int lastCharWasSpace = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            lastCharWasSpace = 1;
        } else if (lastCharWasSpace) {
            count = 0;
            lastCharWasSpace = 0;
        }  
        if (s[i] != ' ')
            count++;
    }
    
    return count;
}