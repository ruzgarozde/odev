int majorityElement(int* nums, int numsSize){
    int j=0,u=0;
for(int i=0;i<numsSize;i++){
    if(j==0)
        u=nums[i];
    if(u==nums[i])
        j++;
    else
        j--;
}
    
return u;
}