#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    if (a == b)
//    {
//        printf("%d=%d", a, b);
//    }
//    else if (a > b)
//    {
//        printf("%d>%d", a, b);
//    }
//    else
//    {
//        printf("%d<%d", a, b);
//    }
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (0 == (n % 3))
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if ((a > b) && (a > c))
//	{
//		printf("%d ", a);
//		if (b > c)
//		{
//			printf("%d %d",b,c);
//		}
//		else
//			printf("%d %d",c,b);
//	}
//	else if (b > c)
//	{
//		printf("%d ", b);
//		if (a > c)
//		{
//			printf("%d %d", a,c);
//		}
//		else
//			printf("%d %d", c,a);
//	}
//	else
//	{
//		printf("%d ", c);
//		if (a > b)
//		{
//			printf("%d %d", a, b);
//		}
//		else
//			printf("%d %d", b, a);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b < 10; b++)
//		{
//			printf("%d*%d=%d ", a, b, (a * b));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	double a = 1.0;
//	int b = 1;
//	double c = 0.0;
//	for (b = 1; b <= 100; b++)
//	{
//		c = c + (a / b);
//	}
//	printf("%f", c);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i <= 8; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			arr[i + 1] = arr[i];
//		}
//	}
//	printf("%d", arr[9]);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int c = 0;
//	for (a = 1; a < 100; a++)
//	{
//		if ((a % 10) == 9)
//			c++;
//		if ((a/10) == 9)
//			c++;
//	}
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int c = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		count = 0;
//		for (c = 2; (c * c) <= i; c++)
//		{
//			if ((i % c) == 0)
//			{
//				count++;
//			}
//		}
//		if (count == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if ((a % b) == 0)
//	{
//		printf("%d", b);
//	}
//	else if ((b % a) == 0)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		int c = 0;
//		int d = 0;
//		for (c = 1; ((c <= a) && (c <= b)); c++)     列举  数学  very nice
//		{
//			if ((a % c == 0) && (b % c == 0))
//			{
//				d = c;
//			}
//		}
//		printf("%d", d);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tem = 0;
//	scanf("%d %d", &a, &b);
//	if (a <= b)
//	{
//		a = a ^ b;
//		b = a ^ b;
//		a = a ^ b;
//	}
//	while (b != 0)           辗转相除法
//	{
//		tem = a % b;
//		a = b;
//		b = tem;
//	}
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    int arr[3] = { a,b,c };
//    int d = 3;
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < d; i++)
//    {
//        for (j = 0; j < (d - 1 - i); j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                arr[j] = arr[j] ^ arr[j + 1];
//                arr[j + 1] = arr[j] ^ arr[j + 1];
//                arr[j] = arr[j + 1] ^ arr[j];
//            }
//        }
//    }
//    a = arr[0];               判断非退化三角  换的只是数组里的位置，abc变量重新赋值。
//    b = arr[1];
//    c = arr[2];
//    if ((a + b) > c)
//    {
//        if ((a != b) && (a != c) && (b != c))
//        {
//            printf("Ordinary triangle!");
//        }
//        else if ((a == b) && (a == c) && (b == c))
//        {
//            printf("Equilateral triangle!");
//        }
//        else
//        {
//            printf("Ordinary triangle!");
//        }
//    }
//    else
//    {
//        printf("Not a triangle!");
//    }
//    return 0;
//}
//int main()
//{
//	int arr1[9] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[9] = { 9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		arr1[i] = arr1[i] ^ arr2[i];
//		arr2[i] = arr1[i] ^ arr2[i];
//		arr1[i] = arr1[i] ^ arr2[i];
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		j = j + arr[i];
//	}
//	double s = j / 10.0;
//	printf("%f ", s);
//	return 0;
//}
//int bin_search(int* p, int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (p[mid] > key)
//			right = mid - 1;
//		else if (p[mid] < key)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 1;
//	int c=bin_search(arr, 0, sz - 1, key);
//	printf("%d ", c);
//	return 0;
//}
//void C_c(int x)
//{
//	int i = 1;
//	int j = 1;
//	int c = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= x; j++)
//		{
//			c = i * j;
//			printf("%d*%d=%d ", i, j, c);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int c = 0;
//	scanf("%d", &c);
//	C_c(c);
//	return 0;
//}
//void c_C(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//	{
//		printf("leap_year");
//	}
//	else
//		printf(" not leap_year");
//
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	c_C(year);
//	return 0;
//}
//void is_prime(int x, int y)
//{
//	int c = 0;
//	int t = 0;
//	int d = 0;
//	for (d = x; d <= y; d++)
//	{
//		t = 0;
//		for (c = 2; (c * c) <= x;c++)
//		{
//			t = 1;
//
//			if ((d % c) == 0)
//			{
//				t = 0;
//				break;
//			}
//		}
//		if (t == 1)
//		{
//			printf("%d ", d);
//		}
//	}
//}
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	is_prime(num1, num2);
//	return 0;
//}
//void print(int* p, int c)
//{
//	int d = 0;
//	for (d = 0; d < c; d++)
//	{
//		printf("%d ", p[d]);
//	}
//}
//void zero_arr(int* p, int c)
//{
//	int d = 0;
//	for (d = 0; d < c; d++)
//	{
//		p[d] = 0;
//	}
//}
//void reverse(int* p, int left, int right)
//{
//	while (left < right)
//	{
//		p[left] = p[left] ^ p[right];
//		p[right] = p[left] ^ p[right];
//		p[left] = p[left] ^ p[right];
//		left++;
//		right--;
//	}
//}
//int main()                喝饮料 和瓶子换饮料
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	printf("\n");
//	reverse(arr, 0, sz-1);
//	print(arr, sz);
//	printf("\n");
//	zero_arr(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//int test(int x)
//{
//	if (x >1)
//	{
//		return (x - x % 2) + test(x / 2 + x % 2);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int b = 20;
//	int c =test(20);
//	printf("%d", c);
//	return 0;
//}
#include <math.h>	
//int main()         水仙数
//{
//	int limit = 100000;
//	int num = 0;
//	int digit = 0;
//	int tem = 0;
//	for (num = 1; num < limit; num++)
//	{
//		tem = num;
//		digit = 0;
//		while (tem > 0)
//		{
//			tem /= 10;
//			digit++;
//		}
//		int sum = 0;
//		tem = num;
//		while (tem > 0)
//		{
//			int di = tem % 10;
//			sum = sum + (int)pow(di, digit);
//			tem /= 10;
//		}
//		if (sum == num)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = a;
//	int i = 0;
//	int tem = a;
//	for (i = 0; i < 4; i++)
//	{
//		tem = tem * 10 + a;
//		sum = sum + tem;
//
//	}
//	printf("%d", sum);
//	return 0;
//}
//void test(int x)                         打印菱形
//{
//	int i = 1;
//	int j = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= x - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= i * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = x - 1; i >= 1; i--)
//	{
//		for (j =1; j <= x-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= i * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	test(n);
//	return 0;
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int com(const void* p1, const void* p2)   合并排序
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//int main()
//{
//	int arr1[2000] = { 0 };
//	int arr2[2000] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = n; i < m + n; i++)
//	{
//		arr1[i] = arr2[i - n];
//	}
//	qsort(arr1, m + n, sizeof(arr1[0]), com);
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//int main()         打印x 坐标轴规律
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if ((j == i) || ((i + j) == (n + 1)))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()  打印空心正方形
//{ 
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= n; j++)
//			{
//				if ((i > 1) && (i < n) && (j > 1) && (j < n))
//					printf("  ");
//				else
//					printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int test(int x, int y)
//{
//	y = y * 10 + x;
//	if (y >= 11111)
//	{
//		return y;
//	}
//	else
//		return y + test(x,y);
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int tem = 0;
//	int c=test(a, tem);
//	printf("%d", c);
//	return 0;
//}
//int test(int x)
//{
//	if (x >= 1)
//	{
//		int tem = x % 10;
//		return tem + test(x / 10);
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = test(a);
//	printf("%d", c);
//	return 0;
//}

//int test(int n, int k,int y)
//{
//	y = y * n;
//	k -= 1;
//	if (k == 1)
//		return y;
//	else
//		return test(n, k,y);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int tem = n;
//	int c = test(n, k,tem);
//	printf("%d", c);
//	return 0;
//}
//int test(int x)
//{
//	if ((x == 1) || (x == 2))
//		return 1;
//	else
//		return test(x - 1) + test(x - 2);   费波纳数列
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c = test(n);
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 1;
//	int i = 0;
//	scanf("%d", &i);
//	while (i > 2)
//	{
//		int tmp = n + m;
//		n = m;
//		m = tmp;
//		i--;
//	}
//	printf("%d", m);
//}
//int main()
//{
//	int a = 30;
//	int b = 20;
//	printf("%d %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}