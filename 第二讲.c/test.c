#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>


//算术运算符
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int result1 = a + b;
//	int result2 = a - b;
//	printf("a+b=%d a-b=%d", result1, result2);
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int result = a * b;
//	printf("a*b=%d", result);
//	return 0;
//}

//int main() {
//	int x;
//	float y;
//	x = 3 / 2;
//	y = 3.0 / 2;
//	printf("x=%d  ", x);
//	printf("y=%f  ", y);
//	return 0;
//}

//int main() {
//	int a = 3.5;
//	printf("%d\n",a);
//	return 0;
//}

//int main() {
//	int x = 3 / 2;
//	printf("%f\n", x);
//}
//
//int main() {
//	int x = 3 % 2;
//	int y = -3 % 2;
//	int z = 3 % (-2);
//	printf("%d ", x);
//	printf("%d ", y);
//	printf("%d ", z);
//	return 0;
//}
//
////赋值操作符
//int main() {
//	int a = 2;
//	int b = 4;
//	int c = 6;
//	a = b = c + 1;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

////单目操作符
//int main() {
//	int a = 0;
//	int b = ++a;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//int main() {
//	int a = 3;
//	int b = +a;
//	int c = -a;
//	int d = -c;
//	printf("a=%d b=%d c=%d d=%d", a, b, c, d);
//	return 0;
//}

////整形
//int main() {
//	printf("short = %zd bite\n", sizeof(short));
//	printf("int = %zd bite\n", sizeof(int));
//	printf("long = %zd bite\n", sizeof(long));
//	printf("long long = %zd bite\n", sizeof(long long));
//	printf("unsigned short = %zd bite\n", sizeof(unsigned short));
//	printf("signed short = %zd bite\n", sizeof(signed short));
//	return 0;
//}

////字符型
//int main() {
//	printf("char=%zd bite\n", sizeof(char));
//	printf("signed char=%zd bite\n", sizeof(signed char));
//	printf("unsigned char=%zd bite\n", sizeof(unsigned char));
//	return 0;
//}

//浮点型
//int main() {
//	printf("float = %zd bite \n", sizeof(float));
//	printf("double = %zd bite \n", sizeof(double));
//	printf("long double = %zd bite \n", sizeof(long double));
//	return 0;
//}

//布尔类型
//#include<stdbool.h>
//int main() {
//	printf("_Bool = %zd bite\n", sizeof(_Bool));
//	return 0;
//}

////sizeof
//int main() {
//	int num = 10;
//	int sum = 0;
//	printf("num=%d\n", sizeof(num));
//	printf("num=%d\n", sizeof num);//常变量表达式可以去掉括号
//	printf("int=%d\n", sizeof(int));//数据类型需要加上括号
//	printf("1+1.2=%d\n", sizeof (1 + 1.2));//表达式需要加上括号
//	printf("1+1=%d\n", sizeof(1 + 1));
//	printf("num+1=%d\n", sizeof (sum=num+1));
//	printf("sum=%d\n", sum);
//	return 0;
//}

////printf
//int main() {
//	printf("happy  ");
//	printf("happy\n");
//	printf("h\na\np\np\ny\n");
//	return 0;
//}

//int main() {
//	char s = 'yot';
//	printf("%d are beautiful! ", s);
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	printf("a=%d,b=%d,c=%d,d=%d", a, b, c);
//	return 0;
//}

////在屏幕上输出“    123.45”
//int main() {
//	printf("%+d\n",5);
//	printf("%+d\n", -5);
//	return 0;




//scanf
//int main() {
//	int num = 0;
//	printf("请输入数值：");
//	scanf("%d", &num);
//	printf("num = %d\n", num);
//	return 0;
//}

//int main() {
//	int a;
//	float b;
//	int c;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	scanf("%f", &b);
//	printf("%f\n", b);
//	scanf("%d\n", &c);
//	printf("%d\n", c);
//	return 0;
//}
//
//int main() {
//	char ch[6];
//	scanf("%5s", &ch);
//	printf("%s", ch);
//	return 0;
//}

//int main() {
//	int x = 1;
//	int y = 2;
//	int z = 3;
//	int count = scanf("%d %d %d", &x, &y, &z);
//	printf("x=%d y=%d z=%d\n", x, y, z);
//	printf("%d\n", count);
//	return 0;
//}

//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	while (scanf("%d %d", &num1, &num2) == 2) {
//		printf("%d\n", num1 + num2);
//	}
//	return 0;
//}

int main() {
	int x;
	int y;
	int z;
	scanf("%d%*c%d%*c%d", &x, &y, &z);
	printf("%d年%d月%d日\n", x, y, z);
	return 0;
}