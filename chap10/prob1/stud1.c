#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[20];
};

int main()
{
    struct student *p;   
    int n, i;

    printf("how many students? ");
    scanf("%d", &n);
    if (n <= 0) {
        fprintf(stderr, "Error\n");
        fprintf(stderr, "Program Down\n");
        exit(1);
    }

    p = (struct student *) malloc(n * sizeof(struct student));
    if (p == NULL) {
        perror("malloc"); 
        exit(2);
    }

    printf("%d id and name.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d %s\n", &p[i].id, p[i].name);

    printf("\n* Student information(reverse) *\n");
    for (i = n-1; i >= 0; i--)
        printf("%d %s\n", p[i].id, p[i].name);

    printf("\n");
    exit(0);
}

