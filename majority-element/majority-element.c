int cmpInt (int * a, int * b) {
    return *a - *b ;
}

int majorityElement(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmpInt);
    
    int count = numsSize / 2;
    
    for (int i = 1; i < numsSize; i++) {        
        if (nums[i - 1] != nums[i])
            count = numsSize / 2;
        else 
            count--;
                
        if (count <= 0) {
            return nums[i];
        }
        
    }
    
    return nums[0];
}