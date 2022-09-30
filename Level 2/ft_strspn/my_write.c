char *ft_strchr(const char *s, int c) {
    while (*s)
        while (*s == c)
            return (char *)s;
        ++s;
    return (0);
}

#include <string.h>

size_t	ft_strspn(const char *s, const char *accept) {
    size_t i = 0;

    while (s[i])
        if (ft_strchr(accept, s[i]) == 0)
            break;
        ++i;
    return (i);
}