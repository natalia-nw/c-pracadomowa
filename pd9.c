// zad. 6.2.5 (6.2.1)
#include<stdio.h>
#include<stdlib.h>

int ***tablica3w(int n, int m, int o)
{
    int ***tab=malloc(n*sizeof(int**));
    for(int i=0;i<n;i++)
    {
        tab[i]=malloc(m*sizeof(int*));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab[i][j]=malloc(o*sizeof(int));
        }
    }
    return tab;
}
int main()
{
    int n=3, m=5, o=7;
    int ***tab=tablica3w(n,m,o);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<o;k++)
            {
                tab[i][j][k]=i+2*j+3*k;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("\nPoziom %d\n",i);
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<o;k++)
            {
                printf("%d ",tab[i][j][k]);
            }
            printf("\n");
        }
    }
    printf("%p",tab);
    return 0;
}

// zad. 6.2.5 (6.2.3)
#include <stdio.h>
#include <stdlib.h>

void usun(int n, int m, int o, int ***tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            free(tab[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);
}

int main()
{
    return 0;
}

// zad. 6.2.11 
#include <stdio.h>
#include <stdlib.h>

int suma(int tab [][100], int n)
{
    int wynik=0;
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<100; j++)
        {
            wynik+=tab[i][j];
        }
    }
    return wynik;
}

int main()
{
    int n=2;
    int tab[2][100];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<100; j++)
        {
            tab[i][j]=i;
        }
    }
    printf("%d\n", suma(tab,n));
    return 0;
}

// zad. 6.2.12 
#include <stdio.h>
#include <stdlib.h>

int suma(int n, int m, int tab[n][m])
{
    int wynik=0;
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<m; j++)
        {
            wynik+=tab[i][j];
        }
    }
    return wynik;
}

int main()
{
    int n=2;
    int m=2;
    int tab[2][2];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            tab[i][j]=i;
        }
    }
    printf("%d\n", suma(n,m,tab));
    return 0;
}