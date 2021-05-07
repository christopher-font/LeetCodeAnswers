int removeDuplicates(int* nums, int numsSize){
    int length = numsSize;
    int m = 1;
    for (int n = 1; n < numsSize; n++) {
        if (nums[n] != nums[n-1]) {
            nums[m] = nums[n];
            m++;
        } else 
            length--;
    }
    
    return length;
}
