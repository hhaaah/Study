 #define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
#include<math.h>

//int main()
//{
//	double a = 5 / 2.0;//��2��1
//	int b = 5 % 2;//�õ���������1 ����ȡģ�����Ǹ�����
//	printf("a = %lf\nb = %d", a,b);
//	return 0;
//}

//��λ������
//int main()
//{
//	int a = -1;
//	//���Ʋ����� >> 1.�������ƣ��ұ߶�������߲�ԭ����λ��0��������1������ͨ������������λ  2.�߼����ƣ��ұ߶�������߲�0
//	//�����Ķ����Ʊ�ʾ�У�ԭ�롢���롢����
//	//�洢���ڴ���ǲ���
//	//10000000000000000000000000000001 - Դ��
//	//11111111111111111111111111111110 - ���� ����λ���� ��λȡ��
//	//11111111111111111111111111111111 - ���� ����+1
//	int b = a >> 1;
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = a << 2;
//	//���Ʋ���������߶������ұ߲�0
//	printf("b=%d", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//& - ��2����λ
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	printf("%d\n", c);
//	int d = a | b;
//	//| - ��������λ��
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	printf("%d\n", d);
//	int e = a ^ b;
//	//��������λ���
//	// //��ͬΪ0������Ϊ1
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	printf("%d\n", e);
//	return 0;
//}

//��������ʱ����������abֵ
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("before a=%d b=%d\n", a, b);
//	//�Ӽ��� - ��abֵ�����ǿ��ܻᳬ��int����ֵ�����
//	/*a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("after a=%d b=%d\n", a, b);*/
//	//��򽻻���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after a=%d b=%d\n", a, b);
//	return 0;
//}

//��������n�Ķ�������1�ĸ���
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
//int count_bit_one(unsigned int n)//��n�����޷�������������������Ľ��
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
//	printf("%d", (a > b ? a : b));//��Ŀ�����������a>b������ִ��a����������ִ��b
//	return 0;
//}
//�ṹ������ struct
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "����",20,"2013020601" };
//	printf("%s %d %s\n", s1.name, s1.age, s1.id);
//	//�ṹ�����.��Ա��
//	struct Stu* p = &s1;
//	printf("%s\n", (*p).name);
//	printf("%s\n", p->name);
//	//�ṹ��ָ��->��Ա��
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
//	printf("����\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��\n");
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
//	a = a + b;//��򽻻�����a=a^b
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
//		printf("%d������", count);
//	else
//		printf("%d��������", year);
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
