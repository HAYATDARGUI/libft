#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i =0;
    int j=0;
    int a=strlen(s1);
    int b=strlen(s2);
    char * s3;
    int len = a+b;
    s3 =malloc(sizeof(char)*(len +1));
    if (s3==NULL)
    {
        return NULL;
    }
    while (s1[i]&&i <a)
    {
        s3[i]=s1[i];
        i++;
    }
    while (s2[j]&& j <b)
    {
        s3[i]=s2[j];
        i++;
        j++;
        
    }
    s3[i]='\0';
    return s3;
}
 int main(void)
{
    char *result = ft_strjoin(NULL, "World!");

    if (result)
    {
        printf("%s\n", result); // Print the result
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

}