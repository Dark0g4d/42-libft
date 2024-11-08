#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int len;
    char    *strtrm;

    i = 0;
    if (s1 == NULL)
        return (NULL);
    len = ft_strlen(s1);
    strtrm = malloc(len + 1);
    if (strtrm == NULL)
        return (NULL);
    
    return (strtrm);
}