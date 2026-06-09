#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


//相交链表


//while (a != b)                  抽象 a+c  b+c  a+c+b=b+c+a  找到了
//{
//	a = (a == NULL) ? headb : a->next;
//	b = (b == NULL) ? heada : b->next;   
//}







//贪心算法   局部最优到全局最优 不知道设为什么就设为nums【0】 



//int maxSubArray(int* nums, int numsSize) {     
//    int max = nums[0];
//    int cur = nums[0];
//    int b = 0;
//    for (b = 1;b < numsSize;b++)
//    {
//        if (cur > 0)
//            cur += nums[b];
//        else
//            cur = nums[b];
//        if (cur > max)
//            max = cur;
//
//
//    }
//    return max;
//}






//移动0 问题。遇到没有临时指针 无法遍历数组并交换的问题  一个指针遍历一个指针记录  冒泡排序内部两两交换没有改变相对位置
//void moveZeroes(int* nums, int numsSize) {
//    int cur = 0;
//    for (int i = 0;i < numsSize;i++)
//    {
//
//        if (nums[i] != 0)
//        {
//            nums[cur] = nums[i];
//            cur++;
//        }
//    }
//    for (int i = cur;i < numsSize;i++)
//    {
//        nums[i] = 0;
//    }
//}









//三路快排 重复递归 重复的过程写函数  三个指针 一个基点 确定左右区域 i看遍整个数组 视情况移动

//int* sortArray(int* nums, int numsSize, int* returnSize) {
//    void swap(int* a, int* b)
//    {
//        int t = *a;
//        *a = *b;
//        *b = t;
//    }
//    *returnSize = numsSize;
//    void quicksort(int* arr, int left, int right)
//    {
//        if (left >= right)
//            return;
//        int ran = left + rand() % (right - left + 1);
//        int point = arr[ran];
//        swap(&arr[ran], &arr[right]);
//        int i = left;
//        int aleft = left;
//        int aright = right;
//        while (i <= right)
//        {
//            if (arr[i] > point)
//            {
//                swap(&arr[i], &arr[right]);
//                right--;
//            }
//            else  if (arr[i] < point)
//            {
//                swap(&arr[i], &arr[left]);
//                i++;
//                left++;
//            }
//            else
//            {
//                i++;
//            }
//        }
//        quicksort(arr, aleft, left - 1);
//        quicksort(arr, right + 1, aright);
//
//    }
//    quicksort(nums, 0, numsSize - 1);
//    return nums;
//}