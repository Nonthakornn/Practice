#include <stdio.h>
#include <stdbool.h>

bool isSubsequence(char* s, char* t) {
    
    int i = 0;
    int j = 0;

    while (t[i])
    {
        if (t[i] == s[j])
            j++;
        i++;
    }
    if (!s[j])
        return (true);
    return (false);
}