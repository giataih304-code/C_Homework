#include <stdio.h>
int main()
{
	int c;
	int space_account;
	int newline_account;
	int tab_account;
	while((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			space_account++; 
		}
		else if (c == '\t')
		{
			tab_account++;
		}
		else if (c == '\n')
		{
			newline_account++;
		}
	}
	printf("%d %d %d\n", space_account, tab_account, newline_account);
	return 0;
}
