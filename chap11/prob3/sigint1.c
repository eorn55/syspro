#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void intHandler(int signo);

int main( )
{
    signal(SIGINT,intHandler);

    while (1)
        pause();

    printf("Not Running \n");
}

void intHandler(int signo)
{
    printf("Interrupt Signal\n");
    printf("Signal number : %d\n", signo);
    exit(0);
}

