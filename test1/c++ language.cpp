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





//类 对象和行为

//const double P = 3.14;
//
//class Circle
//{
//public:
//	int r;
//	double circumference()
//	{
//		return 2 * P * r;
//	}
//};
//
//int main()
//{
//	Circle c1;
//	c1.r = 10;
//	cout << c1.circumference() << endl;
//	system("pause");
//	return 0;
//}





//class Student
//{
//public:
//	string name;                             
//	string number;
//	void print()
//	{
//		cout << name << endl;
//		cout << number << endl;
//	}
//	void setname(string Name)
//	{
//		name = Name;
//	}
//	void setid(string id)
//	{
//		number = id;
//	}
//};
//
//int main()
//{
//	Student s1;
//	s1.name = "jojo";
//	s1.number = "114514";
//	s1.print();
//	Student s2;
//	s2.setname("dio");
//	s2.setid("114514");
//	s2.print(	);
//	system("pause");
//	return 0;
//}



//权限 public class内外都可以访问 protected private class内可以访问 外可以访问。

//class默认私有权限 struct 默认公共权限。



//使用 public和private控制class外读 和写的权限




//class person
//{
//public:     //可操作区
//	void setname(string name)
//	{
//		Name = name;
//	}
//	string getname()
//	{
//		return Name;
//	}
//	void setage(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "wrong input" << endl;
//			return;
//		}
//		Age = age;
//	}
//	void setidol(string idol)
//	{
//		Idol = idol;
//	}
//
//private:                     //私域
//	string Name;  //可读可写
//	int Age = 19; //只写
//	string Idol;//只写
//};
//
//int main()
//{
//	person p1;
//	p1.setname("xiaoming");
//	cout << p1.getname() << endl;
//	p1.setage(100);
//	p1.setidol("caixukun");
//	system("pause");
//	return 0;
//}






//class Cube
//{
//public:
//	void setele(int a, int b, int c)
//	{
//		c_l = a;
//		c_w = b;
//		c_h = c;
//	}
//	int getarea()
//	{
//		return c_l * c_h * 2 + c_l * c_w * 2 + c_h * c_w * 2;
//	}
//	int getvolume()
//	{
//		return c_l * c_h * c_w;
//	}
//	int getl()
//	{
//		return c_l;
//	}
//	int getw()
//	{
//		return c_w;
//	}
//	int geth()
//	{
//		return c_h;
//	}
//	bool issame(Cube& c1)
//	{
//		if (c_l == c1.getl() && c_w == c1.getw() && c_h == c1.geth())            //类内判断是否相同 可直接访问自己的private
//			return true;
//		else
//			return false;
//	}
//private:
//	int c_l;
//	int c_w;
//	int c_h;
//};
//
//
//bool issame(Cube& c1, Cube& c2)                                //类外判断
//{
//	if (c1.geth() == c2.geth() && c1.getl() == c2.getl() && c1.getw() == c2.getw())
//		return true;
//	return false;
//}
//
//int main()
//{
//	Cube c1;
//	c1.setele(10, 10, 10);
//	cout << c1.getarea() <<"  "<< c1.getvolume() << endl;
//	Cube c2;
//	c2.setele(10, 10, 10);
//	bool ret = issame(c1, c2);
//	if (ret)
//	{
//		cout << "same" << endl;
//	}
//	else
//	{
//		cout << "diff" << endl;
//	}
//	bool ret1 = c1.issame(c2);
//	if (ret1)
//	{
//		cout << "same" << endl;
//	}
//	else
//	{
//		cout << "diff" << endl;
//	}
//	system("pause");
//	return 0;
//}




//构造函数 有参数所以可以重载 不需要返回值，初始化自动调用 不写自动空实现
// 析构函数 无参数     不      1           摧毁前        1；~

//class Person
//{
//public:
//	Person()
//	{
//
//		cout << "114" << endl;
//	}
//	~Person()
//	{
//		cout << "514" << endl;
//	}
//};
//void test()              //栈区
//{
//	Person a;
//}
//int main()
//{
//	test();
//	Person b;
//	system("pause");
//	return 0;
//}




//构造函数的重载 拷贝 拷贝的三种时机 值的传参 值的返回 值的复制
// 
// 编译器默认提供 默认构造 有参构造和拷贝构造（值拷贝）
// 如果自己提供了有参  就不提供默认构造
// 如果自己提供了拷贝 就不提供其他构造
//class Person
//{
//public:
//	Person()
//	{
//		cout << "start " << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "int a " << endl;
//	}
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "const person & p " << endl;
//	}
//	~Person()
//	{
//		cout << "end " << endl;
//	}
//	int age=0;
//};

//void test()
//{
//	Person p1;          //直接调用默认构造  括号法 Person p1 = Person(10) 显示法 Person p1=10隐式法
//	Person p2(10);
//	Person p3(p2);
//}
// 
// 
// 
// 
//void work01(Person p)
//{
//	return;
//}
//void test01()
//{
//	Person p1;
//	work01(p1);
//}




//Person work02()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;         //被优化 了 看不到拷贝函数的调用
//	return p1;
//}
//void test02()
//{
//	Person p = work02();
//	cout << (int*)&p << endl;
//
//	return;
//}
//
//
//int main()
//{
//	//test();
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}





//编译器默认浅拷贝 当有堆的时候需要进行深拷贝

 

//class Person
//{
//public:
//	Person()
//	{
//		cout << "start" << endl;
//	}
//	Person(int a,int b)
//	{
//		age = a;
//		height=new int(b);         //属性在堆上
//	
//	}
//	Person(const Person& a)
//	{
//		age = a.age;
//		height = new int(*a.height);
//
//	}
//	~Person()
//	{
//		if (height != NULL)
//		{
//			delete height;           //浅拷贝只是复制了指针变量 出栈会释放两次
//			height == NULL;   
//		}
//	}
//
//	int age;
//	int* height;
//};
//
//
//int main()
//{
//	Person a(10,160);
//	Person b(a);
//	cout << *(b.height) << endl;
//	system("pause");
//	return 0;
//}




//初始化列表

//class Person
//{
//public:
//	Person(int a, int b, int c) :A(a), B(b), C(c)
//	{
//
//	}
//	int A;
//	int B;
//	int C;
//};
//int main()
//{
//	Person a(10, 20, 30);
//	cout << a.A << a.B << a.C << endl;
//	system("pause");
//	return 0;
//}




//class Phone
//{
//public:
//	Phone(string a) :Brand(a)
//	{
//		cout << "phone start" << endl;
//	}
//	string Brand;
//	~Phone()
//	{
//		cout << "phone end" << endl;
//	}
//};
//
//
//
//
//class Person
//{
//public:
//	Person(string a, string b) :Name(a), brand(b)// Phone a(b) 编译器优化
//	{
//		cout << "person start" << endl;
//	}
//	~Person()
//	{
//		cout << "person end" << endl;
//	}
//	string Name;
//	Phone brand;
//};
//
//
//
//void test()
//{
//	Person a("kiki", "iphone");
//	cout << a.Name << " have " << a.brand.Brand << endl;   //当a class包含b class，b class先创造，后析构。 打印字符串a.brand.Brand
//}
//
//
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}






//静态成员 对象共享。 类内声明 ，类外初始化，在编译阶段分配空间   只有一份  只有一份
//静态函数 对象共享同一个。只能访问静态成员，因为不知道修改哪一个非静态变量。可以通过对象和类进行访问。都有权限public和private

//class Person
//{
//public:
//	static int age;
//	static void func()
//	{
//		age = 100;
//		cout << "static func" << endl;
//	}
//};
//int Person::age = 10;
//
//void test01()
//{
//	Person a;
//	cout << a.age << endl;
//	Person b;
//	b.age = 20;
//	cout << a.age << endl;
//	cout << Person::age << endl;    //访问方式 对象和类都可访问
//
//	a.func();
//	Person::func();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}






//只有非静态变量在类的对象上。 函数 静态函数 静态变量都不在。空的类大小为一，编译器留个位置好标记，如果有int则是4.覆盖了标记

//class Person
//{
//public:
//	int a;
//	static int y;
//	void func()
//	{
//
//	}
//	static void func2()
//	{
//
//	}
//};
//int Person::y = 0;
//
//
//void test01()
//{
//	Person p;
//	cout << "sizeof p =" << sizeof(p) << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//this 指向 调用 函数 的类的对象。*this指向对象 return一个值只是寄存器暂时的一个值 this会不显示的在属性前面 this->age

//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//	Person& func(Person& p)
//	{
//		age += p.age;
//		return *this;           //*this返回这个对象，person&固定了不创造新的对象。
//	}
//	int age;
//};
//
//void test()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.func(p1).func(p1).func(p1).func(p1);
//	cout << p2.age << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//NULL也能调用函数 小心隐藏的this指针
//class Person
//{
//public:
//	void show()
//	{
//		cout << "fool" << endl;
//	}
//	void showage()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << this->Age << endl;
//	}
//	int Age;
//};
//
//int main()
//{
//
//	Person* p = NULL;
//	p->showage();
//	p->show();
//	system("pause");
//	return 0;
//}




//常函数不能改变一般变量。 mutable关键字变量可以修改。 常对象只能调用常函数。 因为普通函数可以修改属性

//class Person
//{
//public:
//	void func1()
//	{
//		int b = 19;
//	}
//	void func() const
//	{
//		this->c = 10;
//		//b = 10;报错
//	}
//	int b;
//	mutable int c;
//};
//
//int main()
//{
//	const Person p;
//	p.func();//无法调用普通函数
//	system("pause");
//	return 0;
//}





//friend 友元  可以访问private   全局函数访问 private

//class Home
//{
//	friend void goodfriend(Home& a);
//public:
//	Home()
//	{
//		room1 = "sittingroom";
//		room2 = "bedroom";
//	}
//	string room1;
//private:
//	string room2;
//};
//
//void goodfriend(Home & a	)
//{
//	cout << "friend is visiting " << a.room1 << endl;
//	cout << "friend is visiting " << a.room2 << endl;
//
//
//}
//
//
//int main()
//{
//	Home p;
//	goodfriend(p);
//	system("pause");
//	return 0;
//}


//  友元 类内成员访问 private

//class Building
//{
//	friend class master;
//public:
//	Building();
//
//	string room1;
//private:
//	string room2;
//};
//
//
//Building::Building()
//{
//	room1 = "sittingroom";
//	room2 = "bedroom";
//}
//
//class master
//{
//public:
//	master();
//	void test();
//
//	Building* key;
//
//};
//master::master()
//{
//	key = new Building;
//}
//
//void master::test()
//{
//	cout << "kiki has " << key->room1 << endl;
//	cout << "kiki has " << key->room2 << endl;
//
//}
//int main()
//{
//	master kiki;
//	kiki.test();
//	system("pause");
//	return 0;
//}






//友元  类内函数  void xxx::func(){};

//class house;
//class master
//{
//public:
//	master();
//	void visit01();
//	void visit02();
//private:
//	house* key;
//};
//
//class house
//{
//	friend void master::visit01();          //友元 类内函数
//public:
//	house();
//	string room1;
//private:
//
//	string room2;
//};
//
//house::house()
//{
//	room1 = "sittingroom";
//	room2 = "bedroom";
//}
//master::master()
//{
//	key = new house;
//}
//
//void master::visit01()
//{
//	cout << "kiki has		" << key->room1 << endl;
//	cout << "kiki has		" << key->room2 << endl;
//
//}
//void master::visit02()
//{
//	cout << "kiki has		" << key->room1 << endl;
////	cout << "kiki has		" << key->room2 << endl;        //无法访问
//
//}
//
//void test()
//{
//	master kiki;
//	kiki.visit01();
//	kiki.visit02();
//}
//
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}








//运算符重载 自定义类型之间的运算操作。还能发生函数重载，使用参数不同。 加号。

//成员内重载  全局函数重载

//class Person
//{
//public:
//	//Person operator+(Person& p)
//	//{
//	//	Person temp;
//	//	temp.m_age = this->m_age + p.m_age;
//	//	temp.m_height = this->m_height + p.m_height;
//	//	return temp;
//	//}
//
//
//	int m_age;
//	int m_height;
//};
//
//Person operator+(Person& p1, int x)          //运算符重载只能有两个参数。 放在类内自动包含 this。
//{
//	Person temp;
//	temp.m_age = p1.m_age + x;
//	temp.m_height = p1.m_height + x;
//	return temp;
//
//}
//
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_age = p1.m_age + p2.m_age;
//	temp.m_height = p2.m_height + p1.m_height;
//	return temp;
//}
//
//int main()
//{
//	Person p1;
//	p1.m_age = 18;
//	p1.m_height = 180;
//	Person p2;
//	p2.m_age = 18;
//	p2.m_height = 180;
//	Person p3 = p1 + p2;//Person p3= operator+(p1,p2)    =  p2.operator(p1)
//	cout << p3.m_age << "  " << p3.m_height << endl;
//	Person p4 = p3 + 10;
//	cout << p4.m_age << "  " << p4.m_height << endl;
//
//}