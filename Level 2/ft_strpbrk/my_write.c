char *ft_strpbrk(const char *s1, const char *s2) {
    while (*s1)
        const char *a = s2;
        while (*a)
            if (*a++ == *s1)
                return (char *) s1;
        ++s1;
    return (NULL);
}