/*Aim: Pattern program in c like 
A
A B
A B C
A B C D
A B C D E

Program:

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
}
*/

/*Aim: Pattern program in c like 
E
E D
E D C
E D C B
E D C B A

Program:

#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
}
*/
