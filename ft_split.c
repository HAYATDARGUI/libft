#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static int count_words(const char *s,char c)
{
    int count=0;
    int i=0;
    if(s==  NULL)
        return 0;
    while (s[i])
    {
        while(s[i]==c )
            i++;
        if(s[i]!= c && s[i])
            count++;
        while (s[i] != c && s[i])
        {
            i++;
        }
    }
    return count;
}
char **ft_split(char const *s, char c)
{
    int i = 0;
    char **array;
    int windex=0;
    
    array=malloc(sizeof(char*)*(count_words(s,c)+1));
    if(array==NULL)
    {
        return NULL;
    }
    if(s[i]=='\0')
    {
        return NULL;
    }
    while (s[i])
    {
        while(s[i]== c)
        {
            i++;
        }
        if(s[i])
        {
            int start = i;
            while (s[i]!= c && s[i])
            {
                i++;
            }
            int words_len= i-start+1;
            array[windex]=malloc(sizeof(char)*(words_len +1 ));

            if (array[windex]==NULL)
            {
                return NULL;
            }
            int j=0;
            while (j < words_len )
             {
                 array[windex][j]=s[start+j];
                j++;
             } 
             array[windex][words_len] = '\0'; 
             windex++;
            
        }
    }
        
    array[windex]=NULL;
    return array;
}
// int main()
// {
//     char *str = "";
//     char delimiter = ' ';
//     size_t word_count;
//     word_count = count_words(NULL, delimiter);
//     printf("The number of words in the string is: %zu\n", word_count);

//     return 0;
// } 
int main() {
    char str[] = "hayat dargui hello world";
    char **result = ft_split(str, ' ');

    // طباعة النتائج
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]); // طباعة كل كلمة
    }

    // ملاحظة: تم تعليق عملية تحرير الذاكرة هنا، لذا يجب أن تقوم بتحريرها لاحقاً بعد اختبار البرنامج.
    // for (int i = 0; result[i] != NULL; i++) {
    //     free(result[i]); // حرر الذاكرة المخصصة للكلمة
    // }
    // free(result); // حرر الذاكرة المخصصة للمصفوفة

    return 0;
}