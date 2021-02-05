#include "get_next_line.h"

int main(int argc, char *argv[])
{
    int     fd1;
    char    *line = NULL;

    int     fd2;
    // int     i = 1;
    // int     j = 1;
    // int     k = 0;

    if (argc == 1)
    {
        fd1 = 0;
        while (get_next_line(fd1, &line) > 0)
        {
            printf("next line is =>%s\n", line);
            free(line);
        }
        return (0);
    }
    else if (argc == 2)
    {
        fd1 = open(argv[1], O_RDONLY);
        while (get_next_line(fd1, &line) > 0)
        {
             printf("next line is =>%s\n", line);
            free(line);
        }
        printf("next line is =>%s\n", line);
        free(line);
    }
}