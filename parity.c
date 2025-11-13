int* transformArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int left = 0;
    for (int i = 0; i < numsSize; i++) {
        int bit = nums[i] & 1;
        if (bit == 0) {
            int temp = nums[left];
            nums[left] = nums[i];
            nums[i] = temp;
            left++;
        }
    }

    for (int i = 0; i < numsSize; i++)
        nums[i] = nums[i] & 1;

    return nums;
}
