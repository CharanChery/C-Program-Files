/*                                                          Print the pattern like 
54321
54321
54321
54321
54321
                                                                                                                                */
/*
#include<stdio.h>
int main()
{
    int i; int j;

    for(i=1; i<=5; i++)
    {
        for(j=5; j>=1; j--)
        {
            printf("%d ",j);
        }
    printf("\n");
    }

    return 0;
}
*/
/*                                      print the pattern in another way                    */
/*
#include<stdio.h>
int main()
{
    int i; int j;

    for(i=5; i>=1; i--)
    {
        for(j=5; j>=1; j--)
        {
            printf("%d ",j);
        }
    printf("\n");
    }

    return 0;
}
*/
/*                                      print the pattern in another way                    */
/*
#include<stdio.h>
int main()
{
    int i; int j; int k=5;

    for(i=5; i>=1; i--)
    {
        for(j=5; j>=1; j--,k--)
        {
            printf("%d ",k);
        }
        k=5;
        printf("\n");
    }

    return 0;
}
*/