#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int a = 0;

    if (ac == 3)
    {
        while (av[2][a] && av[1][i])
        {
            if (av[2][a] == av[1][i])
                i++;
            a++;
        }
        if (av[1][i] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}