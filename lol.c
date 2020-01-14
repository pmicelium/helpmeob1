#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("\033[2J");
    return 0;
}