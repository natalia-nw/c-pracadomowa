// zad. 4.2.6
#include <stdio.h>
#include <stdlib.h>

void przepisz(unsigned int n, int *tab1, int *tab2)
{
    int i;
    for(i=0; i<n; i++)
        {
            tab2[i]=tab1[i];
            printf("%d ", tab2[i]);
        }
}

void odwrotnie(unsigned int n, int *tab1, int *tab2)
{
    int i, j;
    for(i=0, j=n-1; i<n, j>=0; i++, j--)
        {
            tab2[j]=tab1[i];
        }
}

int main()
{
    int tab1[]={1,2,3,5,7};
    int tab2[5]={};
    przepisz(5, tab1, tab2);
    printf("\n");
    odwrotnie(5, tab1, tab2);
    for(int i=0; i<5; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");
    return 0;
}

// zad. 4.2.7 
a)
#include <stdio.h>
#include <stdlib.h>

void suma(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    int i;
    for(i=0; i<n; i++)
        {
            tab3[i]=tab1[i]+tab2[i];
            printf("%d ", tab3[i]);
        }
}

int main()
{
    int tab1[]={1,2,3,4,6};
    int tab2[]={7,8,9,0,1};
    int tab3[]={4,2,7,8,0};
    suma(5, tab1, tab2, tab3);
    printf("\n");
    return 0;
}

b)
#include <stdio.h>
#include <stdlib.h>

void wiekszy(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    int i;
    for(i=0; i<n; i++)
        {
            if(tab1[i]>tab2[i])
            {
                tab3[i]=tab1[i];
            }
            tab3[i]=tab2[i];
            printf("%d ", tab3[i]);
        }
}

int main()
{
    int tab1[]={1,8,3,0,6};
    int tab2[]={7,2,9,4,1};
    int tab3[]={4,2,7,8,0};
    wiekszy(5, tab1, tab2, tab3);
    printf("\n");
    return 0;
}

c)
#include <stdio.h>
#include <stdlib.h>

void zamiana(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    int i;
    for(i=0; i<n; i++)
        {
            int tmp=tab1[i];
            tab1[i]=tab2[i];
            tab2[i]=tab3[i];
            tab3[i]=tmp;
        }
}

int main()
{
    int tab1[]={1,8,3,0,6};
    int tab2[]={7,2,9,4,1};
    int tab3[]={4,2,7,8,0};
    zamiana(5, tab1, tab2, tab3);
    for(int i=0; i<5; i++)
    {
        printf("%d ", tab1[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ", tab3[i]);
    }
    printf("\n");
    return 0;
}

// zad. 4.2.8 
a)
#include <stdio.h>
#include <stdlib.h>

void funkcja(unsigned int n, double tab1[], double tab2[], double tab3[])
{
    int i, j;
    for(i=0; i<n; i++)
        {
            tab3[i]=tab1[i];
        }
    for(j=0, i; j<n; j++, i++)
        {
            tab3[i]=tab2[j];
        }
}

int main()
{
    int n=5;
    double tab1[]={1,2,3,4,5};
    double tab2[]={6,7,8,9,0};
    double tab3[10];
    funkcja(n, tab1, tab2, tab3);
    for(int i=0; i<2*n; i++)
    {
        printf("%f ", tab3[i]);
    }
    printf("\n");
    return 0;
}

b)
#include <stdio.h>
#include <stdlib.h>

void funkcja(unsigned int n, double tab1[], double tab2[], double tab3[])
{
    int i, j;
    for(i=0, j=0; i<2*n; i+=2, j++)
        {
            tab3[i]=tab2[j];
            tab3[i+1]=tab1[j];
        }
}

int main()
{
    int n=5;
    double tab1[]={1,2,3,4,5};
    double tab2[]={6,7,8,9,0};
    double tab3[10];
    funkcja(n, tab1, tab2, tab3);
    for(int i=0; i<2*n; i++)
    {
        printf("%f ", tab3[i]);
    }
    printf("\n");
    return 0;
}

// zad. 4.2.9 
#include <stdio.h>
#include <stdlib.h>

void funkcja(unsigned int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0; i<n; i++)
        {
            int tmp;
            if(tab2[i]>tab1[i]&&tab2[i]>tab3[i])
                {
                    tmp=tab1[i];
                    tab1[i]=tab2[i];
                    tab2[i]=tmp;
                }
            if(tab3[i]>tab1[i]&&tab3[i]>tab2[i])
                {
                    tmp=tab1[i];
                    tab1[i]=tab3[i];
                    tab3[i]=tmp;
                }
            if(tab2[i]<tab1[i]&&tab2[i]<tab3[i])
                {
                    tmp=tab3[i];
                    tab3[i]=tab2[i];
                    tab2[i]=tmp;
                }
            if(tab1[i]<tab2[i]&&tab1[i]<tab3[i])
                {
                    tmp=tab3[i];
                    tab3[i]=tab1[i];
                    tab1[i]=tmp;
                }
        }
}

int main()
{
    int n=5;
    int tab1[]={1,7,3,9,5};
    int tab2[]={6,3,1,2,0};
    int tab3[]={3,0,8,4,2};
    funkcja(n, tab1, tab2, tab3);
    for(int i=0; i<5; i++)
    {
        printf("%d ", tab1[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ", tab3[i]);
    }
    printf("\n");
    return 0;
}
