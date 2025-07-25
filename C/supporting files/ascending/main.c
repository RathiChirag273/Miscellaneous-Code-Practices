#include <stdio.h>

int main() {
    int i,a[5],j,temp;
    printf("enter 5 values \n");
    //for loops
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("ascending order :\t ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
