#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    char str2[1000];
   printf("String 1:");
    gets(str1);
    printf("String 2:");
    gets(str2);
    int count=0;
    if (strlen(str1) > strlen(str2))
    {   
        for (int i=0; i < strlen(str1); i++)
        {
            if (str2[0]==str1[i])
            {
                for (int j=i,k=0; j < strlen(str2), k < strlen(str2); j++,k++)
                {
                    if (str2[k]==str1[j])
                    {
                        count++;
                    }
                }
            }
            
            if (count==strlen(str2))
            {
                break;
            }
        }
    }
    else if (strlen(str2) > strlen(str1))
    {
         for (int i=0; i < strlen(str2); i++)
        {
            if (str1[0]==str2[i])
            {
                for (int j=i,k=0; j < strlen(str1), k < strlen(str1); j++,k++)
                {
                    if (str1[k]==str2[j])
                    {
                        count++;
                    }
                }
            }
            if (count==strlen(str1))
            {
                break;
            }
        }
    }
    else if (strlen(str2) == strlen(str1))
    {
         for (int i=0; i < strlen(str2); i++)
        {
            if (str1[0]==str2[i])
            {
                for (int j=i,k=0; j < strlen(str1), k < strlen(str1); j++,k++)
                {
                    if (str1[k]==str2[j])
                    {
                        count++;
                    }
                }
            }
            if (count==strlen(str1))
            {
                break;
            }
        }
    }
    if (count == strlen(str2))
    {
        printf("String 2 is a substring in String 1");
        
    }
    else if (count == strlen(str1))
    {
        printf("String 1 is a substring in String 2");
    }
    else{
        printf("None of the strings is a substring of the other one");
    }
    //printf("%d %d",count,strlen(str2));

}