#include <unistd.h>
char    *ft_strcpy(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (src[i] != '\0')
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';


    return (dest);
}



int main(void)
{
    char source[]  = "je tesst mon code dans tous les cas"; 
    char destination[] = "" ;
    ft_strcpy(destination, source);

    int i = 0;
    while (destination[i] != '\0')
    {
        write(1, &destination[i], 1);
        i++;
    }
    

    return (0);
}

