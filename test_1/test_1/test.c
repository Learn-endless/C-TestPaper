#define _CRT_SECURE_NO_WARNINGS 1
//����2����������������ƽ���Ͳ������
//#include<stdio.h>
//int main()
//{
//	int a, b, s;
//	printf("��������������a��b��");
//	scanf("%d %d", &a, &b);
//	s = a*a + b*b;
//	printf("a��b��ƽ����Ϊ��%d\n", s);
//	
//	return 0;
//}


//����һ��Բ�뾶r����r>��0ʱ�����㲢���Բ��������ܳ������������ʾ��Ϣ��
//#include<stdio.h>
//#define PI 3.14
//int main()
//{
//	float r;
//	double s, l;
//	printf("������Բ�İ뾶r��");
//	scanf("%f", &r);
//	if (r >= 0)
//	{
//		l = 2 * PI*r;
//		s = PI*r*r;
//		printf("Բ�����Ϊ��%f\nԲ���ܳ�Ϊ��%f\n", s, l);
//	}
//	else
//		printf("�뾶�������\n");
//	return 0;
//}


//��֪����y = f(x)�����ʵ������һ��xֵ�����yֵ��
//   2x + 1   (x<0)
//   y = 0     (x = 0)
//   2x - 1  (x>0)
//#include<stdio.h>
//int main()
//{
//	float x;
//	double y;
//	printf("������x��ֵ��");
//	scanf("%f", &x);
//	if (x == 0)
//		y = 0;
//	else if (x < 0)
//		y = 2 * x + 1;
//	else
//		y = 2 * x - 1;
//	printf("y��ֵΪ��%.2f\n", y);
//
//	return 0;
//}


//�Ӽ���������һ���ٷ��Ƴɼ�score��������ԭ�������ȼ���
//score��90���ȼ�ΪA��
//80��score<90���ȼ�ΪB��
//70��score<80���ȼ�ΪC��
//60��score<70���ȼ�ΪD��
//score<60���ȼ�ΪE��
//#include<stdio.h>
//int main()
//{
//	int score;
//	char grade;
//	printf("������ɼ���");
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


//��һ����ÿ���¸���ÿ��������ʱ������������ã����㷽�����£�
//#include<stdio.h>
//int main()
//{
//	float hour;
//	double sum;
//	printf("������Сʱ��");
//	scanf("%f", &hour);
//	if (hour <= 10)
//		sum=30.0;
//	else if (hour >= 50)
//		sum = hour*2.5;
//	else
//		sum = hour * 3.0;
//	printf("����Ҫ�ĵķ���Ϊ��%.2lf\n", sum);
//
//	return 0;
//}


//�Ӽ�������10��������ͳ��������������������ĸ�����������Ļ�������
//#include<stdio.h>
//int main()
//{
//	int i;
//	int arr[10];
//	int Positive_number = 0;
//	int Negative_number = 0;
//	int zero = 0;
//	printf("������10��������");
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
//	printf("�����ĸ���Ϊ��%d\n�����ĸ���Ϊ��%d\n��ĸ���Ϊ��%d\n", Positive_number, Negative_number, zero);
//	return 0;
//}


//�����ʵ����1-10֮����������ĳ˻��������
//#include<stdio.h>
//int main()
//{
//	int i;
//	int sum = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		sum *= i;
//	}
//	printf("1-10֮�����ĳ˻�Ϊ��%d\n", sum);
//	return 0;
//}


// �Ӽ���������10����������ƽ��ֵ��
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
//	printf("ƽ��ֵΪ��%.2f\n", sum / 10.0);
//	return 0;
//}


//�����ʵ����1-1000֮������������ĺͲ������
//#include<stdio.h>
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 1000; i += 2)
//	{
//		sum += i;
//	}
//	printf("1-1000֮��������ĺ�Ϊ��%d\n", sum);
//	return 0;
//}


//��һ���������У�2/1��3/2��5/3��8/5��13/8�����������������е�ǰ20��֮�͡�
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
//	printf("ǰ20��֮��Ϊ��%f\n", sum);
//	return 0;
//}


//�Ӽ�����������������������ֵ��Ҫ��ʹ�ú�����������ֵ�������������е��øú����� 
//#include<stdio.h>
//float MAX(float x, float y);
//int main()
//{
//	float a, b;
//	float max;
//	printf("��������������");
//	scanf("%f %f", &a, &b);
//	max = MAX(a, b);
//	printf("�������ǣ�%.2f\n", max);
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



//��д���������Զ���һ�����������ж�һ�������Ƿ�Ϊ����������������һ����������Ƿ�Ϊ������
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
//	printf("������һ������");
//	scanf("%d", &a);
//	if (handle(a))
//		printf("%d Ϊ������\n", a);
//	else
//		printf("%d ����������\n", a);
//	return 0;
//}


//�Ӽ�������n��������������У�����Сֵ���һ��������������������n������
//#include<stdio.h>
//int main()
//{
//	int arr[32];
//	int i, n;
//	int index = 0;
//	int temp;
//	printf("������n�Ĵ�С��");
//	scanf("%d", &n);
//	printf("������n��������");
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


//�Ӽ�������n��������������У�����Сֵ���һ��������������������n������(�ú���ʵ��)
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
