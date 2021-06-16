#define _CRT_SECURE_NO_WARNINGS 1
//输入2个整数，求两数的平方和并输出。
//#include<stdio.h>
//int main()
//{
//	int a, b, s;
//	printf("请输入两个整数a，b：");
//	scanf("%d %d", &a, &b);
//	s = a*a + b*b;
//	printf("a，b的平方和为：%d\n", s);
//	
//	return 0;
//}


//输入一个圆半径r，当r>＝0时，计算并输出圆的面积和周长，否则，输出提示信息。
//#include<stdio.h>
//#define PI 3.14
//int main()
//{
//	float r;
//	double s, l;
//	printf("请输入圆的半径r：");
//	scanf("%f", &r);
//	if (r >= 0)
//	{
//		l = 2 * PI*r;
//		s = PI*r*r;
//		printf("圆的面积为：%f\n圆的周长为：%f\n", s, l);
//	}
//	else
//		printf("半径输入错误！\n");
//	return 0;
//}


//已知函数y = f(x)，编程实现输入一个x值，输出y值。
//   2x + 1   (x<0)
//   y = 0     (x = 0)
//   2x - 1  (x>0)
//#include<stdio.h>
//int main()
//{
//	float x;
//	double y;
//	printf("请输入x的值：");
//	scanf("%f", &x);
//	if (x == 0)
//		y = 0;
//	else if (x < 0)
//		y = 2 * x + 1;
//	else
//		y = 2 * x - 1;
//	printf("y的值为：%.2f\n", y);
//
//	return 0;
//}


//从键盘上输入一个百分制成绩score，按下列原则输出其等级：
//score≥90，等级为A；
//80≤score<90，等级为B；
//70≤score<80，等级为C；
//60≤score<70，等级为D；
//score<60，等级为E。
//#include<stdio.h>
//int main()
//{
//	int score;
//	char grade;
//	printf("请输入成绩：");
//	scanf("%d", &score);
//	if (score >= 0 && score <= 100)
//	{
//		switch (score/10)
//		{
//		case 6:
//			grade = 'D';
//			break;
//		case 7:
//			grade = 'C';
//			break;
//		case 8:
//			grade = 'B';
//			break;
//		case 9:
//			grade = 'A';
//			break;
//		default:
//			grade = 'E';
//			break;
//		}
//	}
//	else
//		grade = ' ';
//	if (grade != ' ')
//		printf("%c\n", grade);
//	else
//		printf("Input error!\n");
//
//	return 0;
//}


//编一程序每个月根据每个月上网时间计算上网费用，计算方法如下：
//#include<stdio.h>
//int main()
//{
//	float hour;
//	double sum;
//	printf("请输入小时：");
//	scanf("%f", &hour);
//	if (hour <= 10)
//		sum=30.0;
//	else if (hour >= 50)
//		sum = hour*2.5;
//	else
//		sum = hour * 3.0;
//	printf("所需要的的费用为：%.2lf\n", sum);
//
//	return 0;
//}


//从键盘输入10个整数，统计其中正数、负数和零的个数，并在屏幕上输出。
//#include<stdio.h>
//int main()
//{
//	int i;
//	int arr[10];
//	int Positive_number = 0;
//	int Negative_number = 0;
//	int zero = 0;
//	printf("请输入10个整数：");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>0)
//			Positive_number++;
//		else if (arr[i] < 0)
//			Negative_number++;
//		else
//			zero++;
//	}
//	printf("正数的个数为：%d\n负数的个数为：%d\n零的个数为：%d\n", Positive_number, Negative_number, zero);
//	return 0;
//}


//编程序实现求1-10之间的所有数的乘积并输出。
//#include<stdio.h>
//int main()
//{
//	int i;
//	int sum = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		sum *= i;
//	}
//	printf("1-10之间数的乘积为：%d\n", sum);
//	return 0;
//}


// 从键盘上输入10个数，求其平均值。
//#include<stdio.h>
//int main()
//{
//	int i;
//	float num;
//	float sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%f", &num);
//		sum += num;
//	}
//	printf("平均值为：%.2f\n", sum / 10.0);
//	return 0;
//}


//编程序实现求1-1000之间的所有奇数的和并输出。
//#include<stdio.h>
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 1000; i += 2)
//	{
//		sum += i;
//	}
//	printf("1-1000之间的奇数的和为：%d\n", sum);
//	return 0;
//}


//有一个分数序列：2/1，3/2，5/3，8/5，13/8，……编程求这个序列的前20项之和。
//#include<stdio.h>
//int main()
//{
//	int i;
//	float a = 2.0, b = 1.0;
//	float temp;
//	float sum = 0;
//	for (i = 0; i < 20; i++)
//	{
//		sum += a / b;
//		temp = a;
//		a = a + b;
//		b = temp;
//	}
//	printf("前20项之和为：%f\n", sum);
//	return 0;
//}


//从键盘输入两个数，求出其最大值（要求使用函数完成求最大值，并在主函数中调用该函数） 
//#include<stdio.h>
//float MAX(float x, float y);
//int main()
//{
//	float a, b;
//	float max;
//	printf("请输入两个数：");
//	scanf("%f %f", &a, &b);
//	max = MAX(a, b);
//	printf("最大的数是：%.2f\n", max);
//
//	return 0;
//}
//
//float MAX(float x, float y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}



//编写程序，其中自定义一函数，用来判断一个整数是否为素数，主函数输入一个数，输出是否为素数。
//#include<stdio.h>
//#include<stdbool.h>
//#include<math.h>
//
//bool handle(int a)
//{
//	int i;
//	if (a <= 1)
//		return false;
//	for (i = 2; i < sqrt(a); i++)
//	{
//		if (a%i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int a;
//	printf("请输入一个数：");
//	scanf("%d", &a);
//	if (handle(a))
//		printf("%d 为素数！\n", a);
//	else
//		printf("%d 不是素数！\n", a);
//	return 0;
//}


//从键盘输入n个数存放在数组中，将最小值与第一个数交换，输出交换后的n个数。
//#include<stdio.h>
//int main()
//{
//	int arr[32];
//	int i, n;
//	int index = 0;
//	int temp;
//	printf("请输入n的大小：");
//	scanf("%d", &n);
//	printf("请输入n个整数：");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i < n; i++)
//	{
//		if (arr[index]>arr[i])
//			index = i;
//	}
//	temp = arr[index];
//	arr[index] = arr[0];
//	arr[0] = temp;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//从键盘输入n个数存放在数组中，将最小值与第一个数交换，输出交换后的n个数。(用函数实现)
//#include<stdio.h>
//
//void handle(int arr[], int n)
//{
//	int i;
//	int index = 0;
//	int temp;
//	for (i = 1; i < n; i++)
//	{
//		if (arr[index]>arr[i])
//			index = i;
//	}
//	temp = arr[index];
//	arr[index] = arr[0];
//	arr[0] = temp;
//}
//
//int main()
//{
//	int n;
//	int arr[32];
//	int i;
//	printf("Enter n:");
//	scanf("%d", &n);
//	printf("Enter integers:");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	handle(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
