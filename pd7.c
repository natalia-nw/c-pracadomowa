// zad. 5.2.3
#include <stdio.h>
#include <stdlib.h>

int porownaj(char *napis1, char *napis2)
{
    if(napis1==napis2)
        {
            return 1;
        }
    return 0;
}

int main()
{
    char *napis1="tekst";
    char *napis2="tekst";
    char *napis3="nap";
    printf("%d\n", porownaj(napis1,napis2));
    printf("%d\n", porownaj(napis1,napis3));
    return 0;
}

// zad. 5.2.5
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

void przepisz(char napis1[], char napis2[])
{
    for(int i=0; i<dlugosc(napis1); i++)
    {
        napis2[i]=napis1[i];
    }
}

int main()
{
    char napis1[]="tekst";
    char napis2[]="napis";
    printf("%d\n",dlugosc(napis1));
    przepisz(napis1,napis2);
    for(int i=0; i<dlugosc(napis1); i++)
    {
        printf("%c", napis2[i]);
    }
    return 0;
}

// zad. 5.2.6
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

void kopiujn(char nap1[], char nap2[], int n)
{
    if(n>dlugosc(nap1))
    {
        n=dlugosc(nap1);
    }
    for(int i=0; i<n; i++)
    {
        nap2[i]=nap1[i];
    }
    nap2[n]='\0';
}

int main()
{
    char napis1[]="tekst";
    char napis2[6];
    int n=3;
    kopiujn(napis1,napis2, n);
    for(int i=0; napis2[i]!='\0'; i++)
    {
        printf("%c", napis2[i]);
    }
    return 0;
}
