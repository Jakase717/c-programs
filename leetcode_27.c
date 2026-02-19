int removeElement(int* nums, int numsSize, int val) {
    int c=0,ans=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==val) c++;
        else {
            nums[i-c]=nums[i];
            ans++;
        }
    }
    return ans;
}
