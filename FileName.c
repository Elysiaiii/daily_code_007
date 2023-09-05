

int searchInsert(int* nums, int numsSize, int target) {
    int n = numsSize;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r + 1) / 2;
        if (nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return l;
}