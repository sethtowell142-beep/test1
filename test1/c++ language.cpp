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
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i] << endl;
	}
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0])-1;
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for (int j = 0;j < 5;j++)
	{
		cout << arr[j] << endl;
	}
	system("pause");
	return 0;
}