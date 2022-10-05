#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av) {
    if (ac == 3)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[2]);
        if (n1 > 0 && n2 > 0)
        {
            while (n1 != n2)
            {
                if (n1 > n2)
                {
                    n1 -= n2;
                }
                else
                {
                    n2 -= n1;
                }
            }
            printf("%d", n1);
        }
    }
    printf("\n");
    return (0);
}
