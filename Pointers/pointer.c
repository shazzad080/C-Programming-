 #include<stdio.h>
 
 int main(){
    int year=22;
    int *ptr=&year;
    //address
//    printf("%p\n",&year);
//      printf("%u\n",&year);
//        printf("%u\n",ptr);
//          printf("%u\n",&ptr);
//format specifier value
     printf("%d\n",year);
     printf("%d\n",*ptr);
     printf("%d\n",*(&year));
    return 0;
 }