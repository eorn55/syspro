#include <stdio.h>
#include "book.h"


int main(int argc, char* argv[])
{
	struct book bok;
	FILE *fp;

		if(argc != 2) {
		fprintf(stderr, "How to use: %s FileName\n", argv[0]);
		return 1;
		}
	fp = fopen(argv[1],"wb");
	 printf("%-4s %-9s %-9s %-6s %-4s %-6s\n","id",  "bookname", "author", "year", "numofborrow", "borrow"); 	
    while (scanf("%d %s %s %d %d %d ", &bok.id, bok.bookname, bok.author, &bok.year, &bok.numofborrow, &bok.borrow) == 6) 
        fwrite(&bok, sizeof(bok), 1, fp);

    fclose(fp);
    return 0;
	}
