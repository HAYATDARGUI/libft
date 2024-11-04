#include <stdlib.h>

static int num_length(int n) {
    int len = 0;
    if (n <= 0)
        len++;
    while (n != 0) {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n) {
    int len = num_length(n);
    char *str = (char *)malloc(sizeof(char) * (len + 1));
    unsigned int num;

    if (!str)
        return NULL;

    str[len] = '\0';

    if (n < 0) {
        str[0] = '-';
        num = -n;
    } else {
        num = n;
    }

    while (len-- && str[len] != '-') {
        str[len] = (num % 10) + '0';
        num /= 10;
    }

    return str;
}
