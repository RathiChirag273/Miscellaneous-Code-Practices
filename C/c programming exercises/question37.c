//37.	Write a C program to find one's complement of a binary number.
#include <stdio.h>
#define bit 8
void main()
{   char n[bit+1], ans[bit+1];
    int i, error=0;
    printf("Enter %d bit binary value: ",bit);
    gets(n);
    for(i=0;i<bit;i++)
    {
        if(n[i]=='1') ans[i]='0';
        else if(n[i]=='0') ans[i]='1';
        else
        {
            printf("Invalid Input");
            error = 1;
            break;
        }
    }
    ans[bit]='\0';
    if(error == 0)
    {
        printf("Original binary = %s\n",n);
        printf(" Ones complement = %s",ans);
    }
}
