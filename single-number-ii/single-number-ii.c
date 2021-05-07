

int singleNumber(int* nums, int numsSize){
    int ans = nums[0];
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < numsSize + 1; j++) {
            if (j == i)
                continue;
            else if (j == numsSize)
                ans = nums[i];
            else if (nums[i] == nums[j])
                break;
        }
    }
    
    return ans;
}