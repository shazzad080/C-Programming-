                                                                             #include<stdio.h>

int main(){
   float a,b,c,d,e,h,f,g,i;
   printf("Enter marks in Physics :");
   scanf("%f",&a); 
   printf("Enter marks in Chemistry :");
   scanf("%f",&b);
   printf("Enter marks in Biology :");
    scanf("%f",&c);
     printf("Enter marks in Mathematics :");
    scanf("%f",&d);
     printf("Enter marks in Biology :");
    scanf("%f",&e);
    printf("Enter marks in Computer :");
    scanf("%f",&i);
    f=a+b+c+d+e;
    printf("Total marks : %f\n",f);
    g=(f/500)*100;
     if(g>=80)printf("Percentage :%f ,Grade A+",g);
    else if(g>=75 && g<80)printf("Percentage :%f ,Grade A",g);
   else if(g>=70 && g<75)printf("Percentage :%f ,Grade B",g);
   else if(g>=65 && g<70)printf("Percentage :%f ,Grade C",g);
   else if(g>=60 && g<65)printf("Percentage :%f ,Grade D",g);
    else printf("Percentage :%f ,Grade F",g);
   
    return 0;
}