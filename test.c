 #define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
#include<math.h>

//int main()
//{
//	double a = 5 / 2.0;//商2余1
//	int b = 5 % 2;//得到的是余数1 除了取模不能是浮点数
//	printf("a = %lf\nb = %d", a,b);
//	return 0;
//}

//移位操作符
//int main()
//{
//	int a = -1;
//	//右移操作符 >> 1.算术右移：右边丢弃，左边补原符号位（0代表正，1代表负）通常都是算术移位  2.逻辑右移：右边丢弃，左边补0
//	//整数的二进制表示有：原码、反码、补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001 - 源码
//	//11111111111111111111111111111110 - 反码 符号位不变 按位取反
//	//11111111111111111111111111111111 - 补码 反码+1
//	int b = a >> 1;
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = a << 2;
//	//左移操作符：左边丢弃，右边补0
//	printf("b=%d", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//& - 按2进制位
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	printf("%d\n", c);
//	int d = a | b;
//	//| - 按二进制位或
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	printf("%d\n", d);
//	int e = a ^ b;
//	//按二进制位异或
//	// //相同为0，相异为1
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	printf("%d\n", e);
//	return 0;
//}

//不设置临时变量，交换ab值
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("before a=%d b=%d\n", a, b);
//	//加减法 - 当ab值过大是可能会超出int整形值，溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("after a=%d b=%d\n", a, b);*/
//	//异或交换法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after a=%d b=%d\n", a, b);
//	return 0;
//}

//计算整数n的二进制中1的个数
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d" ,& n);
//	int i = 0;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{ 
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int count_bit_one(unsigned int n)//把n当成无符号数，就能算出负数的结果
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	/*char arr[10] = {0};
//	printf("%d\n",sizeof arr);
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(char[5]));*/
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d", (a > b ? a : b));//三目操作符：如果a>b成立，执行a，不成立则执行b
//	return 0;
//}
//结构体类型 struct
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",20,"2013020601" };
//	printf("%s %d %s\n", s1.name, s1.age, s1.id);
//	//结构体变量.成员名
//	struct Stu* p = &s1;
//	printf("%s\n", (*p).name);
//	printf("%s\n", p->name);
//	//结构体指针->成员名
//	return 0;
//}
//int dif(int x, int y)
//{
//	int count = 0;
//	int z = x ^ y;
//	while (z)
//	{
//		z = z & (z - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	int count = dif(a, b);
//	printf("%d", count);
//	return 0;
//}
//void print(int m)
//{
//	int i = 0;
//	printf("奇数\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("before a=%d b=%d\n", a, b);
//	a = a + b;//异或交换法：a=a^b
//	b = a - b;            //b=a^b
//	a = a - b;            //a=a^b
//	printf("now    a=%d b=%d", a, b);
//	return 0;
//}
//void asd(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%2d ", *(p+i));
//		Sleep(30);
//	} 
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,9,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	asd(arr,sz);
//	return 0;
//}
//void su()
//{
//	int i = 0;
//	for (i = 100; i <=200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//}
//int main()
//{
//	su();
//	return 0;
//}

//int leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		return n;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int count = leap_year(year);
//	if (count > 0)
//		printf("%d是润年", count);
//	else
//		printf("%d不是润年", year);
//	return 0;
//}

//void yes(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	yes(n);
//	return 0;
//}
//int fn(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fn(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fn(n);
//	printf("%d", ret);	
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	if (n <= 1)
//	{
//		printf("%d", n);
//	}
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * (n - i);
//	}
//	printf("%d", ret);
//	return 0;
//}
//int str(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int count = str(arr);
//	printf("%d", count);
//	return 0;
//}
//int str(char* arr)
//{
//	if (!*arr)
//		return 0;
//	else
//		return 1+str(arr + 1);
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = str(arr);
//	printf("%d", len);
//	return 0;
//}
//int m_strlen(char* arr)
//{
//	if (!*arr)
//		return 0;
//	else
//		return 1 + m_strlen(arr + 1);
//
//}
//void str(char* arr)
//{
//	m_strlen(arr);
//	int left = 0;
//	int right = m_strlen(arr) - 1;
//	while(left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void str(char* arr)
//{
//	char tmp = arr[0];
//	int len = m_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (m_strlen(arr + 1) >= 2)
//		str(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "hello world!!!";
//	str(arr);
//	printf("%s", arr);
//	return 0;
//}

//int DigitSum(unsigned int n)
//{
//	int ret = 0;
//	if (n <= 9)
//		return n;
//	else
//	{
//		return	DigitSum(n / 10) + (n % 10);
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//	return 0;
//}
//double m_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * m_pow(n,k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//		return (1.0 / m_pow(n,-k));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = m_pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
