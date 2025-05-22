//Remove Duplicates from Sorted Array
/* https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/727/ */
/*
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    //sorting
    for (int first=0; first < numsSize-1;first++)
    {
        for(int sec = first + 1; (sec < numsSize);sec++)
        {
            if(nums[first] > nums[sec])
            {
                int tmp = nums[sec];
                nums[sec] = nums[first];
                nums[first] = tmp;
            }
        }
    } 

    //remove duplicate
    int index = 1; // place to insert the next unique number
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {  //nums[i+1] - can ;lead out of bound (set 1: i < numsSize - 1 || set2: nums[i-1])
            nums[index] = nums[i];
            index++;
        }
    }   

    // Print results
    printf("\nAfter removing duplicates (first %d elements):\n", index);
    for (int i = 0; i < index; i++) {
        printf("nums[%d] = %d\n", i, nums[i]);
    }

    // Optional: print rest of array as underscores
    for (int i = index; i < numsSize; i++) {
        printf("nums[%d] = _\n", i);
    }
    return index; // This is k (count of unique elements)
}


int main() {
    int nums[] = {1,4,2,3,4,5,3}; // Input array :: if provide [10] - write loop for size
    int size = sizeof(nums)/sizeof(nums[0]);
    int k = removeDuplicates(nums,size); // Calls your implementation
    printf("\n return k :%d \n ",k);
    return 0;
}

/* remove duplicate - visual trace
| i | nums\[i] | nums\[i-1] | Comparison         | Action                | index | nums\[] after step     |
| - | -------- | ---------- | ------------------ | --------------------- | ----- | ---------------------- |
| 1 | 0        | 0          | 0 == 0 → duplicate | Skip (no change)      | 1     | \[0, 0, 1, 1, 2, 2, 3] |
| 2 | 1        | 0          | 1 != 0 → unique    | nums\[1] = 1; index++ | 2     | \[0, 1, 1, 1, 2, 2, 3] |
| 3 | 1        | 1          | 1 == 1 → duplicate | Skip                  | 2     | \[0, 1, 1, 1, 2, 2, 3] |
| 4 | 2        | 1          | 2 != 1 → unique    | nums\[2] = 2; index++ | 3     | \[0, 1, 2, 1, 2, 2, 3] |
| 5 | 2        | 2          | 2 == 2 → duplicate | Skip                  | 3     | \[0, 1, 2, 1, 2, 2, 3] |
| 6 | 3        | 2          | 3 != 2 → unique    | nums\[3] = 3; index++ | 4     | \[0, 1, 2, 3, 2, 2, 3] |
*/