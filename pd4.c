// zad.3.2.4 
#include <stdio.h>
#include <stdlib.h>

void wsk(int *wska, int *wskb)
{
    if(*wska > *wskb)
    {
        int bufor = *wska;
        *wska = *wskb;
        *wskb = bufor;
        printf("Wartosci zamienione\n");
    }
    printf("a: %d, b: %d", *wska, *wskb);
}
int main()
{
    int a = 59, b = 27;
    wsk(&a, &b);

    return 0;
}


// zad.3.2.5 
#include <stdio.h>
#include <stdlib.h>

int dodawanie(const *wska, const *wskb)
{
    int s = *wska + *wskb;
    return s;
}

int main()
{
    const int a = 27, b = 13;
    printf("%d + %d = %d", a, b, dodawanie(&a, &b));

    return 0;
}


// zad.3.2.6 
#include <stdio.h>
#include <stdlib.h>

void wsk(int n, int *w)
{
    *w = n;
    printf(" n=%d\n x=%d\n", n, *w);
}

int main()
{
    int n = 27, x;
    int *w = &x;
    wsk(n, w);
    return 0;
}


// zad.3.2.10 
#include <stdio.h>
#include <stdlib.h>

int funkcja()
{
    double b;
    double *wskaznik;
    wskaznik = (double*) malloc(b * sizeof(*wskaznik));

    return wskaznik;
}

int main()
{
    printf("%p", funkcja());
    return 0;
}