/* 
Aim: Pattern programming on Characters like
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

Program:

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
}*/

/*
Aim: Pattern programming on Characters like
E D C B A
E D C B A
E D C B A
E D C B A
E D C B A

Program:

#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=1;j--)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
}
*/