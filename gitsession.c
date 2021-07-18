#include <stdio.h>
int main()
{   
    int a=5,b=3,ans,sum=0;
    printf("Choose one program to exicute\n\
    1. sum of two number\n\
    2. Count 1 to 10");
    scanf("%d",&ans);
    switch (ans)
    {
    case 1:
        sum = a + b;
        printf("the sum is %d\n", sum);
        break;
    
    case 2:
        for (size_t i = 1; i <= 10; i++)
        {
            printf("%d\t", i);
        }
        break;
    }
    
    
}