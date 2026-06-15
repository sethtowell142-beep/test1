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






//求第k个最大值




//int findKthLargest(int* nums, int numsSize, int k) {
//    void swap(int* a, int* b)
//    {
//        int temp = *a;
//        *a = *b;
//        *b = temp;
//    }
//    int  quicksort(int left, int right, int* nums, int k, int numsSize)
//    {
//        if (left == right)         //防止无限递归  最终的结束
//            return nums[left];
//        int start = left;
//        int end = right;
//        int j = left + rand() % (right - left + 1);
//        int point = nums[j];
//        int i = left;
//        while (i <= end)           //一次循环的结束
//        {
//            if (nums[i] < point)
//            {
//                swap(&nums[i], &nums[start]);
//                start++;
//                i++;
//            }
//            else if (nums[i] > point)
//            {
//                swap(&nums[i], &nums[end]);
//                end--;
//            }
//            else
//            {
//                i++;
//            }
//        }
//        if (start == (numsSize - k))
//            return nums[start];
//        else if (start < (numsSize - k))
//        {
//            return  quicksort(end, right, nums, k, numsSize);
//        }
//        else
//        {
//            return  quicksort(left, start, nums, k, numsSize);
//        }
//
//    }
//    int ret = quicksort(0, numsSize - 1, nums, k, numsSize);
//    return ret;
//}








//归并排序 力扣148

//struct ListNode* sortList(struct ListNode* head) {
//    if (head == NULL)                 //如果是空 直接返回
//        return head;
//    int cout = 0;
//    struct ListNode* pcur = head;            //使用替身遍历
//    while (pcur)
//    {
//        cout++;
//        pcur = pcur->next;
//    }
//    pcur = head;
//    int* arr = (int*)malloc(cout * sizeof(int));     //使用动态函数开辟 arr[]只能放常数
//    for (int i = 0;i < cout;i++)
//    {
//        arr[i] = pcur->val;
//        pcur = pcur->next;
//    }
//    void merge(int arr[], int left, int mid, int right)
//    {
//        int n1 = mid - left + 1;              //个数与数组下标
//        int n2 = right - mid;
//        int* L = (int*)malloc(n1 * sizeof(int));
//        int* R = (int*)malloc(n2 * sizeof(int));
//        for (int i = 0;i < n1;i++)
//        {
//            L[i] = arr[left + i];
//
//        }
//        for (int i = 0;i < n2;i++)
//        {
//            R[i] = arr[mid + 1 + i];
//        }
//        int i = 0;
//        int j = 0;
//        int k = 0;
//        while (i < n1 && j < n2)
//        {
//            if (L[i] > R[j])
//            {
//                arr[left + k] = R[j];
//                j++;
//                k++;
//            }
//            else
//            {
//                arr[left + k] = L[i];
//                i++;
//                k++;
//            }
//
//        }
//        while (i < n1)
//        {
//            arr[left + k] = L[i];
//            i++;
//            k++;
//        }
//        while (j < n2)
//        {
//            arr[left + k] = R[j];
//            j++;
//            k++;
//        }
//        free(L);
//        free(R);
//
//    }
//    void mergesort(int arr[], int left, int right)
//    {
//        if (left >= right)
//            return;
//        int mid = left + (right - left) / 2;
//        mergesort(arr, left, mid);
//        mergesort(arr, mid + 1, right);  //边界错误是mid+1
//        merge(arr, left, mid, right);
//    }
//    mergesort(arr, 0, cout - 1);    //注意数组下标为0
//    pcur = head;
//    for (int c = 0;c < cout;c++)
//    {
//        pcur->val = arr[c];
//        pcur = pcur->next;
//    }
//    free(arr);
//    return head;
//}








//class Solution {
//public:
//    ListNode* sortList(ListNode* head) {
//        if (head == NULL || head->next == NULL)
//            return head;
//        ListNode* slow = head;
//        ListNode* fast = head->next;
//        while (fast && fast->next)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        ListNode* secend = slow->next;
//        ListNode* first = head;
//        slow->next = NULL;
//        first = sortList(first);     //更新返回值
//        secend = sortList(secend);
//        return mergesort(first, secend);
//    }
//    ListNode* mergesort(ListNode* left, ListNode* right)
//    {
//        ListNode* dummy = new ListNode(0);
//        ListNode* tail = dummy;
//        while (left && right)
//        {
//            if (left->val < right->val)
//            {
//                tail->next = left;   //next值串联
//                tail = tail->next;
//                left = left->next;
//
//            }
//            else
//            {
//                tail->next = right;
//                tail = tail->next;
//                right = right->next;
//            }
//        }
//        tail->next = left ? left : right;
//        return dummy->next;
//    }
//};