#include <stdio.h>

int min(int a, int b)
{
    return ((a < b) ? a : b);
}

int maxNumberOfBalloons(char* text) {
    int i = 0;
    int b = 0;
    int a = 0;
    int l = 0;
    int o = 0;
    int n = 0;

    while (text[i])
    {
        if (text[i] == 'b')
            b++;
        else if (text[i] == 'a')
            a++;
        else if  (text[i] == 'l')
            l++;
        else if (text[i] == 'o')
            o++;
        else if (text[i] == 'n')
            n++;
        i++;
    }
    l /= 2;
    o /= 2;
    return (min(b, min(a, min(l, min(o, n)))));
}

int main()
{
	printf("%d", maxNumberOfBalloons("lloo"));
}