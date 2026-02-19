int removeDuplicates(int* nums, int numsSize) {
    int val=nums[0],c=0;
    for(int i=1;i<numsSize;i++){
        if(nums[i]==val) c++;
        else {
            nums[i-c]=nums[i];
            val=nums[i];
        }
    }
    return numsSize-c;
}
