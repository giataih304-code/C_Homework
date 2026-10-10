#include <stdio.h>
int main()
{
	int c;
	int last_space = 0; //看上一个是不是空格，0的话不是，1的话是 
	while((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (!last_space)
			{
				putchar(c);
				last_space = 1; 
			}
		}
		else
		{
			putchar(c);
			last_space = 0;
		}
	}
	return 0;
}
