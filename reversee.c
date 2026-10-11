#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
	int i, j, n;
	char temp;

	n = strlen(s);
	if (n > 0 && s[n - 1] == '\n')
	{
		n--;
	}

	i = 0;
	j = n - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

int main()
{
	char line[1000];

	while (fgets(line, sizeof(line), stdin) != NULL)
	{
		reverse(line);
		printf("%s", line);
	}

	return 0;
}
