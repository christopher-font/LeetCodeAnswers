int strStr(char * haystack, char * needle){
    if (needle[0] == '\0') return 0; 
    
    int nLen = strlen(needle);
    
    for (int i = 0; haystack[i] != '\0'; i++) {
        if (strncmp(&haystack[i], needle, nLen) == 0) return i;
    }
    
    return -1;
}