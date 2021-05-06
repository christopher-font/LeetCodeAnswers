int myAtoi(char * s){
    long int ans = 0;
    
    int isNeg = 0;
    int isPos = 0;
    int isPastFirstDigit = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {        
        //printf("\nisNeg: %d\tisPos: %d", isNeg, isPos);
        if (isNeg == 1 && isPos == 1) {
            break;
        } else if (s[i] > 47 && s[i] < 58) {
            ans = (ans * 10) + (s[i] - 48);
            isPastFirstDigit = 1;
        } else if (s[i] != ' '  && s[i] != '+' && s[i] != '-') {
            break;
        } else if ((s[i] == ' '  || s[i] == '+' || s[i] == '-') &&  (isPastFirstDigit || isNeg || isPos)) {
            break;
        } else if (s[i] == '+') {
            isPos = 1;
        } else if (s[i] == '-') {
            isNeg = 1;
        }
        
        if (ans < INT_MIN)
            break;
        else if (ans > INT_MAX)
            break;
    }
        
    ans = isNeg ? ans * -1 : ans;
    
    if (ans < INT_MIN)
        return INT_MIN;
    else if (ans > INT_MAX) 
        return INT_MAX;
    
    return (int) ans;
}