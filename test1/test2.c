#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
//int c = 1000;
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1,&num2);
//	int sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#define max "gisjkw"
//enum x
//{
//	G,
//	H,
//	J
//};
//int main()
//{
//	const int c = 100;
//	printf("%d\n", c);
//	printf("%s\n", max);
//	return 0;
//}
//int main()
//{
//	printf("Name Age Gender\n");
//	printf("-------------------\n");
//	printf("Jack 18 man\n");
//	return 0;
//}
//int main()
//{
//	char arr[4] = { '1','2','3' };4       默认最后一个为\0填3不确定
//	printf("%d\n", strlen(arr));      这是求长度     与标识符号不同  
//	return 0;
//}   int n = 3        int arr[n] = {0}  变长数组不能初始化    概念比较薄弱   数组是一个类型 字符串也算 "dgysgd"
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	if (n1 > n2)
//	{
//		printf("%d", n1);
//	}
//	else
//	{
//		printf("%d", n2);
//	}
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int n = 0;
//	int b = 0;
//	scanf("%d %d", &n, &b);
//	int lager = MAX(n, b);
//	printf("%d", lager);
//	return 0;
//}
//int G(int x)
//{
//	if (x >= 0)
//	{
//		if (x == 0)
//			return 0;
//		else
//			return -1;
//	}
//	else
//		return 1;
//	
//	
//}
//int G(int x)
//{
//	if (x < 0)
//		return 1;
//	else if (x == 0)   操作if是一分为二  多
//		return 0;
//	else
//		return -1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int h = G(n);
//	printf("%d\n", h);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b); 
//	int c = 0;
//	if (!c)                           逻辑反义
//	{
//		printf("hehe\n");
//	}
//	int z = 1;
//	int x = 0;
//	if (z && x)                  并
//	{
//		printf("nb\n");     
//	}
//	if (z || x)                或
//	{
//		printf("gg\n");
//	}
//	int arr[5] = { 1,2,3,4,5};          【】数组创建
//	int v = 2;
//	printf("%d\n", arr[v]);              【】 数组引用
//	printf("%zu\n", sizeof(arr[5])/sizeof(arr[0]));      求空间大小 单位字节 
//	int n = -v;
//	printf("%d\n", n);
//	int m = 0;
//	while (m < 20)
//	{
//		printf("%d\n", m);
//		m += 3;
//	}
//	float s = 10.0 / 3;
//	int d = 10 / 3;                整3
//	int f = 10 % 3;                余下1
//	printf("%f\n", s);
//	printf("%d\n", d);
//	printf("%d\n", f);
//	int g = 9;
//	int h = 20;
//	int j = (9 > 20 ? 9 : 20);             比大小 真真假  返回2 假假真  返回3
//	printf("%d\n", j);
//	if (g != 10)
//	{
//		printf("wc");
//	}
//	int k = 0;
//	if (!k)
//	{
//		printf("本身验证真假，！只是逻辑反义\n");
//	}
//	int l = (k = k + j, k += 3);       最后结果 变量    
//	printf("%d\n", l);
//	return 0;
//}
//static int add(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	scanf("%d %d", &a,&b);    输入记得&&
//	int c = a / b;
//	int d = a % b;    可以不用（）
//	printf("%d\t %d", c,d);
//	return 0;
//}