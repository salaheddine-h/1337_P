

#include<unistd.h>


char    *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)s);
        i++;
    }
    return (NULL);
}

// strcspn function search on the s string  on how many charcters that are in reject string
size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (ft_strchr(reject, s[i]))
            return i;
        i++;
    }
    return (i);
}
