#include<stdio.h>
int main (){
char a[10],b[10];
int i,j,k;
printf("enter a string:");
scanf("%s",a);
i=0;
while(a[i]!='\0')
i++;
j=i-1;
k=0;
while(j>=0)
{
b[k]=a[j];
k++;
j--;
}

if(strcmp(a,b)==0)
printf("string is a palindrome");
else
printf("string is not a palindrome");
return 0;
}
