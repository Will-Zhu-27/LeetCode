// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// Example:

// Given nums = [2, 7, 11, 15], target = 9,

// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].

#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ret = (int *)malloc(sizeof(int) * 2);
    int flag = 0;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                ret[0] = i;
                ret[1] = j;
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0) {
        *returnSize = 0;
        return NULL;
    } else {
        *returnSize = 2;
        return ret;
    }
}

int main(int argc, char **argv) {
    int nums[] = {3, 2, 4};
    int target = 6;
    int returnSize;
    int *ret = twoSum(nums, 3, target, &returnSize);
    printf("the first index is %d, the second index is %d\n", ret[0], ret[1]);
    free(ret);
    return 0;
}