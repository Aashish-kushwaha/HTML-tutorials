#include<stdio.h>
int main()
{
    int a,b,c;
    int min;
    float avg;
    printf("enter three number:");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b)
    {
        if(a<c)
        {
            min=a;
        }
        else
        {
            min=c;
        }
    }else
    {
        
        if(b<c)
        {
            min=b;
        }
        else
        {
            min=c;
        }

    }
    printf("minimum element:%d",c);
    avg=((a+b+c)-min)/2.0;
    printf("avg of best two:%f",avg);
}