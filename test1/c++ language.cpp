#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#define Day 7


//int main()
//{
//	cout << "hello c++" << endl;
//	int a = 1;
//	cout << "a= " << a << endl;
//	cout << "a week has " << Day << "days" << endl;
//	cout << "short " << sizeof(short) << endl;
//	char ch = 'a';
//	cout << ch << endl;
//	cout << (int)ch << endl;
//	string str = "nt";
//	cout << str << endl;
//	bool num1 = true;
//	cout << num1 << endl;
//	bool num2 = false;
//	cout << num2 << endl;
//
//	system("pause");
//
//	return 0;
//}




//输入
//int main()
//{
//	int a = 0;
//	cout << "please put in a " << endl;
//	cin >> a;
//	cout << "a= " << a << endl;
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int num1 = 10;
//	int num2 = 3;
//	cout << num1 / num2 << endl;
//	double num3 = 10;
//	double num4 = 3;
//	cout << num3 / num4 << endl;
//	cout << (num3 == num4) << endl;     //0为假 非0 为真
//	cout << !num1 << endl;
//	cout << !!num1 << endl;
//	cout << (num1 && num2) << endl;
//	system("pause");
//	return 0;
//}






//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a > b ? a : b;                   //三目运算符
//	cout << "c= " << c << endl;          
//	(a > b ? a : b) = 100;
//	cout << "b= " << b << endl;
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	while (num < 10)
//	{
//		cout << "num = " << num << endl;
//		num++;
//	}
//	system("pause");
//	return 0;
//}




//猜数字
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;//生成0 - 99  +1的数  %后表示范围
//	int cur = -1;
//	cout << "num= " << num << endl;
//	cout << "put in" << endl;
//	cin >> cur;
//	while (cur != num)
//	{
//		if (cur > num)
//			cout << "bigger " << endl;
//		if (cur < num)
//			cout << "smaller " << endl;
//		cin >> cur;
//	
//	}
//	cout << "you get it " << endl;
//	system("pause");
//	return 0;
//}







//敲桌子
//int main()
//{
//	int count = 1;
//	do
//	{
//		if (count % 10 == 7 || count / 10 % 10 == 7 || count % 7 == 0)
//			cout << "count= " << count << endl;
//		count++;
//	} while (count <= 100);
//	system("pause");
//	return 0;
//}




//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	for (num1 = 0;num1 < 10;num1++)
//	{
//		for (num2 = 0;num2 < 10;num2++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}





//乘法表
//int main()
//{
//	for (int i = 1;i < 10;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			cout << j << "*" << i <<"="<< i * j<<" ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}





//int main()
//{
//	for (int i = 0;i < 100;i++)
//	{
//		if (i % 2 == 0)
//			continue;         //continue  跳过后面的语句，直接进行下一次循环
//		cout << i << endl;
//	}
//	system("pause");
//	return 0;
//}





//数组逆置
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	for (int i = 0;i < 5;i++)
//	{
//		cout << arr[i] << endl;
//	}
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0])-1;
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	for (int j = 0;j < 5;j++)
//	{
//		cout << arr[j] << endl;
//	}
//	system("pause");
//	return 0;
//}





//冒泡排序
//int main()
//{
//	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//	for (int i = 0;i < 9 - 1;i++)
//	{
//		for (int j = 0;j < 9 - 1 - i;j++)        //先确定排几轮 再使用确定的轮数去匹配每次排序之后的数组内的改变的问题。
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int y = 0;y < 9;y++)
//		cout << arr[y] << endl;
//	system("pause");
//	return 0;
//}







//struct student
//{
//	string name;
//	int score;
//};
//struct teacher
//{
//	string name;
//	student arr1[5];
//};
//void allocate(teacher arr[], int len)
//{
//	string nameseed = "ABCDEF";
//
//	for (int i = 0;i < len;i++)
//	{
//		arr[i].name = "teacher";
//		arr[i].name += nameseed[i];
//		for (int j = 0;j < 5;j++)
//		{
//			int random = rand() % 60 + 40;
//			arr[i].arr1[j].score = random;
//			arr[i].arr1[j].name = "student";
//			arr[i].arr1[j].name += nameseed[j];
//		}
//	}
//}
//void print(teacher arr[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		cout << arr[i].name<<endl;
//		for (int j = 0;j < 5;j++)
//		{
//			cout << arr[i].arr1[j].name << " ";
//			cout << arr[i].arr1[j].score << endl;
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	teacher ar[3];
//	srand((unsigned int)time(NULL));
//
//	int len = sizeof(ar) / sizeof(ar[0]);
//	allocate(ar, len);
//	print(ar, len);
//	system("pause");
//	return 0;
//}





//代码区 高频共享只读再程序运行之前啊 尚未实践 不理解
//全局区 局部变量都不在全局区 const 字符串 全局变量 static修饰
//栈区  函数 局部变量 由程序自动释放
//堆区 程序员释放 





//int* function()
//{
//	int * p	=	new int(10);     //堆区
//	return p;
//}
//
//
//
//void test1()
//{
//	int* arr = new int[10];              //数组 new的创建与删除
//	for (int i = 0;i < 10;i++)
//	{
//		arr[i] = i + 100;
//		cout << arr[i] << endl;
//	}
//	delete[]arr;                     
//}
//
//
//int main()
//{
//
//	int* p = function();
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//	test1();
//
//	system("pause");
//	return 0;
//}







//引用 取别名。 一起控制。 引用必须初始化 。好像是共享一块空间。一旦初始化不能再更改
//int main()
//{
//	int a = 10;
//	int& b = a;
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	b = 100;
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	system("pause");
//	return 0;
//}




//引用 swap
//void swap(int& a1, int& b1)     //int &a1 =a;???函数传参=
//{
//	int temp = a1;
//	a1 = b1;
//	b1 = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	swap(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	system("pause");
//	return 0;
//}



//int& test()                          //int &  =a???    int * = int *    本质 int & ret =a  ==int * const ret = &a ret =10 ==*ret=10
//{
//	static int a = 10;             //静态区
//	return a;
//}
//
//
//int main()
//{
//	int& ret = test();
//	cout << "ret=		" << ret << endl;
//	cout << "ret=		" << ret << endl;
//	test() = 1000;              //引用做左值
//	cout << "ret=		" << ret << endl;
//	cout << "ret=		" << ret << endl;
//
//	system("pause");
//	return 0;
//}






//函数默认值   如果遇见第一个默认值 后边必须全是默认值  。   函数声明和函数体只能有一个有函数默认值。

//int func(int a, int b = 10)
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << func(20) << endl;
//	cout << func(20,20) << endl;     //覆盖
//
//	system("pause");
//	return 0;
//}








//函数的占位参数 占个位子 必须传相同类型的变量 。也可以有默认值


//void func(int , int = 10)
//{
//	cout << "fool" << endl;
//}
//
//
//
//int main()
//{
//	func(10);
//	system("pause");
//	return 0;
//}







//函数重载  （重复）相同的函数名  当调取的时候 只看 参数的区别 个数 类型 顺序 。保证在同一个作用域下。
//                                不看返回类型.




//void func()
//{
//	cout << "()" << endl;
//}
//void func(int)
//{
//	cout << "(int)" << endl;
//
//}
//void func(double)
//{
//	cout << "(double)" << endl;
//
//}
//void func(int, double)
//{
//	cout << "(int double)" << endl;
//
//}
//void func(double, int)
//{
//	cout << "(double,int)" << endl;
//
//}
//int main()
//{
//	func();
//	func(10);
//	func(3.14);
//	func(3.14, 10);
//	func(10, 3.14);
//	system("pause");
//	return 0;
//}




//引用作为函数重载 const修饰被编译器优化 创建temp &temp收常数。            默认函数 有二义性 func(int a,intb=10) func(int a) func(10)无法区分

//void func(int& a)
//{
//	cout << "(&a)" << endl;
//}
//void func(const int &a)	
//
//{
//
//	cout << "(const int & a)" << endl;
//}
//int main()
//{
//	func(10);
//	int a = 10;
//	func(a);
//	system("pause");
//	return 0;
//}