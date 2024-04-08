#include<stdio.h>
int main()
{
    int ar[5]={1,2,3,4,5};
    int num = 0;
    for(int i=0; i<5; i++)
    {
        num = num*10 + ar[i];
    }
    printf("%d",num);
    return 0;
}