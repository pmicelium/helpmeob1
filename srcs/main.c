#include "libft.h"
#define SIZE_FROG 4400

char	*ft_mystrjoin(char const *s1, char const *s2)
{
	char		*new;
	size_t		i;
	size_t		k;
	size_t		l;
	size_t		len;

	len = ft_strlen(s1);
	l = 0;
	k = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(new = (char*)malloc(sizeof(char) * (i) + 1)))
		return (NULL);
	while (k < len)
		new[k++] = s1[l++];
	l = 0;
	while (k < i)
	{
		new[k] = s2[l];
		l++;
		k++;
	}
	return (new);
}


int main (void)
{
    printf("You're borded to death, aren't you ?\n");
    //sleep(3);
    printf("Of course you are, otherwise you wouldn't lunch this program\n");
    //sleep(3);
    printf("I think you need a break\n");
    //sleep(3);
    printf("And i beleve i just got what you need...\n");

    srand(time(NULL));   // Init 4 randomness
    int r = rand();     //r is random
    r = 0;
    int foo = 0;
    if (foo ==0) //need to add rondomness with r%x when add more than dancing frog
    {
        printf("Here, i got you a dancing frog ! Hope you like it !");
        sleep(1);
        char *line;
        line = ft_strnew(sizeof(char) * SIZE_FROG);
        char gif[100];
        int fd = open("samples/dancing_frog", O_RDONLY);
        read(fd, &gif, 101);

        int nb_line = 0;
        int j;
        int k;
        int nb_img = 0;

        while(1) //do to, faire un systeme qui permet lire l'entree standard pour couper le gif avec Q par exemple...
        {
            nb_line = 0;
            j = 0;
            if (nb_img == 21)
            {
                nb_img = 0;
                close(fd);
                fd = open("samples/dancing_frog", O_RDONLY);
            }
            while (nb_line != 42)
            {
                nb_line++;
                read(fd, &gif, 101);
                k = 0;
                while(k < 100 && j < SIZE_FROG)
                {
                    line[j] = gif[k];
                    k++;
                    j++;
                }
            }
                read(fd, &gif, 101);
            printf("%s\n", line);
            TEST;
            nb_img++;
        }

    }

    return 0;
}