int reverse(int x){
    if (x <= INT_MIN || x >= INT_MAX) 
        return 0;
    
    long ans = 0;
    
    int isNegative = x < 0 ? 1: 0;
    
    if (isNegative) 
        x = x * -1;
    
    while (x > 0) {        
        ans = (ans * 10) + x % 10;
        x = x / 10;
    }
    
    if (isNegative) 
        ans = ans * -1;
    
    return (ans < INT_MAX && ans > INT_MIN) ? (int) ans: 0;
}