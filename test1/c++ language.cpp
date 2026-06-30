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
//	//Person operator+(Person& p)      //成员内运算符重载 对象默认是左边 p.operator+(p1);
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







//<<运算符重载 只能使用全局函数 因为cout《《 p cout在左边 链式传递返回值有说法 cout只能有一个 &还有别名的意思



//class game
//{
//	friend ostream& operator<<(ostream& out, game ki);     //友元技术
//public:
//	game(int x,int y)
//	{
//		m_a = x;
//		m_b = y;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//
//
//ostream& operator<<(ostream& out, game ki)    //重要的是类型和&
//{
//	cout << ki.m_a << " " << ki.m_b;
//	return out;
//}
//
//
//void test()
//{
//	game ki(10,10);
//	cout << ki <<endl;
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







//class myint
//{
//	friend ostream& operator<<(ostream& cout, myint ki);
//public:
//
//	myint& operator++()          //返回同一块空间
//	{
//		m++;
//		return *this;
//	}
//	myint operator++(int)   //int 哑元参数 仅用于区分 有的是后置递增
//	{
//		myint temp;
//		temp = *this;             //出函数被销毁 不能返回同一块空间
//		m++;
//		return temp;
//	}
//	myint()
//	{
//		m = 0;
//	}
//private:
//	int m;
//};
//
//
//ostream& operator<<(ostream& cout, myint ki)
//{
//	cout << ki.m << endl;
//	return cout;
//}
//
//
////void test()
////{
////	myint ki;
////	cout << ki << endl;
////	cout << ++(++ki) << endl;
////	cout << ki << endl;
////
////}
//
//
//void test()
//{
//	myint kiki;
//	cout << kiki++ << endl;
//	cout << kiki++ << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}






//=重载运算符  class自动提供 构造 析构 拷贝 = 函数。


//class Person
//{
//public:
//	Person(int age)
//	{
//		m_age = new int(age);
//	}
//	Person& operator=(Person&p)      //堆区深拷贝
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//		m_age = new int(*p.m_age);
//		return *this;
//	}
//
//	~Person()
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//	int* m_age;
//};
//
//
//
//void test()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << *p1.m_age << endl;
//	cout << *p2.m_age << endl;
//	cout << *p3.m_age << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}








//关系运算符==  !=重载， 未定义类型的比较


//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		m_age = age;
//		m_name = name;
//	}
//	bool operator==(Person &p)
//	{
//		if (this->m_age == p.m_age && this->m_name == p.m_name)
//			return true;
//		return false;
//	}
//	bool operator!=(Person& p)
//	{
//		if (this->m_age == p.m_age && this->m_name == p.m_name)
//			return false;
//		return true;
//	}
//	string m_name;
//	int m_age;
//};
//
//void test()
//{
//	Person p1("tom", 20);
//	Person p2("jerry", 20);
//	if (p1 == p2)
//		cout << "they are same" << endl;
//	else
//		cout << "they are different" << endl;
//	if(p1!=p2)
//		cout << "they are different" << endl;
//	else
//		cout << "they are same" << endl;
//
//}
//
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}









//仿函数  非常灵活 像函数


//class Person
//{
//public:
//	void operator()(string name)
//	{
//		cout << name << endl;
//	}
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//
//
//
//void test()
//{
//	Person()("kiki");    //匿名对象 Person()  用完销毁
//	cout << Person()(100, 100) << endl;
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







//继承  子类或派生类  父类或基类       子类：继承方式 父类   重复元素 和特征元素


//class base
//{
//public:
//	void foot()
//	{
//		cout << "foot" << endl;
//	}
//	void head()
//	{
//		cout << "head" << endl;
//	}
//};
//
//class snake :public base
//{
//public:
//	void kiki()
//	{
//		cout << "kiki" << endl;
//	}
//};
//
//class maba :public base
//{
//public:
//	void baba()
//	{
//		cout << "baba" << endl;
//	}
//};
//
//
//void test()
//{
//	snake s;
//	s.foot();
//	s.head();
//	s.kiki();
//	cout << "--------" << endl;
//	maba m;
//	m.foot();
//	m.head();
//	m.baba();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}







//继承方式  无论是那种继承方式 都无法继承private内容 使用public继承方式 保留父类的权限分区
//使用protected继承方式 全部变成protected权限 类外无法访问
//使用private继承方式 全部变成private权限


// 私有成员只是被隐藏了 无法访问 子类大小包括父类的属性和自己的属性




//子类和父类的析构和构造 现有父类 再有子类 先进后出 父类析构最后


//class base
//{
//public:
//	base()
//	{
//		cout << "base()" << endl;
//	}
//	~base()
//	{
//		cout << "~base()" << endl;
//	}
//};
//class son :public base
//{
//public:
//	son()
//	{
//		cout << "son()" << endl;
//
//	}
//	~son()
//	{
//		cout << "~son()" << endl;
//
//	}
//};
//
//void test()
//{
//	son p;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}







//访问子类与父类中的同名函数和同名属性 需要加作用域 直接使用子类会隐藏父类函数 父类函数重载也没用

//class father
//{
//public:
//	father()
//	{
//		m_a = 100;
//	}
//	int m_a;
//	void kiki()
//	{
//		cout << "this is father " << endl;
//	}
//};
//class son :public father
//{
//public:
//	son()
//	{
//		m_a = 200;
//	}
//	void kiki()
//	{
//		cout << "this is son " << endl;
//	}
//	int m_a;
//};
//
//void test()
//{
//	son s;
//	cout <<"son ="<< s.m_a << endl;
//	cout << "father =" << s.father::m_a << endl;
//	s.kiki();
//	s.father::kiki();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}






//同名静态函数 同样的方式 不过由于静态只有一份的特性 可以通过类名访问。类名：：通过类名访问 类名：：某某作用域下的
//                 对象.   通过对象访问


//class base
//{
//public:
//	static int  m_a;
//	static void func()
//	{
//		cout << "this is base" << endl;
//	}
//};
//int base::m_a = 100;
//class son :public base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "this is son" << endl;
//	}
//};
//int son::m_a = 200;
//void test()
//{
//	son s;
//	cout << "son. member=" << s.m_a << endl;
//	cout << "base. member=" << s.base::m_a << endl;
//	cout << "son:: member=" << son::m_a << endl;
//	cout << "son::base:: member=" << son::base::m_a << endl;
//	son::base::func();
//	son::func();
//
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}







//多继承 一个子类继承多个父类 父类中的同名成员需要加作用域  class 子类：继承类型 父类，继承类型 父类
//class base1
//{
//public:
//	base1()
//	{
//		m_a = 111;
//	}
//	int m_a;
//};
//
//class base2
//{
//public:
//	base2()
//	{
//		m_a = 222;
//	}
//	int m_a;
//};
//class son :public base1, public base2
//{
//public:
//	son()
//	{
//		m_a = 333;
//	}
//	int m_a;
//};
//void test()
//{
//	son s;
//	cout << s.m_a << endl;
//	cout << s.base1::m_a << endl;
//	cout << s.base2::m_a << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}





// 菱形继承 虚拟继承 virtual 储存指针指向同一份数据
//class base
//{
//public:
//	int m_a;
//};
//class base1 :virtual public base
//{
//
//};
//class base2 :virtual public base
//{
//
//};
//class son :public base1, public base2
//{
//
//};
//void test()
//{
//	son s;
//	s.m_a = 100;
//	cout << "s.m_a=" << s.m_a << endl;
//	cout << "s.m_a=" << s.base1::m_a << endl;
//	cout << "s.m_a=" << s.base2::m_a << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}







//多态 由于先后编译(静态） （动态）的问题 子类重写父类的虚函数 对父类的引用传入子类 访问了子类的member 原因

//一个父类有一个函数 sizeof是1 函数变成虚函数 sizeof是4，4是指针的大小vfptr 指向vftable 记录 父类虚函数
//当子类直接继承，子类也有指针和表，表的内容是父类虚函数。当子类重写同名虚函数会覆盖父类虚函数。

//class base
//{
//public:
//	virtual void func()           //虚函数 关键词 virtual
//	{
//		cout << "it is barking " << endl;
//	}
//};
//
//class son:public base
//{
//public:
//	void func()
//	{
//		cout << "it is cat" << endl;
//	}
//};
//
//void kiki(base&q)
//{
//	q.func();
//}
//void test()
//{
//	son s;
//	kiki(s);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}






//使用多态实现计算器 使用基态指针接收子类的地址  开启扩展 关闭修改 好排查问题

//class baseCalculate
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_num1;
//	int m_num2;
//};
//
//class addCalculate :public baseCalculate
//{
//public:
//	int getResult()
//	{
//		return m_num1 + m_num2;
//	}
//};
//
//class subCalculate :public baseCalculate
//{
//public:
//	int getResult()
//	{
//		return m_num1 - m_num2;
//	}
//};
//class multiCalculate :public baseCalculate
//{
//public:
//	int getResult()
//	{
//		return m_num1 * m_num2;
//	}
//};
//
//
//
//void test()
//{
//	baseCalculate* ace = new addCalculate;
//	ace->m_num1 = 100;
//	ace->m_num2 = 50;
//	cout << ace->m_num1 << "+" << ace->m_num2 << "=" << ace->getResult() << endl;
//	delete ace;
//	ace = new subCalculate;
//	ace->m_num1 = 100;
//	ace->m_num2 = 50;
//	cout << ace->m_num1 << "-" << ace->m_num2 << "=" << ace->getResult() << endl;
//	delete ace;
//	ace = new multiCalculate;
//	ace->m_num1 = 100;
//	ace->m_num2 = 50;
//	cout << ace->m_num1 << "*" << ace->m_num2 << "=" << ace->getResult() << endl;
//	delete ace;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}








//纯虚函数   抽象类的子类必须重写 直接继承会直接继承虚函数   抽象类无法对象化   有一个纯虚函数就是抽象类

//class Base
//{
//public:
//	virtual int func() = 0;
//};
//class Son :public Base
//{
//public:
//	int func()
//	{
//		cout << "game over" << endl;
//		return 0;
//	}
//};
//
//
//
//void test()
//{
//	//Base a;//无法对象化
//	Base* project = new Son;
//	project->func();
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}






//多态案例实现 工艺流程

//class Base
//{
//public:
//	virtual void step1() = 0;
//	virtual void step2() = 0;
//	virtual void step3() = 0;
//	void make()
//	{
//		step1();
//		step2();
//		step3();
//
//	}
//
//};
//class Son1 :public Base
//{
//	void step1()
//	{
//		cout << "aaa" << endl;
//	}
//	void step2()
//	{
//		cout << "bbb" << endl;
//	}
//	void step3()
//	{
//		cout << "ccc" << endl;
//	}
//};
//class Son2 :public Base
//{
//	void step1()
//	{
//		cout << "111" << endl;
//	}
//	void step2()
//	{
//		cout << "222" << endl;
//	}
//	void step3()
//	{
//		cout << "333" << endl;
//	}
//};
//
//
//void makeup(Base*dummy)   //使用抽象类指针接收 完成传入的子类不同操作不同 多态
//{
//	dummy->make();
//	delete dummy;
//}
//
//void test()
//{
//	makeup(new Son1);
//	cout << "-----------" << endl;
//	makeup(new Son2);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




//虚析构和纯虚析构 解决了父类无法走子类中的析构函数的问题 子类如果有数据在堆区就无法释放  都必须有实现

//class Base
//{
//public:
//	virtual void speak() = 0;
//	Base()
//	{
//		cout << "base()" << endl;
//
//	}
//	//virtual ~Base()
//	//{
//	//	cout << "~base()" << endl;
//	//}
//	virtual ~Base() = 0;   //纯虚析构必须要有函数体
//};
//Base::~Base()
//{
//	cout << "~base()" << endl;
//}
//class Son :public Base
//{
//public:
//	void speak()
//	{
//		cout <<*m_name<< " is speaking" << endl;
//	}
//	Son(string name)
//	{
//		m_name = new string(name);
//		cout << "Son()" << endl;
//	}
//	~Son()
//	{
//		if (m_name != NULL)
//		{
//			delete m_name;
//			m_name = NULL;
//		}
//		cout << "~Son()" << endl;
//	}
//	string *m_name;
//};
//
//
//
//
//
//void test()
//{
//	Base* a = new Son("kiki");
//	a->speak();
//	delete a;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}







//案例 电脑厂商

//class Cpu
//{
//public:
//	virtual void calculate() = 0;
//};
//
//class Video
//{
//public:
//	virtual void display() = 0;
//};
//
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
//class Intel :public Cpu
//{
//public:
//	void calculate()
//	{
//		cout << "intel cpu" << endl;
//	}
//};
//class IntelVideo :public Video
//{
//public:
//	void display()
//	{
//		cout << "intel video " << endl;
//	}
//};
//class IntelMemory :public Memory
//{
//public:
//	void storage()
//	{
//		cout << "intel storage" << endl;
//	}
//};
//
//
//
//
//
//
//class Computer
//{
//public:
//	Computer(Cpu& c, Video& v, Memory& m)
//	{
//		c.calculate();
//		v.display();
//		m.storage();
//	}
//};
//
//
//
//
//
//
//void test()
//{
//	Intel i;
//	IntelVideo v;
//	IntelMemory m;
//	Computer a(i,v,m);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}






//读写文件操作

#include <fstream>





//void test()
//{
//	ofstream ofs;
//	ofs.open("test111.txt", ios::out);
//	ofs << "name hu yang kang" << endl;
//	ofs << "age 78" << endl;
//	ofs << "gender man" << endl;
//	ofs.close();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}













//void test()
//{      
//	ifstream ifs;
//	ifs.open("test111.txt", ios::in);    //包含头文件 fstream 创建文件流 ifstream 打开方式 操作读或写 关闭
//	if (!ifs.is_open())
//	{
//		cout << "not match" << endl;
//		return;
//	}
//	string str;
//	while (getline(ifs, str))
//	{
//		cout << str << endl;
//	}
//	ifs.close();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}













//二进制读写文件
//class Person
//{
//public:
//	char name[68];
//	int age;
//};
//
//
//void test()
//{
//	Person a = { "jack",18 };
//	ofstream ofs("Person.txt", ios::out | ios::binary);
//	ofs.write((const char*)&a, sizeof(Person));
//	ofs.close();
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




//class Person
//{
//public:
//	char name[68];
//	int age;
//};
//
//
//
//
//void test()
//{
//	ifstream ifs;
//	ifs.open("Person.txt", ios::in | ios::binary);  //打开方式
//	if (!ifs.is_open())
//	{
//		cout << "unopen" << endl;
//		return;
//	}
//	Person a;
//	ifs.read((char*)&a, sizeof(Person));          //读取方式
//	cout << "name " << a.name << " age " << a.age << endl;
//	ifs.close();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}






//template<typename T>    //模板 命名 数据类型  函数模板
//void Swap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//
//
//
//
//
//void test()
//{
//	int a = 10;
//	int b = 20;
//	Swap<int>(a, b);      //方式 声明类型   或者 编译器推断 Swap(a,b); 自动推断类型必须一致
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}





//template<class T>
//void func()
//{
//	cout << "func" << endl;
//}
//
//
//
//void test()
//{
//	func<int>();   //模板的使用必须有确定的数据类型
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}





//使用模板对char和int进行排序
//template<class T>
//void Swap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void Sort(T arr[], int len)
//{
//	for (int i = 0;i < len - 1;i++)   //选择排序 逐渐有序 
//	{
//		int p = i;
//		for (int j = i + 1;j < len;j++)
//		{
//			if (arr[j] > arr[p])
//			{
//				p = j;
//			}
//		}
//		if (p != i)
//		{
//			Swap(arr[i], arr[p]);
//		}
//	}
//}
//
//
//template<class T>
//void Print(T arr[], int len)         //传递数组 类型 命名 【】 地址
//{
//	for (int i = 0;i < len;i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//
//void test()
//{
//	int arr[] = { 3,4,1,2,6,7,9, };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	Sort(arr, num);
//	Print(arr, num);
//	char c[] = "abcdefg";
//	int num1 = sizeof(c) / sizeof(c[0]);
//	Sort(c, num1);
//	Print(c, num1);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




//普通函数和指定模板函数可以发生隐式类型转换（传char，int接收，char通过ascm值转换成int）  自动推导模板不会发生隐式类型转换
//自动推导会报错
//隐式转换是临时的值 
//template<class T>
//T add01(const T &a,const T &b)
//{
//	return a + b;
//}
//
//
//void test()
//{
//	int a = 10;
//	char b = 'c';
//	cout << add01 <int>(a, b) << endl;
//	//int& r = 10;错误 &是别名 必须是占用内存空间  C++ 规定：非 const 的左值引用不能绑定到右值（临时量）。
//	const int& r = 10;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}







//普通函数与函数模板  从简
//同时存在优先调用普通函数。 如果存在隐式转换，会调用模板。模板也能重载  可以通过空模板参数强制调用模板
//void Func(int a, int b)
//{
//	cout << "func" << endl;
//}
//
//template<class T>
//void Func(T a, T b)
//{
//	cout << "template" << endl;
//}
//template<class T>
//void Func(T a, T b, T c)
//{
//	cout << "template(a,b,c,)" << endl;
//}
//
//
//void test()
//{
//	int a = 0;
//	int b = 0;
//	Func(a, b);
//	Func<>(a, b);
//	Func(a, a, b);
//	char c = 'c';
//	char d = 'd';
//	Func(c, d);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}






//自定义数据类型，通过具体化参数来解决无法运算的问题

//class Person
//{
//public:
//	Person(int age, string name)
//	{
//		this->m_age = age;
//		this->m_name = name;
//	}
//	int m_age;
//	string m_name;
//};
//
//template <class T>
//bool Compare(T& a, T& b)
//{
//	if (a == b)
//		return true;
//	else
//		return false;
//}
//
//template<> 
//bool Compare(Person& a, Person& b)
//{
//	if (a.m_age == b.m_age && b.m_name == a.m_name)
//		return true;
//	return false;
//}
//
//
//
//void test()
//{
//	Person p1(10, "tom");
//	Person p2(10, "tom");
//	int ret=Compare(p1, p2);
//	if (ret)
//		cout << "==" << endl;
//	else
//		cout << "!=" << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}






//类模板 模板加类 通用数据类型可以多个
//template<class AgeType,class NameType>//类模板可以有默认参数 
//class Dog                             //<class AgeType,class NameType=int>如果NameType没有指定就默认int
//{
//public:
//	AgeType m_age;
//	NameType m_name;
//	Dog(AgeType age, NameType name)
//	{
//		this->m_age = age;
//		this->m_name = name;
//	}
//	void Show()
//	{
//		cout << "name " << this->m_name << " age " << this->m_age << endl;
//	}
//};
//
//
//
//
//
//void test()
//{
//	Dog<int, string> d1(1, "shilo");//类模板必须有指定类型参数 <int ,string>
//	d1.Show();
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}





//类模板成员函数在调用的时候才创建 因为不知道参数类型是什么
//class base1
//{
//public:
//	void show1()
//	{
//		cout << "show1" << endl;
//	}
//};
//class base2
//{
//public:
//	void show2()
//	{
//		cout << "show2" << endl;
//	}
//};
//
//template<class T>
//class c
//{
//public:
//	T t;
//	void func1()
//	{
//		t.show1();
//	}
//	void func2()
//	{
//		t.show2();
//	}
//};
//
//
//void test()
//{
//	c<base1> k;
//	k.func1();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}





//类模板对象传参 1.指定传入类型 void func(person<string ,int> & x) 最常用
//      2 类模板化   template <class T>void func(T& x)
//        3参数模板化 template <classT1,class T2> void func(Person<T1,T2> &x)

//template<class T1,class T2>
//class Person
//{
//public:
//	T1 m_age;
//	T2 m_name;
//	Person(T1 age, T2 name)
//	{
//		m_age = age;
//		m_name = name;
//	}
//	void show()
//	{
//		cout << "name " << this->m_name << " age " << this->m_age << endl;
//	}
//};
//
//void ShowP(Person<int, string>&p)
//{
//	p.show();
//}
//void test()
//{
//	Person<int, string> p(18, "ki");
//	ShowP(p);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}





//类模板继承问题，子类必须指定父类的参数数据类型。或者灵活使用，子类也必须使用类模板。

//template<class T>
//class base
//{
//public:
//	T a;
//	base()
//	{
//		cout << "T=" << typeid(T).name() << endl;
//	}
//};
//class son1 :public base<int>
//{
//
//};
//template <class T1,class T2>    //T2传到baseT；
//class son2 :public base<T2>
//{
//public:
//	T1 b;
//	son2()
//	{
//		cout << "T1=" << typeid(T1).name() << endl;
//		cout << "T2=" << typeid(T2).name() << endl;
//	}
//};
//
//void test()
//{
//	son2<int, char> s2;
//	base<int> b;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




//类模板成员函数的类外实现 强调模板


//template<class T1,class T2>
//class Person
//{
//public:
//	T1 m_age;
//	T2 m_name;
//	Person(T1 age, T2 name);
//	//{
//	//	m_age = age;
//	//	m_name = name;
//	//}
//	void show();
//	//{
//	//	cout << "name " << this->m_name << " age " << this->m_age << endl;
//	//}
//};
//
//template<class T1, class T2>
//Person<T1,T2>::Person(T1 age, T2 name)
//{
//	m_age = age;
//	m_name = name;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>:: show()
//{
//	cout << "name " << this->m_name << " age " << this->m_age << endl;
//}
//
//void test()
//{
//	Person<int, string> p(18, "tom");
//	p.show();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//包含头文件之后 头文件中的函数声明，会被 链接 找到 。编译阶段

//类模板分文件编写的问题 。因为成员函数只有在被调用的时候才被创建，所以编译时 链接 不会找到类模板的成员函数的实现
//解决方案 写在一起 命名为hpp （或者直接包含源文件）。




//类模板 全局友元函数的类内实现
//template<class T1, class T2>  //事先声明
//class Person;
//
//template<class T1, class T2>
//void print2(Person<T1, T2>& a)
//{
//	cout << a.m_age << a.m_name << endl;
//}
//template<class T1,class T2>
//class Person
//{
//	friend void print2<>(Person<T1, T2>& a);  //外部实现  <>  这是模板
//	friend void print(Person<T1, T2>& a)
//	{
//		cout << a.m_age << a.m_name << endl;
//	}
//public:
//	T1 m_age;
//	T2 m_name;
//	Person(T1 age, T2 name)
//	{
//		m_age = age;
//		m_name = name;
//	}
//	void show()
//	{
//		cout << "name " << this->m_name << " age " << this->m_age << endl;
//	}
//};
//
//
//void test()
//{
//	Person<int, string> p(18, "jerry");
//	print2(p);
//	print(p);
//	p.show();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}





//构造我的数组 类模板

//class Person
//{
//public:
//	Person() {};
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//template <class T>
//class MyArray
//{
//public:
//	MyArray(int Capacity)
//	{
//		cout << "MyArray" << endl;
//		this->m_Capacity = Capacity;
//		this->m_Size = 0;
//		this->m_p = new T[m_Capacity];
//	}
//	MyArray(const MyArray& arr)  //拷贝构造 将一个东西复制到一个新的容器
//	{
//		cout << "copy MyArray" << endl;
//		this->m_Size = arr.m_Size;
//		this->m_Capacity = arr.m_Capacity;
//		this->m_p = new T[arr.m_Capacity];
//		for (int i = 0;i < arr.m_Size;i++)
//		{
//			this->m_p[i] = arr.m_p[i];
//		}
//	}
//	MyArray& operator=(const MyArray& arr)
//	{
//		if (this == &arr)
//			return *this;
//		cout << "MyArray operator=" << endl;
//		if (this->m_p != NULL)
//		{
//			delete[]m_p;
//			m_p = NULL;
//		}
//		this->m_Size = arr.m_Size;
//		this->m_Capacity = arr.m_Capacity;
//		this->m_p = new T[arr.m_Capacity];
//		for (int i = 0;i < arr.m_Size;i++)
//		{
//			this->m_p[i] = arr.m_p[i];
//		}
//		return *this;
//	}
//	void pop_back()
//	{
//		if (this->m_Size == 0)
//		{
//			return;
//		}
//		this->m_Size--;//逻辑上的删除
//	}
//	void push_back(const T& val)
//	{
//		if (this->m_Capacity == this->m_Size)
//			return;
//		this->m_p[this->m_Size] = val;
//		this->m_Size++;
//	}
//
//	T& operator[](int index)
//	{
//		return this->m_p[index];
//	}
//	int get_capacity()
//	{
//		return this->m_Capacity;
//	}
//	int  get_size()
//	{
//		return this->m_Size;
//	}
//	~MyArray()
//	{
//		cout << "~MyArray" << endl;
//		if (m_p != NULL)
//		{
//			delete[]m_p;
//			m_p = NULL;
//		}
//	}
//private:
//	T* m_p;
//	int m_Size;
//	int m_Capacity;
//};
//
//
//void Print(MyArray<int>& arr)
//{
//	for (int i = 0;i < arr.get_size();i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//
//
//void test()
//{
//	MyArray<int> arr1(10);
//	MyArray<int>arr2(arr1);
//	MyArray<int> arr3(20);
//	arr3 = arr1;
//	for (int i = 0;i < 5;i++)
//	{
//		arr1.push_back(i);
//	}
//	Print(arr1);
//	cout << "arr1 capacity=" << arr1.get_capacity() << endl;
//	cout << "arr1 size=" << arr1.get_size() << endl;
//	arr1.pop_back();
//	cout << "arr1 capacity=" << arr1.get_capacity() << endl;
//	cout << "arr1 size=" << arr1.get_size() << endl;
//}
//
//
//void test01()
//{
//	MyArray<Person>arr(10);  //数组初始化需要默认构造
//	Person p1("kiki", 10);
//	Person p2("baba", 10);
//	arr.push_back(p1);
//	arr.push_back(p2);
//	for (int i = 0;i < arr.get_size();i++)
//	{
//		cout << "name=" << arr[i].m_name << "\t" << "age=" << arr[i].m_age << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//






//初识stl 容器 算法 迭代器 仿函数 适配器 空间分配
//容器 空间 物理空间的有无序  算法 寻找或者改变 解决问题的方案 迭代器 访问容器

#include <vector>
#include <algorithm>

//void Print(int val)
//{
//	cout << val << endl;
//}
//void test()
//{
//	vector<int> v;
//	for (int i = 10;i < 50;i += 10)
//	{
//		v.push_back(i);
//	}
//	for (vector<int>::iterator k = v.begin();k != v.end();k++)  //vector<int>::iterator 某类型容器 v.begin() 具体指针
//	{
//		cout << *k << endl;
//	}
//	for_each(v.begin(), v.end(), Print); //内置算法 。回调函数 
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}







 //自定义类型数据 迭代器中尖括号内容=解引用后的
//class Person
//{
//public:
//	Person(int age, string name)
//	{
//		this->m_age = age;
//		this->m_name = name;
//	}
//	string m_name;
//	int  m_age;
//};
//
//
//
//
//
//void test()
//{
//	vector<Person> v;
//	Person p1(18, "aaa");
//	Person p2(18, "bbb");
//	Person p3(18, "ccc");
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << "name = " << it->m_name << "  age = " << it->m_age << endl;
//		cout << "name = " << (*it).m_name << "  age = " << (*it).m_age << endl;
//	}
//
//}
//
//void test01()
//{
//	vector<Person*> v;
//	Person p1(18, "aaa");
//	Person p2(18, "bbb");
//	Person p3(18, "ccc");
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	for (vector<Person*>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << " !!name = " << (*it)->m_name<< " !! age = " << (*it)->m_age << endl;
//	}
//}
//int main()
//{
//	test();
//	test01();
//	system("pause");
//	return 0;
//}




//利用嵌套容器实现二维数组



//void test()
//{
//	vector<vector<int>> v;
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	for (int i = 0;i < 3;i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//		v3.push_back(i + 2);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	for (vector<vector<int>>::iterator it = v.begin();it != v.end();it++) //访问容器使用迭代器.
//	{
//		for (vector<int>::iterator ite = (*it).begin();ite != (*it).end();ite++) //指针解引用是<>内容物
//		{
//			cout << *ite << " ";
//		}
//		cout << endl;
//	}
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




//string 的构造函数 是一个类 内置多种接口



void test()
{
	string s1;
	const char* c = "abc";
	string s2(c);
	cout << "s2=" << s2 << endl;
	string s3(5, 'a');
	cout << "s3=" << s3 << endl;
	string s4 = "kiki";
	string s5(s4);
	cout << "s5=" << s5 << endl;
	s2.assign("hello kiki", 5);
	cout << "s2=" << s2 << endl;
	string str1;
	string str2 = "i";
	str1 += str2;
	cout << "str1=" << str1 << endl;
	string str3 = "am kiki";
	str1.append(str3, 3, 4); //从第几个开始截取几个
	cout << "str1=" << str1 << endl;
	string str4 = "abcdefde";
	int pos = str4.find("de");
	if (pos == -1)
		cout << "no result" << endl;
	else
		cout << "the position is " << pos << endl;
	pos = str4.rfind("de");//rfind(rightfind)
	cout << "the position is " << pos << endl;
	str4.replace(1, 2, "cc");//pos nums str
	cout << str4 << endl;
	string str5 = "acacac";
	string str6 = "acacac";
	int ret = str5.compare(str6);
	if (ret == 0)
		cout << "==" << endl;
	else
		cout << "!=" << endl;
}
void test01()
{
	string str = "visit";
	for (int i = 0;i < str.size();i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	for (int i = 0;i < str.size();i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;
	for (int i = 0;i < str.size();i++)
	{
		str[i] = 'x';
	}
	cout << str << endl;
}
int main()
{
	//test();
	test01();
	system("pause");
	return 0;
}












//void test()
//{
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}