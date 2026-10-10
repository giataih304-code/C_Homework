#include <stdio.h>
int main()
{
	int L, R, S;
	scanf("%d %d %d", &L, &R, &S);
	for(int C = L; C <= R; C+=S)
	{
		double F = 9.0 * C / 5.0 + 32;
		printf("%d %.1f\n", C, F);
	}
	return 0;
}
