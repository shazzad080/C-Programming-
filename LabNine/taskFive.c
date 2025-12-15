#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    int vowelCount=0,constCount=0,digits=0,others=0;
    if((fp=fopen("abcd.txt","r"))==NULL){
        printf("Error");
        exit(1);
    }
    char ch=fgetc(fp);
    while (ch!=EOF) {
        if((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z')){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='U'){
                vowelCount++;
            }else{
                constCount++;
            }
        }else if(ch >= '0' && ch <= '9'){
            digits++;
        }else{
            others++;
        }
        ch = fgetc(fp); 
    } 
    fclose(fp);
    printf("Vowel:%d\n",vowelCount);
    printf("Consonant:%d\n",constCount);
    printf("Digits:%d\n",digits);
    printf("Others:%d\n",others);
}
