#include <stdio.h>
double f_to_c(int fahr)//定义函数 
	{
		return 5.0 * (fahr - 32.0) / 9.0;
	}
int main()
{
	double celsius;
	int lower, upper, step, fahr;//定义变量名
	 
	if(scanf("%d %d %d", &lower, &upper, &step) != 3)
	{
		return 0;
	}//接受三个值 
	
	fahr = lower;
	while(fahr <= upper)
	{
		celsius = f_to_c(fahr);
		printf("%d %.1f\n", fahr, celsius); 
		fahr += step;
	}
	
	return 0;
}
