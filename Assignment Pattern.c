//This code is for assignment purpose only.
//This program outputs 
//abcdefgfedcba
//abcdef fedcba
//abcde   edcba
//abcd     dcba
//abc       cba
//ab         ba
//a           a
#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    for(i=0;i<=6;i++)
    {
        for(k=97;k<=103-i;k++)
            printf("%c",k);

        for(j=1;j<=i*2-1;j++)
            printf(" ");
        for(l=103-i;l>=97;l--)
            if(l!=103)
                printf("%c",l);
        printf("\n");
    }
    return 0;
}
