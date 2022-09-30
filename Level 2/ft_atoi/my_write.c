int ft_atoi(const char *str) {
    int i = 0;
    int n = 1;
    int result;

    while (str[i] <= 32) {
        i++;
    }
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            n = -1;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9') {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (result * n);
}

#include <stdio.h>
int main() {
    char *a = "--++-4545454";
    printf("%d", ft_atoi(a));
}