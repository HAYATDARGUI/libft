#include <ctype.h>
#include <stdio.h>
int ft_toupper(int c)
{
    while (c >= 'a' && c <= 'z')
    {
        c -=32;
    }
    return c;
}