
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    int i =0;
    unsigned int slen =strlen(s);
    char * result;
    result =malloc(sizeof(char)*(len +1));
    if (result==NULL)
    {
        return NULL;
    }
    if (start >= slen) 
    {
        result = malloc(1);///Allocate memory for an empty string
        if (result == NULL) 
        {
            return NULL; 
        }
        result[0] = '\0'; 
        return result;
    }
    while (s[i] && s[i+start] && i< len)
    {
        result[i] =s[i+start];
        i++;
    }
    result[i] ='\0';
    return result;
}

int main() {
    char *s = ft_substr("Hello, world!", 7, 5);
    if (s) {
        printf("%s\n", s); 
    } 
}