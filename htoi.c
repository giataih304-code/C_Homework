#include <stdio.h>

int htoi(char s[])
{
    int i = 0, answer = 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
    {
        i = 2;
    } 
    while(s[i] != '\0' && s[i] != '\n' && s[i] != ' ')
    {
        int m = 0;
        if(s[i] >= '0' && s[i] <= '9')
        {
            m = s[i] - '0';
        }
        else if(s[i] >= 'a' && s[i] <= 'f')
        {
            m = s[i] -'a' + 10;
        }
        else if(s[i] >= 'A' && s[i] <= 'F')
        {
            m = s[i] -'A' + 10;
        }
        else
        {
            break;
        }
        answer = answer * 16 + m;
        i++;
    }
    return answer;
}

int main()
{
    int n;
    char s[1000];
    if(scanf("%d", &n) != 1)
    {
        return 0;
    }

    while(n > 0)
    {
        scanf("%s", s);
        printf("%d\n", htoi(s));
        n--;
    }
    return 0;
}