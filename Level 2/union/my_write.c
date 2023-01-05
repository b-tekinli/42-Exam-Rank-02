#include <unistd.h>

int main(int ac, char **av) {
    int arr[256];
    char *s1 = av[1];
    char *s2 = av[2];

    if (ac == 3)
    {
        for (int i = 0; i < 256; i++)
        arr[i] = 0;

        for (int i = 0; s1[i]; i++)
            if (!arr[(int)s1[i]]++)
                write(1, &s1[i], 1);
        
        for (int i = 0; s2[i]; i++)
            if (!arr[(int)s2[i]]++)
                write(1, &s2[i], 1);
    }
    write(1, "\n", 1);
    return (0);
} 
