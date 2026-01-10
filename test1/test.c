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
//int Add(int x, int y)  函数不需要；
//{
//	return (x + y);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);  输入   
//	int sum = Add(n1, n2);    函数换参
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
//extern int add(int x, int y);
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
//	int c = ADD(a, b);
//	int d = add(a, b);
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
//	int sum = add(a, b);
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