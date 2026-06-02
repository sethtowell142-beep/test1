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