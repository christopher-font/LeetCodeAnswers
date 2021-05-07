int maxArea(int* h, int hS){
    int ans = 0;
    
    int l = 0; 
    
    hS--;
    
    while (l < hS) {
        int area = (hS - l) * ((h[l] < h[hS]) ? h[l++] :  h[hS--]);
        ans = area > ans ? area : ans;
    }
    
    return ans;
}