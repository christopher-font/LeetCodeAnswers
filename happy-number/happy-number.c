bool isHappy(int n){
    
    while(n != 1) {
        int tmp = 0;
        for (int i = 1;  n / (int) pow(10, i - 1) > 0; i++) {
            tmp += (int) pow(((n % (int) pow(10, i)) / ((int) pow(10, i - 1))), 2);
        }
        n = tmp;
        
        if (n == 4)
            return false;
        
    }
    
    return true;
}