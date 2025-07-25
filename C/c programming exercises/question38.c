//38.	Write a C program to find two's complement of a binary number.
#include <stdio.h>
#define bit 8
int main()
{   char n[bit+1], ans[bit+1], tc[bit+1];
    int i, carry=1;
    printf("Enter %d bit binary value: ",bit);
    gets(n);
    for(i=0;i<bit;i++)
    {
        if(n[i]=='1') ans[i]='0';
        else if(n[i]=='0') ans[i]='1';
    }
    ans[bit]='\0';
    for(i=bit-1;i>=0;i--)
    {
        if((ans[i]=='1')&&(carry==1)) tc[i]='0';
        else if((ans[i]=='0')&&(carry == 1))
        {
            tc[i]='1';
            carry = 0;
        }
        else tc[i]=ans[i];
    }
    tc[bit]='\0';
    printf("Original binary = %s\n",n);
    printf("Ones complement = %s\n",ans);
    printf("Twos complement = %s\n",tc);
}
