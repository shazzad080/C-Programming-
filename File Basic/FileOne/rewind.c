#include <stdio.h>
 
int main(){
    FILE* fptr;
    fptr = fopen("file.txt", "w+");
    fprintf(fptr, "Shazzads Blog\n");
    rewind(fptr);
    char buf[50];
    fscanf(fptr, "%[^\n]s", buf);
    printf("%s", buf);
    return 0;
}