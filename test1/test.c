#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
//extern int c;  外面的值
//int main()
//{
//	int b = 100;  申请空间 整形
//	{
//		int a = 20;
//		printf("a=%d\n", a);  起始符，整形， 换行
//		printf("b=%d\n", b);
//		printf("c=%d\n", c);
//	}
//	return 0;
//}
//int main()
//{
//	/*char arr1[] = "ace";  数组 字符串 自带\0    所谓数组 就是数据类型相同的集合。
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr1));  长度 string 一串 lenth
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));*/
//	/*printf("\130");*/   8进制  每个都小于 8   \t 空格 效果大 但只算一个字符 \n换行 一样。 \转义符，'\''='   "\""="  '\\'=\  \a  
// 
//	printf("%c\n", '\x60');  16进制 16的0次方 16 的1次方
//	return 0;
//}
//int main()
//{
//	int input = 0;   给出内存初始化
//	printf("hungry\n");    
//	printf("eat something?(1/0)");   ""都是打印内容	
//	scanf("%d", &input);      给出输入  & 取地址
//	if (input == 1)	     没有 ；
//	{
//		printf("happy\n");		
//	}
//	else
//	{
//		printf("sad\n");
//	}
//	return 0;
//}
//int main()
//{
//	int experience = 0;
//	while (experience <= 1000)   特殊语句 ？ 没有；   <=连着
//	{
//		printf("failure:%d\n",experience);
//		experience++;        ++ 需要；
//	}
//	if (experience >= 1000)
//	{
//		printf("you get it\n");
//	}
//	else
//	{
//		printf("you need study hardly\n");
//	}
//	return 0;
//}
//int agg(int x, int y)  函数不需要；
//{
//	return (x + y);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);  输入   
//	int sum = agg(n1, n2);    函数换参
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9};//                    标记从0开始
//	printf("%d\n", arr1[0]);
//	int i = 0;
//	while (i < 9)
//	{
//		printf("%d\n", arr1[i]);
//		i++;
//	}
//	char arr2[] = { 's','b','y','\0' };                   字符 最后以\0收尾，字符串自带 字符串是高手  
//	int t = 0;
//	while (t <= 2)
//	{
//		printf("%c", arr2[t]);
//		t++;
//	}
//	double arr3[] = { 1.1,2.1,3.1 };           浮点   %f
//	int u = 0;
//	while (u <= 2)
//	{
//		printf("%f\n", arr3[u]);
//		u++;                        记得最后 给出变化
//	}
//	return 0;
//
//}
//void test()
//{
//	static int a = 0;                          静态 局部变量 去了静态区，在编译就给了空间 ，出了作用域不会被销毁 
// 
//	                                              静态 全局   失去了外部链接属性  令全局变量只能在一个文件中使用，保护了  使用权 函数类似 
//	a++;
//	printf("%d\t", a);
//}
//int main()
//{
//	int t = 0;
//	while (t < 10)
//	{
//		test();
//		t++;
//	}
//	return 0;
//}
//extern int acc(int x, int y);
//
//int main()
//{
//	int a = 99;
//	int b = 1;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//void test()
//{
//	static int a = 0;                          //静态 局部变量 去了静态区，在编译就给了空间 ，出了作用域不会被销毁 
// 
//	                                              //静态 全局   失去了外部链接属性  令全局变量只能在一个文件中使用，保护了  使用权 函数类似 
//	a++;
//	printf("%d\t", a);
//}
//int main()
//{
//	int t = 0;
//	while (t < 10)
//	{
//		test();
//		t++;
//	}
//	return 0;
//}
//typedef unsigned int uint;          此类命名  引用不是 函数   需要；
//int main()
//{
//	uint c = 9;
//	printf("%d\n", c);
//	return 0;
//}
//#define GGG 100          define 定义  常数
//int main()
//{
//	int a = 100;
//	int b = GGG;
//	int arr[GGG] = { 1,2,3};
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//#define ADD(x,y) ((x)+(y))        define 定义宏  参数无类型 
//int add(x, y)
//{
//	return (x + y);
//}
//int main()
//{
//	int a = 99;
//	int b = 1;
//	int c = agg(a, b);
//	int d = agg(a, b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	char u = 'y';
//	char* i = &u;       指向的类型  标识  指针变量 i 
//	printf("%p\n", i);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;              指向a *& 一对单目操作符
//	printf("%p\n", p);    p 也是变量  
//	printf("%d\n", a);    a 也是变量
//	return 0;
//}
//int main()
//{
//	printf("%zu\n", sizeof(char));    1
//	printf("%zu\n", sizeof(short));2
//	printf("%zu\n", sizeof(int));4
//	printf("%zu\n", sizeof(long));4               一般 变量 长度
//	printf("%zu\n", sizeof(long long));8
//	printf("%zu\n", sizeof(float));4
//	printf("%zu\n", sizeof(double));8
//	return 0;
//}
//int main()
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));      
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(long*));
//	printf("%zu\n", sizeof(long long*));    都是  8 64位电脑    
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}
//struct PLAY
//{
//	char name[22];
//	int  level;
//	char tele[30];
//};
//void print(struct PLAY* ph)              指针变量也是变量 最好用ph 以免重复 h    结构体 指针   .   (*).   ->  寄存器 只能建议寄存
//{
//	printf("%s %d %s\n", ph->name, ph->level, ph->tele);
//	printf("%s %d %s\n", (*ph).name,(*ph).level,(*ph).tele);
//}
//int main()
//{
//	struct PLAY h = { "sb",99,"232323" };
//	printf("%s %d %s\n", h.name, h.level, h.tele);
//	print(&h);
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	if (money < 100)
//		printf("poor\n");
//	else if (money < 1000)
//		printf("middle");
//	else
//		printf("rich");
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int num1 = num % 2;
//	if (0 == num1)
//		printf("偶数");
//	else
//		printf("奇数");
//	return 0;
//}
	//int main()
	//{
	//	int num = 0;
	//	while (num < 100)
	//	{
	//		num += 1;
	//		if (num % 2 == 1)
	//		   printf("%d\n", num);
	//	}
	//	return 0;
	//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	/*if (day <= 5)
//		day = 1;
//	else
//		day = 2;
//	switch (day)
//	{
//	case 1:
//		printf("weekday\n");
//		break;
//	case 2:
//		printf("weekend\n");
//		break;
//	}*/
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("error");
//		break;
//	}
//
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	while (num < 10)
//	{
//		num += 1;
//		if (5 == num)
//			break;              break  打破 while
//		printf("%d\n", num);
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	while (num < 10)
//	{
//		num += 1;
//		if (5 == num)
//			continue;         continue    跳过后面的 步骤  再继续while循环
//		printf("%d\n", num);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("password\n");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')              输入缓冲区 abc enter 后自带\n  没有消除下一个读取就直接出结果了
//
//	{
//		;	
//	}
//	printf("y/n\n");
//	int a = getchar();
//	
//	if (a == 'y')
//		printf("yes");
//	else
//		printf("no");
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	scanf("%d", &ch);
//	printf("%c", ch);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 73,32,99 };        创建数组时的【】表示空间大小   剩下的是表示第几位，。 arr表示全体。这是求大小。 while就是重复做，一个一个做，
//	int s = sizeof(arr) / sizeof(arr[0]);                    也就是计算机擅长的。
//	int i = 0;
//	while (i <= s)
//	{
//		printf("%c", arr[i]);        
//		i++;
//	}
//
//	return 0;
//}
//struct STU
//{
//	int year;
//	int month;
//	int day;
//
//};
//int main()
//{
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	scanf("%4d%2d%2d", &c, &d, &e);
//	struct STU a = { c,d,e };
//	printf("year=%4d\nmonth=%02d\nday=%02d\n", a.year, a.month, a.day);   取位数。不重要。
//	return 0;
//}
//struct STU
//{
//	int num;
//	int c;
//	int e;
//	int m;
//};
//void print(struct STU* sp)
//{
//	printf("%d %d %d %d", sp->num, sp->c, sp->e, sp->m);
//}
//int main()
//{
//	int r = 0;
//	int a = 0;
//	int b = 0;
//	int v = 0;
//	scanf("%d %d %d %d", &r, &a, &b, &v);
//	struct STU p = { r,a,b,v };
//	print(&p);
//	return 0;
//}
//int main()
//{
//	char a[20] = "0";
//	scanf("%s", a);
//	printf("%s", a);
//	int b = getchar();
//	printf("%c", b);
//	return 0;
//}
//int main()
//{
//	int a = printf("hello world!");     返回值 的赋予
//	printf("\n%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);    比大小 没有利用计算机   变量和   数组   特性版
//	if (a > b && a > c && a > d)
//		printf("%d", a);
//	else if (b > a && b > c && b > d)
//		printf("%d", b);
//	else if (c > a && c > b && c > d)
//		printf("%d", c);
//	else
//		printf("%d", d);
//	return 0;
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int i = 0;
//	int max = 0;
//	while (i < 4)
//	{
//		
//		scanf("%d", &arr[i]);       利用数组下标表示的比大小
//		if (arr[i] > max)
//			max = arr[i];
//		i++;
//		
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int max = 0;
//	int n = 0;
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &n);      利用变量的特性 可以重复赋值      都用了while 反复执行同一个动作；
//		if (n > max)
//			max = n;
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	double r = 0.0;             默认 double
//	scanf("%lf", &r);
//	double v = 0.0;                   float
//	v = ((4.0 / 3) * 3.1415926);
//	int i = 0;
//	double r1 = r;
//	while (i < 2)
//	{
//		r1 = r1 * r;
//		i++;
//	}
//	double v1 = r1 * v;
//	printf("%.3lf", v1);
//	return 0;
//}
//int main()
//{
//	int height = 0;
//	int weight = 0;
//	double h = 0.0;
//	scanf("%d %d", &weight, &height);
//	double b = 0.0;
//	h = 0.01 * height;
//	b = weight / (h * h);
//	printf("%lf", b);
//
//	return 0;
//}
//int  main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;                  continue 跳过后面的语句  i++在for里 与while不太一样。这个差别可以完成一些不一样的东西。
//		printf("%d\n", i);                                    while中 i++在continue后就会无法进行调整
//                                                        while     和 do while 真是一对苦命鸳鸯
//	}
//
//	return 0;
// }
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 3; a++)
//	{
//		for (b = 0; b < 3; b++)
//		{
//			printf("\\\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	do
//	{
//		if (5 == a)
//			continue;
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);       +;   没有加工后续 陨落 。
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0, b = 0; a < 10 && b < 8; a++, b++)  只能一次打印一个变量？
//
//	{
//		printf("%d", a);
//		printf("%d ", b);
//
//	}
//	return 0;
// }
//void test()
//{
//	printf("hehe");
//}
//int main()
//{
//	printf("xixi\n");
//	test();
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int c = 1;
//	for(a=1; a <= n; a++)
//			c = c * a;
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int n = 0;
//	int a = 0;
//	int d = 0;
//	while (arr[n] <= 10)
//	{
//		int c = 1;
//		for (a = 1; a <= n + 1; a++)           最初尝试 1到10 的阶乘
//		{
//			c = c * a;
//		}
//		d = d + c;
//		printf("%d\n", d);
//		n++;
//			
//	}
//
//	return 0;
//}
//int main()
//{
//	int n = 10;
//	int i = 0;
//	int a = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)      1 到10 的阶乘 类似的叠加问题 都是自我指涉的问题。
//	{
//		 a = a * i;
//		 sum = sum + a; 
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//
//		int c = 1;
//		for (a = 1; a <= n; a++)                更一般的
//		{
//			
//			c = c * a;
//
//		}
//		sum = sum + c;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 10;
//	int c = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)              自我指涉与变量范围
//	{
//		c = c * i;
//		sum = sum + c;
//		}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//int left = 0;
//int right = sizeof(arr) / sizeof(arr[0]) - 1;
//int g = 17;
//while (left <= right)
//{
////int mid = (left + right) / 2;
//	int mid = (right - left) / 2 + left;
//if (arr[mid] < g)                          //二分查找法   用于 有序数组 。重新定义左右 刷新中的定义 循环
//		left = mid + 1;
//else if (arr[mid] > g)
//		right = mid - 1;
//else
//{
//		printf("ok");
//		break;
//}
//}
//if (left > right)
//	printf("it's not here");
//	return 0;
//}
#include <Windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] = "123456789";
//	char arr2[] = "!!!!!!!!!";
//	int left = 0;
//	int right = strlen(arr1) - 1;             字符串长度 -1.从0开始标   sizeof(arr1)/size(arr1[0])-2 字符串有隐藏的\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	printf("password\n");
//	char arr[22] = "";
//	char arr1[] = "12345";
//	int a = 0;
//	for (a = 0; a < 3; a++)
//	{
//		scanf("%s", arr);
//		int left = 0;
//		for (left = 0; left <= 4; left++)      123456 也对 快使用strcmp
//		{
//			if (arr[left] == arr1[left])
//				left = left;
//			else
//				break;
//		}
//		if (left == 5)
//			printf("welcome");
//		else
//			printf("try again");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char arr[22] = { 0 };
//	printf("password");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0)
//		{
//			printf("welcome");
//			break;
//		}
//		else
//			printf("err\n");
//	}
//	if (i == 3)
//		printf("err");
//	return 0;
//}
//int main()
//{
//	char arr[] = { '1','2','3','4'};
//	int b = strlen(arr);
//	int c = sizeof(arr) / sizeof(arr[0]);    strlen 只能用于 char 类型 如果读int \0就会停  “”自带 \0 sizeof会多读一个  
//	printf("%d\n", b);
//	printf("%d", c);
//	return 0;
//}
//int get_max(int e, int f)
//{
//	int g = (e > f ? e: f);
//	return g;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = get_max(a, b);
//	printf("%d", c);
//	return 0;
//}
//void swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("a=%d,b=%d\n", a, b);
// swap(a,b);err.                      ab是实参，xy是形参，都有独立的位置，把值传过去交换但并没有影响 ab。使用地址 然后解地址修改。
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
#include <math.h>
//int test(int a)
//{
//	int b = 0;
//	for (b = 2; b <= sqrt(a); b++)         b*b <= a 避免浮点   
//	{
//		if (a % b == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int c = 1;
//	int count = 0;
//	for (c = 101; c <= 200; c += 2)
//	{
//		if (test(c))
//		{
//			count++;
//			printf("%d ", c);
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}
//int leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int search(int arr1[], int c, int szz)
//{
//	int left = 0;
//	int right = szz - 1;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (arr1[mid] < c)
//		{
//			left = mid + 1;
//		}
//		else if (arr1[mid] > c)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{ int search(int arr1[], int c, int szz)
//	int left = 0;
//	int right = szz - 1;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (arr1[mid] < c)
//		{
//			left = mid + 1;
//		}
//		else if (arr1[mid] > c)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };            arr[20] 多出的空间会变成 0  导致无序。
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, k, sz);            数组传参只传首元素地址    上面的 arr1[] 是指针
//	printf("%d", ret);
//	return 0;
//}

//void test(int* pn)
//{
//	*pn =  *pn + 1;
//	(*pn)++;
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 45)));  4521 .printf的返回值是字符个数。
//
//	return 0;
//}
//void test1()
//{
//	printf("hehe\n");
//}
//void test2()
//{
//	printf("hehe\n");
//	test1();
//	test1();
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = agg(a, b);
//	printf("%d", sum);
//	return 0;
//}
//void print(unsigned int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);         递  归。 确定结束条件，传的值越来越接近那个条件。把大问题 拆解成一个一个类似的问题
//	}
//	printf("%d ", a % 10);
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);
//	print(a);
//	return 0;
//}
//int my_strlen(char* p)       指针接收第一个 地址  是地址
//{
//	int count = 0;
//	while (*p != '\0')                  解 指针  指向
//	{
//		count++;              
//		p++;                        指针下一位
// }
//	return count;
//}
//int main()
//{
//	char arr[] = "adcdef";
//	int a = my_strlen(arr);       字符传的是第一个元素的地址
//	printf("%d", a);
//	return 0;
//}
//int _str(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + _str(p + 1);       结束条件   参数变化以及   夹带尾巴的叠加   的 递归。
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "123456789";
//	int len = _str(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int fal(int c)
//{
//	if (c <= 1)
//		return 1;
//	else
//		return c * fal(c - 1);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c =fal(n);
//	printf("%d\n", c);
//	return 0;
//}
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c =fib(n);
//	printf("%d", c);
//	return 0;
//}
//int d = 0;
//void quest(int n)
//{
//	d++;
//	
//	if (n == 1)
//	{
//		return;
//	}
//	quest(n - 1);
//	quest(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	quest(n);
//	printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	int arr[][5] = { 1,2,3,4,5,6,7,8,9,10};      二维数组就是一维数组的数组。
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	i = 0;
//	j = 0;
//	for (i = 0; i <5; i++)
//	{
//		for (j = 0; j <2; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[2][5] = { {1,2,3,4,5},{6,7,8,9,10} };    生成规定大小
//	int j = 0;
//	int  i= 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);            使用规定位置   直接arr传地址     变长数组是可以自己规定大小的数组，不能初始化。
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	arr[n];
//	int o = 0;
//	for (o = 0; o < n; o++)
//	{
//		arr[o] = o;
//		printf("%d ", arr[o]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "xxxxxxxxx";
//	char arr2[] = "123456789";
//	int left = 0;
//	//int right = (sizeof(arr1) / sizeof(arr1[0]))-2;  //字符串自带\0   sizeof是算大小    字符串长度就是字符数 数到\0之前
//	int right = strlen(arr1) - 1;
//	printf("%d\n", right);
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr1);
//	}
//	return 0;
//}
//void test1(int* pa, int a)
//{
//	int c = 0;
//	for (c = 0; c <= a - 1; c++)
//	{
//		(*pa) = -1;
//		pa=pa + 1;
//	}
//}
//void test2(int * pz,int sz)  // int *pz [5],    arr[][5];
//{
//	int i = 0;
//	while (i <= sz - 1)
//	{
//		printf("%d\n", *pz);
//		i++;
//		pz = pz + 1;
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,-1,-2 };
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	//test1(arr, sz);
//	test2(&arr[0][0], sz);
//	return 0;
//}
//int get_day(int a, int b)
//{
//	int arr[20] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (((a % 4 == 0) && (a % 100 != 0)||(a%400==0)) && b == 2)
//	{
//		return 29;
//	}
//	else
//	{
//		return arr[b];
//	}
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	int day =get_day(year, month);
//	printf("%d", day);
//	return 0;
//}
#include <stdbool.h>

//bool test(int a)
//{
//	if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
//	{
//		return true;
//	}
//	else
//		return false;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (test(year))
//		printf("leap year");
//	else
//		printf("err");
//	return 0;
//}
//int agg(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1;
//	int c = 2;
//	int g = agg(a, c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	char c = '0';
//	short d = 2;
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 9; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;

//int fal(int x)
//{
//	if (x > 1)
//	{
//		int i = 1;
//		int sum = 1;
//		for (i = 1; i <= x; i++)
//		{
//			sum = sum * i;
//		}
//		return fal(x - 1) + sum;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int sums = 0;
//	int g = 10;
//	for (i = 1; i <= 3; i++)
//	{
//		sum = sum * i;
//		sums = sums +sum;
//	}
//	printf("\n%d", sums);
//	int c = fal(g);
//	printf("\n%d", c);
//	return 0;
//}
//void test(int a)
//{
//	if (a >= 1)
//	{
//		test(a / 10);
//		printf("%d\n", a % 10);
//	}
//
//}
//int main()
//{
//	int a = 1234;
//	test(a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("fool");
//	}
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 022);//  8
//	printf("%d\n", 0xff);//16
//	int c = 20;
//	//00000000000000000000000000010110  原码   第一位0代表正数       无符号全是大小
//	//00000000000000000000000000010110  反码
//	//00000000000000000000000000010110  补码
//	int y = -20;
//	//10000000000000000000000000010110  原码          第一位1表示负数后面是 大小
//	//11111111111111111111111111101001 反码     除符号位 取反
//	//11111111111111111111111111101010  补码   加一     回去 减一取反  或取反加一       内存中存补码进行计算   显示是原码
//	int d = (c << 1);    //二进制的原因 乘以2的效果 左移左边抛弃右边补0         操作补码
//	printf("c=%d", c);
//	printf("\nd=%d", d);
//	int x = (y >> 1);         //算数右移  左边补了原来的符号  1
//	printf("\ny=%d", y);
//	printf("\nx=%d", x);
//	return 0;
//}
//int main()
//{
//	int a = 30;                        都是在补码的基础上操作。
//	int b = 10;
//	printf("a=%d b=%d\n", a, b);       ^ 异或 相同为0 相异为1  任何数异或0都是本身。异或自己都是0  高阶 不溢出交换 但只能整数
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 30;
//	int b = 10;
//	printf("a=%d b=%d\n", a, b);          存储变量 交换 溢出风险
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 30;
//	int b = 10;
//	int c = a & b;                  &  只要有一个0 就是 0。      10
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a = 30;
//	int b = 10;
//	int c = a | b;                |  只要有一个1 就是1。           30
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a = 30;
//	int b = 10;
//	int c = ~a;              ~ 0变1 1变0。
//	printf("%d", c);
//	return 0;
//}
//int get_bit_1(int x)
//{
//	int c = 0;
//	int count = 0;
//	if (x != 0)
//	{
//		for (c = 0; c < 32; c++)
//		{
//			if (((x >> c) & 1) == 1)
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}
//int get_bit_1(int x)
//{
//	if (x != 0)
//	{
//		return get_bit_1((x - 1) & x) + 1;      递归思路 扔回去一个表达式，   二进制-1在&原来的就能消除1位数
//	}
//	else
//		return 0;
//}

//int get_bit_1(int x)
//{
//	int c = 0;
//	while (x)
//	{
//		x = x & (x - 1);
//		c++;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c = get_bit_1(n);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int n = 13;
//	n |= (1 << (5 - 1));
//	printf("%d\n", n);
//	n &= ~(1 << (5 - 1));      只要有0就0.  ~全部相反。
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int a = 17;
//	int c = 1;
//	while (a = ((a-1)&a), a !=0)
//	{
//		c++;
//	}
//	printf("%d", c);
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	float score;
//};
//struct pp
//{
//	struct stu pp[10];
//	int mark;
//};
//int main()
//{
//	struct stu p1 = { "jack",88.5f };
//	struct stu p2 = { .score = 99.5f,.name = "mei" };
//	printf("%s\n", p1.name);
//	printf("%f\n", p1.score);
//	printf("%s\n", p2.name);
//	printf("%f\n", p2.score);
//	struct pp pc = { {{"bb",77.7f},{"aa",66.6f}},2 };
//	printf("%s\n", pc.pp[1].name);               0 1 结构体是储存不同变量的数组。  数组是储存统一类型元素的集合。
//	return 0;                                        结构体嵌套结构体， 创建名字 大小 。   访问位置  也是元素。
//}
//int main()
//{
//	char a = 20;            cpu运算为int  char接受会被砍掉  补码运算 正数高位补0 负数补1   -116
//	char b = 120;     
//	char c = a + b;
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int* pa = &a;            我思考问题基础不清晰 框架不规范 没有一次只问一个问题。 而且问的模糊，没写出来 。
//	*pa = 0;                 cpu如何能够找到某个地址。原来是造内存的时候就创建了固定的线，像钢琴一样。   不必记录每一个地址。
//	printf("%d", a);             取地址 存起来是给 使用者用的，方便再次访问。 地址固定为起始 无论内容是arr也好，char也好。64根线64bit8字节。
//	return 0;                     32根线32bit4字节。
//}
//int main()
//{
//	int a = 0x11112233;
//	int b = a;
//	int* pa = &a;
//	char* pb = &b;
//	*pa = 1;
//	int c = 0;
//	for (c = 0; c <= 2; c++);           //类型决定读几位，移动几位。void 空 无法加减 和解
//	{
//		*pb = 1;
//		pb = pb + 1;
//	}
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int c = 0;
//	for (c = 0; c <= 9; c++)
//	{
//		/*printf("%d ", *p);
//		p = p + 1;*/
//		printf("%d", *(p + c));
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "happy new year";
//	char* p = &arr[0];
//	while (*p != '\0')
//	{
//		printf("%c", *p);
//		p++;
//	}
//	return 0;
//}
//size_t test(char* p)
//{
//	/*size_t i = 0;
//	while (*p != '\0')
//	{
//		i++;
//		p++;
//	}
//	return i;*/
//	char* s = p;
//	while (*p)
//	{
//		p++;
//	}
//	return p - s;      '\0'的值是0；指针相减是之间的元素。只能在相同空间。
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int c = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("%d\n", c);
//	
//	printf("%zu\n", test(arr));
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int* p = arr;
//	while (p < arr + 4)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	const int a = 10;
//	const int*  const p = &a;     const放前面锁 解引，无法通过（*p）改变a。放后面锁地址，指针变量不能再指向其他的地方。
//  const int * p = &a;      p =&b;  ok   (*p) = 20; err           
//  int * const p = &a;      (*p)= 20;ok    p = &b;err
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 100;
//	const int* p = &a;          const就是无法直接通过引用变量改变的意思 比如 a= 20；  但是直接改地址，指向的内容就变了。
//	printf("a=%d", *p);
//	p = &b;
//	printf("\n%d", *p);
//	return 0;
//}
//int* test()
//{
//	int n = 100;
//	return &n;
//
//}
//int main()
//{
//	int* p;       野指针 未初始化
//	int arr[3] = { 1,2,3 };
//	int* c = arr;
//	*(c + 3) = 0;           越界访问
//	int* d = test();         空间已经被释放
//	int* g = NULL;             NULL拴住野指针 初始化
//	char arr1[] = "abc";
//	void* k = arr1;         空接
//	return 0;
//}
//#define NDEBUG
//#include <assert.h>            不动手不知道，
//int main()
//{
//	int a = 100;
//	int* pa = &a;
//	assert(a == 200);
//	printf("%d", a);
//	return 0;
//}
#define NDEBUG
#include <assert.h>
//size_t str(const char* pa)
//{
//	size_t count = 0;
//	assert(pa != NULL);
//	while (*(pa+count) != '\0')          实现逻辑是指针之间的元素。而不是检查一个写一个。
//	{
//		count++;
//
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "23786098";
//	size_t p = str(arr);
//	printf("%zu", p);
//	return 0;
//}
//void test(int* x, int* y)
//{
//	int c = 0;
//	c = *x;
//	*x = *y;
//	*y = c;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	test(&a,&b);
//	printf("a=%d", a);
//	printf("b=%d", b);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(arr));  16          特殊情况 arr取得是整个数组
//	printf("%zd\n", sizeof(arr[0]));4
//	printf("&arr[0]    =%p\n", &arr[0]);
//	printf("&arr[0]+1  =%p\n", &arr[0]+1);
//	printf("arr        =%p\n", arr);
//	printf("arr+1      =%p\n", arr+1);
//	printf("&arr       =%p\n", &arr);          特殊情况&arr是整个数组。正好有四个元素，又是int类型。+1跳了16字节又是16进制。+2是再第二位加2
//	printf("&arr+1     =%p\n", &arr+1);                                                         也就是32字节
//	printf("&arr+2     =%p\n", &arr + 2);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//scanf("%d", pa + i);          高雅代码  【】只是一个操作符号，和  +  一样 一个地址，一个下标
//		//scanf("%d", arr+i);            arr 单独指地址
//		//scanf("%d", &arr[i]);
//		//scanf("%d", &pa[i]);
//
//		//scanf("%d", &i[arr]);
//		//scanf("%d", &i[pa]);
//
//		//printf("%d\n", *(pa + i));
//		//printf("%d\n", *(arr+i));
//		printf("%d\n", arr[i]);
//
//	}
//	
//	return 0;
//}
//void test(int arr[1][3]) (int (*p)[3]) 这不是指针 数组。  是数组指针。。
//{
//	int sz1 = sizeof(arr[1]) / sizeof(arr[1][0]); int sz1 = sizeof(*p) / sizeof((*p)[0]);  等价     //二维数组*p相当于打开了一个包裹。
//	printf("%d\n", sz1);
//}
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	printf("%d\n", *p); arr[0]
//	printf("%d\n", sz);
//	test(&arr);
//	return 0;
//}
//void bubble_arr(int* p,int sz);
//int main()
//{
//	int arr[10] = { 3,2,5,6,8,9,0,11,32,54 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_arr(arr,sz);
//	int c = 0;
//	for (c = 0; c < 10; c++)
//	{
//		printf("%d ", arr[c]);
//
//	}
//	return 0;
//}
//void bubble_arr(int* p,int sz)
//{
//	int i = 0;
//	int count = 0;
//	int c = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		c = 0;
//		for (j = 0; j < sz -1- i; j++)
//		{
//			if (p[j] > p[j + 1])
//			{
//				c = 1;
//				count++;
//				p[j] = p[j] ^ p[j + 1];
//				p[j + 1] = p[j] ^ p[j + 1];            高雅人士 倾情奉献。
//				p[j] = p[j + 1] ^ p[j];
//			}
//		}
//		if (0 == c)
//		{
//			break;
//		}
//		
//	}
//	printf("\n%d\n", count);
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;           二级指针 指针变量的地址。
//	a = 100;
//	printf("%d", *(*ppa));   
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int c = 20;
//	int d = 30;
// int * pa = &a;
// int * pc = &c;
// int * pd = &d;
//	int* arr[3] = { &a,&d,&c};       指针 数组  储存指针的数组 。
//  int* pa[3]   = {&a，&d     等效   指针 数组
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 3,4,5 };
//	int arr3[] = { 5,6,7 };
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abc";      arr特殊状态 创建数组 还是 首元素地址。
//	const char* pc = "ace";     内容无法修改。  
//	/* *pc = 'w';  错误 无法被修改 无效
//	 printf("%c ", *pc);*/
//	printf("%s ", pc); 等效  直接输入首元素地址
//	printf("%s ", arr);
//
//	return 0;
//}
//int main()
//{
//	const char* pa = "abc";   是同一个常量字符串 不会重复创建 地址（指针）变量内容指向同一个 ‘a’的地址
//	const char* pc = "abc";   如果是arr【】可变数组，就arr1 arr2包含的地址就不同。
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*pa)[10] = &arr;
//	printf("%p ", pa);
//	printf("%p ", pa+1); 差40
//
//	return 0;
//}