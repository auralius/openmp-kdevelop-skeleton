#include <stdio.h>
#include <omp.h>
#include <unistd.h>


int main(int argc, char **argv)
{
    printf("This is with OpenMP\n");
    #pragma omp parallel for
    for (int i = 0; i < 10; i++) {
        sleep(1);
        printf("#%i has finished sleeping!\n", i);
        fflush(stdout);
    }


    printf("\n\nThis is without OpenMP\n");
    for (int i = 0; i < 10; i++) {
        sleep(1);
        printf("#%i has finished sleeping!\n", i);
        fflush(stdout);
    }

    return 0;

}
