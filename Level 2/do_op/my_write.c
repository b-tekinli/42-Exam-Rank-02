#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av) {
    int result;
    
    if (ac == 4)
    {
        int a = atoi(av[1]);
        int b = atoi(av[3]);
        char op = av[2][0];
        
        if(op == '+')
            result = a + b;
        if(op == '-')
            result = a - b;
        if(op == '*')
            result = a * b;
        if(op == '/')
            result = a / b;
        if(op == '%')
            result = a % b;
        printf("%d", result);
    }
    printf("\n");
    return (0);
}