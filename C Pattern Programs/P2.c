/*                                                          Printing the pattern like 
12345
12345
12345
12345
12345

                                                          Program:                                                        */
/*
#include<stdio.h>
int main()
{
    int i; int j;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("%d ",j);
        }
    printf("\n");
    }
    return 0;
}
*/

/*                                   Printing the pattern in another way by taking another variable                              */
/*
#include<stdio.h>
int main()
{
    int i; int j; int k=1;

    for(i=5; i>=1; i--)
    {
        for(j=5; j>=1; j--,k++)
        {
            printf("%d ",k);
        }

        k=1;
        printf("\n");

    }

    return 0;
}
*/

/*                                          Print the pattern in another way                                */
/*
#include<stdio.h>
int main()
{
    int i; int j;

    for(i=5; i>=1; i--)
    {
        for(j=1; j<=5; j++)
        {
            printf("%d ",j);
        }
    printf("\n");
    }

    return 0;
}
*/