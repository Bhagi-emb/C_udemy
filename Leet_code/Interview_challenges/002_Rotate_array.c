/*
Rotate Array
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation: nums = [1,2,3,4,5,6,7]
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/
#include<stdio.h>

//simulate the rotation one step at a time, which is both inefficient (O(k * n)) and hard to debug.
void rotate(int* nums, int numsSize, int k) {
    int temp = nums[0],hold,i;
    for(int inc =0 ;inc < k;inc++)
    {
        for(i=1;i<numsSize;i++)
        {
            hold = nums[i];
            nums[i] = temp;
            temp = hold;
            //printf("temp : %d \n",temp);
        }
        //printf("temp : %d \n",temp);
        nums[0] = temp;
    }    
    //print
    // printf("nums: ");
    // for ( i=0;i<numsSize;i++)
    // {
    //     printf("%d ",nums[i]);
    // }
}
/*
Reverse the whole array → [7 6 5 4 3 2 1]
Reverse the first k elements → [6 7 5 4 3 2 1]
Reverse the remaining → [6 7 1 2 3 4 5]
*/
void roll(int start,int end,int* array)
{
    
    for(;start<end;start++)
    {
        int tmp =array[end];
        array[end] = array[start];
        array[start] = tmp;
        end--;
    }
}
void rotate1(int* nums, int numsSize, int k) {
    k= k%numsSize; //Before you rotate, you should modulo k by numsSize, in case k > numsSize. Otherwise, it will fail on test cases
    /*
       7 ) 3 ( 0     ← 7 goes into 3 zero times
       0         ← 0 × 7 = 0
     -----
       3         ← Remainder is 3
    */
    roll(0,numsSize - 1,nums);
    roll(0,k -1,nums);
    roll(k,numsSize-1,nums);
  
    // printf("nums: ");
    // for (int i=0;i<numsSize;i++)
    // {
    //     printf("%d ",nums[i]);
    // }
}

int main()
{
    int nums[] = {1,2,3,4,5,6,7};
    int turn =3;
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    //rotate(nums,numsSize,turn);
    rotate1(nums,numsSize,turn);
    return 0;
}