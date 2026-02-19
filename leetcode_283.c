void moveZeroes(int* nums, int numsSize) {
    int c=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0) c++;
        else{
            nums[i-c]=nums[i];
        }
    }
    for(int i=numsSize-c;i<numsSize;i++) nums[i]=0;
}
