#include <limits.h>
#include <stdio.h>

int myAtoi(char* s) {
    int i = 0;
    long result = 0;
    int sign = 1;

    while (s[i] == 32 || s[i] >= 9 && s[i] <= 13)
        i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }
    while (s[i] && s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + s[i] - '0';
        if (result > INT_MAX && sign == 1)
            return INT_MAX;
        if (result > (long)INT_MAX + 1 && sign == -1)
            return INT_MIN;
        i++;
    }
    return (int)(result *sign);
}
