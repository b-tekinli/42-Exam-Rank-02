int is_blank(char c) {
    if (c <= 32)
        return (1);
    return (0);
}

int is_valid(char c, int base) {
    char digit[17] = "0123456789abcdef";
    char digit2[17] = "0123456789ABCDEF";

    while (base--)
        if (c == digit[base] || c == digit2[base])
            return (1);
    return (0);
}

int ft_value_of(char c) {
    if (c >= '0' && c <= '9')
        return (c - 0);
    else if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (0);
}

int ft_atoi_base(char *str, int str_base) {
    int result = 0;
    int n;

    while (is_blank(*str))
        str++;
    
    n = (*str == '-' ? -1 : 1);

    (*str == '-' || *str == '+' ? *str++ : 0);

    while (is_valid(*str, str_base))
        result = result * str_base + ft_value_of(*str++);
        
    return (result * n);
}
