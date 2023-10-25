#include <stdio.h> 
#include "book.h"

int main(int argc, char* argv[]) 
{  
   struct book bok;
   FILE *fp;

   if (argc != 2) { 
      fprintf(stderr, "How to use: %s Filename\n", argv[0]);
      return 1;   
   }
	
   if ((fp = fopen(argv[1], "rb")) == NULL ) {
      fprintf(stderr, "Error Open File\n");
      return 2;
   }
	printf("%4s %9s %9s %6s %7s %4s %6s\n", "id"," bookname","author", "year", "numofborrow", "borrow");
  
   while (fread(&bok, sizeof(bok), 1, fp) > 0) 
   
	   if (bok.id != 0)
         printf("%4d %9s %9s %6d %4d %6d\n", bok.id, bok.bookname, bok.author, bok.year, bok.numofborrow, bok.borrow);
  
   fclose(fp);
   return 0;
}     


