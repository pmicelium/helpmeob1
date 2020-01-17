#include "libft.h"
#include <time.h>
#define SIZE_FROG 4444
#define SIZE_PIKA 3838
#define SIZE_SHOU 4747 
#define NB_GIF 3

int main (void)
{
    printf("You're borded to death, aren't you ?\n");
    sleep(1);
    printf("Of course you are, otherwise you wouldn't lunch this program\n");
    sleep(1);
    printf("I think you need a break\n");
    sleep(1);
    printf("And i beleve i just got what you need...\n");
    sleep(1);

    srand(time(NULL));   // Init 4 randomness
    int r = rand();     //r is random
    if (r%NB_GIF == 0)
    {
        printf("Here, i got you a dancing frog ! Hope you like it !\n");
        sleep(1);
        char gif[SIZE_FROG + 1];
		ft_bzero(gif, SIZE_FROG + 1);

        int fd = open("samples/dancing_frog", O_RDONLY);
        if (fd <= 0)
            {
                printf("wtf, the file didn't open, sorry lad\n");
                return 1;
            }
        int nb_line = 0;
        int j;
        int nb_img = 0;

        while(0x42) //do to, faire un systeme qui permet lire l'entree standard pour couper le gif avec Q par exemple...
        {
            nb_line = 0;
            j = 0;
            if (nb_img == 21)
            {
                nb_img = 0;
                close(fd);
                fd = open("samples/dancing_frog", O_RDONLY);
                if (fd <= 0)
                {
                    printf("wtf, the file didn't open, sorry lad\n");
                    return 1;
                }
                ft_bzero(gif, SIZE_FROG + 1);
            }
            read(fd, &gif, SIZE_FROG);
            struct timespec t;
            t.tv_sec = 0;
            t.tv_nsec = 125000000;
            nanosleep(&t, NULL);
            printf("%s", gif);
            printf("\033[44A"); // bring the cursot 44 lines up AKA begining of the gif 
            nb_img++;
        }
    }
    else if(r%NB_GIF == 1)
    {
        printf("Be a little more like Pikachu and take a deep breath\n");
        sleep(1);
        char gif[SIZE_PIKA + 1];
		ft_bzero(gif, SIZE_PIKA + 1);
        int fd = open("samples/pika", O_RDONLY);
        if (fd <= 0)
            {
                printf("wtf, the file didn't open, sorry lad\n");
                return 1;
            }

        int nb_line = 0;
        int j;
        int nb_img = 0;

        while(0x42) //do to, faire un systeme qui permet lire l'entree standard pour couper le gif avec Q par exemple...
        {
            nb_line = 0;
            j = 0;
            if (nb_img == 10)
            {
                nb_img = 0;
                close(fd);
                fd = open("samples/pika", O_RDONLY);
                if (fd <= 0)
                {
                    printf("wtf, the file didn't open, sorry lad\n");
                    return 1;
                }
                ft_bzero(gif, SIZE_PIKA + 1);
            }
            read(fd, &gif, SIZE_PIKA);
            struct timespec t;
            t.tv_sec = 0;
            t.tv_nsec = 125000000;
            nanosleep(&t, NULL);
            printf("%s", gif);
            printf("\033[38A"); // bring the cursot 44 lines up AKA begining of the gif 
            nb_img++;
        }
    }
    else if(r%NB_GIF == 2)
    {
        printf("You know what ? It's time for a little dance...\n");
        sleep(1);
        char gif[SIZE_SHOU + 1];
		ft_bzero(gif, SIZE_SHOU + 1);
        int fd = open("samples/shoulder", O_RDONLY);
        if (fd <= 0)
            {
                printf("wtf, the file didn't open, sorry lad\n");
                return 1;
            }

        int nb_line = 0;
        int j;
        int nb_img = 0;

        while(0x42) //do to, faire un systeme qui permet lire l'entree standard pour couper le gif avec Q par exemple...
        {
            nb_line = 0;
            j = 0;
            if (nb_img == 8)
            {
                nb_img = 0;
                close(fd);
                fd = open("samples/shoulder", O_RDONLY);
                if (fd <= 0)
                {
                    printf("wtf, the file didn't open, sorry lad\n");
                    return 1;
                }
                ft_bzero(gif, SIZE_SHOU + 1);
            }
            read(fd, &gif, SIZE_SHOU);
            struct timespec t;
            t.tv_sec = 0;
            t.tv_nsec = 125000000;
            nanosleep(&t, NULL);
            printf("%s", gif);
            printf("\033[47A"); // bring the cursot 44 lines up AKA begining of the gif 
            nb_img++;
        }
    }
    return 0;
}