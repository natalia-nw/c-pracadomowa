// zad. 5.2.24 
#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *nap)
{
    int i=0;
    while(*nap!='\0')
    {
        nap++;
        i++;
    }
    return i;
}

void kopiuj(char *nap1, char nap2[])
{
    int i;
    int a=dlugosc(nap1);
    for(i=0; i<a; i++)
    {
        nap2[i]=*nap1;
        nap1++;
        printf("%c", nap2[i]);
    }
    nap2[i]='\0';
}

int main()
{
    char *nap1="kotek";
    char nap2[10];
    kopiuj(nap1, nap2);
    return 0;
}

// zad. 5.2.25 
#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *nap)
{
    int i=0;
    while(*nap!='\0')
    {
        nap++;
        i++;
    }
    return i;
}

void kopiuj(char *nap1, char **nap2)
{
    int i;
    int a=dlugosc(nap1);
    for(i=0; i<a; i++)
    {
        nap2[i]=*nap1;
        nap1++;
        printf("%c", nap2[i]);
    }
    nap2[i]='\0';
}

int main()
{
    char *nap1="kotek";
    char nap2[10];
    printf("%d\n", dlugosc(nap1));
    kopiuj(nap1, nap2);
    return 0;
}

// zad. 4.2.10
a)
#include <stdio.h>
#include <stdlib.h>

int najwieksza(unsigned int n, int tab[])
{
    int max=tab[0];
    for(int i=1; i<n; i++)
        {
           if(tab[i]>max)
           {
               max=tab[i];
           }
        }
    return max;
}

int main()
{
    int n=5;
    int tab[]={1,7,3,9,5};
    printf("%d", najwieksza(n,tab));
    printf("\n");

    return 0;
}

b)
#include <stdio.h>
#include <stdlib.h>

int najmniejsza(unsigned int n, int tab[])
{
    int min=tab[0];
    for(int i=1; i<n; i++)
        {
           if(tab[i]<min)
           {
               min=tab[i];
           }
        }
    return min;
}

int main()
{
    int n=5;
    int tab[]={4,7,3,9,5};
    printf("%d", najmniejsza(n,tab));
    printf("\n");

    return 0;
}

c)
#include <stdio.h>
#include <stdlib.h>

int maxi(unsigned int n, int tab[])
{
    int max=tab[0], indeks;
    for(int i=1; i<n; i++)
        {
           if(tab[i]>max)
           {
               max=tab[i];
               indeks=i;
           }
        }
    return indeks;
}

int main()
{
    int n=5;
    int tab[]={4,7,-3,9,0};
    printf("%d", maxi(n,tab));
    printf("\n");

    return 0;
}

d)
#include <stdio.h>
#include <stdlib.h>

int mini(unsigned int n, int tab[])
{
    int min=tab[0], indeks;
    for(int i=1; i<n; i++)
        {
           if(tab[i]<min)
           {
               min=tab[i];
               indeks=i;
           }
        }
    return indeks;
}

int main()
{
    int n=5;
    int tab[]={4,7,-3,9,0};
    printf("%d", mini(n,tab));
    printf("\n");

    return 0;
}

e)
#include <stdio.h>
#include <stdlib.h>

int e(unsigned int n, int tab[])
{
    int max=abs(tab[0]);
    for(int i=1; i<n; i++)
        {
           if(abs(tab[i])>max)
           {
               max=abs(tab[i]);
           }
        }
    return max;
}

int main()
{
    int n=5;
    int tab[]={4,7,-3,9,-10};
    printf("%d", e(n,tab));
    printf("\n");

    return 0;
}


f)
#include <stdio.h>
#include <stdlib.h>

int f(unsigned int n, int tab[])
{
    int max=abs(tab[0]), indeks;
    for(int i=1; i<n; i++)
        {
           if(abs(tab[i])>max)
           {
               max=abs(tab[i]);
               indeks=i;
           }
        }
    return indeks;
}

int main()
{
    int n=5;
    int tab[]={4,7,-3,9,-10};
    printf("%d", f(n,tab));
    printf("\n");

    return 0;
}

// zad. 4.2.11 
#include <stdio.h>
#include <stdlib.h>

double skalar(unsigned int n, double v1[], double v2[])
{
    int i;
    double wynik=0;
    for(i=0; i<n; i++)
    {
        wynik+=v1[i]*v2[i];
    }
    return wynik;
}

int main()
{
    int n=2;
    double v1[]={1,2};
    double v2[]={3,4};
    printf("%f\n", skalar(n,v1,v2));
    return 0;
}
