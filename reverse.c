#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
	int left = 0;
	int right = strlen(s) - 1;
	if (s[right] == '\n')
	{
		s[right] = '\0';
		right = strlen(s) - 1;
	}
	while(left < right)
	{
		char tem = s[left];
		s[left] = s[right];
		s[right] = tem;
		left++;
		right--;
	}
}

int main()
{
	int n;
	if(scanf("%d",&n) != 1)
	{
		return 0;
	}
	getchar();
	while(n > 0)
	{
		char s[1000];
		fgets(s, sizeof(s), stdin);
		reverse(s);
		printf("%s\n", s);
		n--;
	}
	return 0;
}
