#include <stdio.h>
#include <stdlib.h>

int main()
{   char a;
    printf("enter an alphabet : ");
    scanf("%c",&a);
    if((a=='a')||(a=='A')||(a=='e')||(a=='E')||(a=='i')||(a=='I')||(a=='o')||(a=='O')||(a=='u')||(a=='U')) printf("its a vowel");
    else printf("its a consonant");
    return 0;
}
