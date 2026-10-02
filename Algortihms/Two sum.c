/*
 * Problem: 1. Two Sum
 * Repository: dsa-third-sem / arrays
 * File: 0001_two_sum.c
 * 
 * --- LOGIC & APPROACH ---
 * 1. Set '*returnSize = 2' because the problem expects an array containing two indices.
 * 2. Dynamically allocate memory for 2 integers using malloc to persist the return array on the heap.
 * 3. Use nested loops to check all possible pairs (Brute Force Approach):
 *    - Outer loop 'i' selects the first element from index 0 to numsSize - 1.
 *    - Inner loop 'j' selects the second element starting from 'i + 1' to avoid using the same element twice.
 * 4. For each pair (i, j), check if nums[i] + nums[j] equals the target value.
 * 5. When a matching sum is found:
 *    - Store 'i' in result[0] and 'j' in result[1].
 *    - Immediately return the result pointer.
 * 6. Return result at the end if loop completes.
 * 
 * --- COMPLEXITY ---
 * Time Complexity:  O(n^2) - Nested loops iterate through pairs of elements.
 * Space Complexity: O(1)   - Only uses fixed memory allocated for the 2-element output array.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return result;
}
