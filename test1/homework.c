#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//		int c = 0;
//		while (n != 0)
//		{
//			n = ((n - 1) & n);
//			c++;
//
//		}
//		printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int d = n;
//	int c = 0;
//	for (c=0;c<16;c++)
//	{
//		printf("%d ", n & 1);
//		n >>= 2;
//	}
//	d >>= 1;
//	printf("\n");
//	for (c = 0; c < 16; c++)
//	{
//		printf("%d ", d & 1);
//		d >>= 2;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };          //单身狗数
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int count = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
	//int c = 0;
	//int ret = 0;
	//for (c = 0; c < 9; c++)           
	//{
	//	ret = ret ^ arr[c];            //单身狗数优化。任何数^本身都是0。 0^任何数都是任何数。
	//}
	//printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int c = m ^ n;           有多少个不同 ^ 变成1再算多少个1。
//	int count = 0;
//	while (c != 0)
//	{
//		c = (c - 1) & c;
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//size_t my_strlen(const char* p)
//{
//	/*size_t count = 0;
//	while (*p != '\0')
//	{
//		p = p + 1;
//		count++;
//	}
//	return count;*/
//	const char* start = p;
//	while (*p)
//		p++;
//	return p - start;
//}
//int main()
//{
//	char arr[20] = "jdskfwe";
//	size_t g  = my_strlen(arr);
//	printf("%zu", g);
//	return 0;
//}
//void left_arr(char* p, int k,int sz	)
//{
//	int g = 0;
//	for (g = 0; g < k; g++)
//	{
//		p[sz] = p[0];
//		int i = 0;
//		for (i = 1; i <= sz; i++)
//		{
//			p[i - 1] = p[i];
//		}
//	}
//	for (g = 0; g < sz; g++)
//	{
//		printf("%c", p[g]);
//	}
//}
//int main()
//{
//	char arr[20] = "ABCD";
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	scanf("%d", &k);
//	left_arr(arr, k,sz);
//	return 0;
//}
//int main()
//{
//	char str[100] = { 0 };
//	int c = 0;
//	int ch = 0;
//	while (((ch = getchar()) != EOF) && (ch != '\n')&&c<99)
//	{
//		str[c] = ch;
//		c++;
//	}
//	c--;
//	while (c >= 0)
//	{
//		printf("%c", str[c]);
//		c--;
//	}
//	return 0;
//}
//void odd_even_number(int* p, int x)
//{
//	int left = 0;
//	int right = x - 1;
//	while (left < right)
//	{
//		if ((p[left] % 2) == 0)
//		{
//			int tmp = 0;
//			tmp = p[left];
//			p[left] = p[right];
//			p[right] = tmp;
//			right--;
//		}
//		else
//		{
//			left++;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	odd_even_number(arr, sz);
//	int c = 0;
//	for (c = 0; c < sz; c++)
//	{
//		printf("%d ", arr[c]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int c = 0;
//	for (c = 0; c < sz; c++)
//	{
//		printf("%d ", *(p + c));
//	}
//	return 0;
//}
//void bubble_sort(int* p, int x)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x - 1; i++)
//	{
//		for (j = 0; j < x - 1 - i; j++)
//		{
//			if (p[j] > p[j + 1])
//			{
//				int tmp = 0;
//				tmp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//		int c = 0;
//	for (c = 0; c < sz; c++)
//	{
//		printf("%d ", arr[c]);
//	}
//	return 0;
//}
//void triangle(int(*p)[10], int x)    杨辉三角
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			if (j == 1 || j == i)
//			{
//				*(*(p + i - 1) + j - 1) = 1;
//			}
//			else
//			{
//				*(*(p + i - 1) + j - 1) = *(*(p + i - 1-1) + j - 1-1)+ *(*(p + i - 1-1) + j - 1);
//			}
//			printf("%d ", *(*(p + i - 1) + j - 1));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int sz = sizeof(arr[1]) / sizeof(arr[0][0]);//数组名是整个数组。
//	//printf("%d", sz);
//	triangle(arr,sz);
//	return 0;
//}
//void test(int (*p)[10])
//{
//	int c = *(*(p + 1) + 1);
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	test(arr);
//	test(&arr[0]);
//	return 0;
//}
//void read(char arr[], int k)
//{
//	int ch = 0;
//	int c = 0;
//	while (((ch = getchar()) != '\n') && ch != EOF && c < k)       getchar先抓取，再判断
//	{
//		arr[c] = ch;
//		c++;
//	}
//	arr[c] = '\0';
//}
//int cmp_arr(char* p1, char* p2)
//{
//	int c = 0;
//	while (*(p1 + c) != '\0')
//	{
//		if ((*(p1 + c)) != (*(p2 + c)))
//		{
//			return 0;
//		}
//		c++;
//	}
//	return 1;
//}
//char* left_round(char arr1[],int k)    左旋字符串
//{
//	char arr3[100] = { 0 };
//	strcpy(arr3, arr1 + k);
//	strncat(arr3, arr1, k);
//	strcpy(arr1, arr3);
//	return arr1;
//
//}
//int fin(char arr1[], char arr2[])
//{
//	if (cmp_arr(left_round(arr1, 2), arr2) || cmp_arr(left_round(arr2, 2), arr1))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	read(arr1, 100);
//	read(arr2, 100);
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//left_round(arr1, 3);
//	//printf("%s\n", arr1);
//	int recall = fin(arr1, arr2);
//	printf("%d ", recall);
//	return 0;
//}
//char* find(char arr1[], char arr2[])
//{
//	char tme[999] = { 0 };
//	strcpy(tme, arr1);
//	strcat(tme, arr1);                    左旋 拼接两次必有元素
//	return strstr(tme, arr2);       库函数 看tme有没有arr2
//}
//int main()
//{
//	char arr1[] = "ABCDEF";
//	char arr2[] = "CDEFAB";
//	char* ret = find(arr1, arr2);
//	if (ret != NULL)
//	{
//		printf("find_it");
//	}
//	else
//		printf("do not find_it");
//
//	return 0;
//}
//int main()
//{
//	char killer = 'a';
//	for (killer = 'c'; killer <= 'd'; killer++)   阿斯克码
//	{
//		if ((killer != 'a') + (killer == 'c')+(killer == 'd') + (killer != 'd') == 3)
//			printf("%c", killer);
//	}
//	return 0;
//}
//int day_(int y, int m)
//{
//	int arr[20] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		if (m == 2)
//		{
//			return arr[m] + 1;
//		}
//		return arr[m];
//	}
//	else
//		return arr[m];
//	
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	int ret = day_(year, month);
//	printf("%d", ret);
//	return 0;
//}
//void find_signle(int arr[], int* p1, int* p2, int len)        单身狗2 先确定不同 然后位置在哪，再分类 只是用 2个不同。
//{
//	int tem = 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		tem ^= arr[i];
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((tem >> 1) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*p1 ^= arr[i];
//		}
//		else
//			*p2 ^= arr[i];
//	}
//}
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,1,2,3,4,6 };
//	int num1 = 0;
//	int num2 = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_signle(arr, &num1, &num2, sz);
//	printf("%d %d", num1, num2);
//	return 0;
//}


#include <ctype.h>
#include <assert.h>


//int my_atoi(const char* p)
//{
//	assert(p);
//	while (isspace(*p))
//	{
//		p++;
//	}
//	int f = 1;
//	long long ret = 0;
//	if (*p == '-')
//	{
//		f = -1;
//		p++;
//	}
//	else if (*p == '+')
//	{
//
//		p++;
//	}
//	while (isdigit(*p))
//	{
//		ret = ret * 10 + (*p-'0');      //字符  
//		p++;
//	}
//   
//	if (ret > INT_MAX)
//		ret = INT_MAX;
//	if (ret < INT_MIN)
//		ret = INT_MIN;
//	return (int)(ret*f);     //最后
//}
//int main()
//{
//	char arr[10] = "     123a";
//	int r = my_atoi(arr);
//	printf("%d", r);
//	return 0;
//}