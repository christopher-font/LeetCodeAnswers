int mySqrt(int x) {
    unsigned int ans = 0;
    
    while (ans * ans < x)
        ans++;
    
    if (ans * ans > x)
        ans--;
    
    return ans;
}