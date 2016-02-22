#include<stdio.h>
/* 打印 Fibonacci 数列 */
int main(void)
{
	int i;
	int f[20] = {1,1}; //对最前面的两个元素 f[0]和f[1]，赋初值
	for(i=2; i<20; ++i)
	{
		f[i] = f[i-2] + f[i-1];
	}

	for(i=0; i<20; ++i)
	{
		if(i%5==0) printf("\n");
		printf("%12d", f[i]);
	}

	printf("\n");
	return 0;
}
