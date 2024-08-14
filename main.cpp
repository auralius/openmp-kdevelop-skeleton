#include <stdio.h>
#include <omp.h>
#include <unistd.h>


int main(int argc, char **argv)
{
    #pragma omp parallel for
    for (int i = 0; i < 10; i++) {
        sleep(1);
        printf("#%i has finished sleeping!\n", i);
    }

    return 0;
}
