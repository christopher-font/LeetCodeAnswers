int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int ans = 0;
    for (int i = 0, tmpCount = 0; i < numsSize; i++) {
        if (nums[i] == 1)
            tmpCount++;
        else
            tmpCount = 0;
        
        if (tmpCount > ans)
            ans = tmpCount;
    }
    return ans;
}