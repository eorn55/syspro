#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void alarmHandler(int signo);

int main( )
{
    int sec = 0;

    signal(SIGALRM,alarmHandler);
    alarm(5);
    while (1) {
        sleep(1);
        printf("%d second\n", ++sec);
    }
    printf(" Not Running\n");
}

void alarmHandler(int signo)
{
    printf("Wake up\n");
    exit(0);
}

