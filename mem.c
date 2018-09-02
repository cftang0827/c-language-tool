#include "tool.c"
#include "stdio.h"
#include "stdlib.h"

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;  

int main(){
    int a[20];
    int *b = (int*)malloc(sizeof(int)*20);
    int c = 20;
    float d = 20.0;
    double e = 20.0;
    char f[] = "Hello World";
    char *g = "Hello Paul";
    struct Books h;
    printf("sizeof(a) = %d\n", (int)sizeof(a)); 
    printf("sizeof(b) = %d\n", (int)sizeof(b)); // sizeof(pointer) = 8 because it's 64 bit computer
    printf("sizeof(int) = %d\n", (int)sizeof(c)); 
    printf("sizeof(float) = %d\n", (int)sizeof(d)); 
    printf("sizeof(double) = %d\n", (int)sizeof(e)); 
    printf("sizeof(char[]) = %d\n", (int)sizeof(f));
    printf("sizeof(char) = %d\n", (int)sizeof(f[0]));
    printf("sizeof(char*) = %d\n", (int)sizeof(g));
    printf("sizeof(Books) = %d\n", (int)sizeof(h));
    free(b);
}