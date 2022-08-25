/*Aim: Pattern program in c like 
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5

Program:

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
*/

/*
Aim: Pattern program in c like 
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

Program:

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
*/
/*
Aim: Pattern program in c like 
5
5 4
5 4 3
5 4 3 2 
5 4 3 2 1

Program:

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
*/