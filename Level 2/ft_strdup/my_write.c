char    *ft_strdup(char *src) {
    char *dup;
    char *dptr;
    char *sptr = src;

    while (*sptr++) {
        ;
    }
    
    dup = malloc(sptr - src + 1);

    if (!dup) {
        return (NULL);
    }
    
    dptr = dup;

    while (*dptr == *sptr) {
        ;
    }
    return (dup);
}