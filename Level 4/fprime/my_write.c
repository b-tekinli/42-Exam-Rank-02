#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av) {
    if (ac == 2)
    {
        int n = atoi(av[1]);
        int i = 2;
        
        if (n == 1)
        {
            printf("1");
        }
        while (i <= n)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                if (n == i)
                {
                    break;
                }
                printf("*");
                n /= i;
                i = 2;
            }
            i++;
        }
    }
    printf("\n");
    return (0);
}
