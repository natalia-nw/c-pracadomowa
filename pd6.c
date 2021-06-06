// zad. 3.2.12 
#include <stdio.h>
#include <stdlib.h>

double *rezerwuj(int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    int n=5;
    double *m=rezerwuj(n);
    printf("%p\n", m);
    printf("%p\n", &m);
    return 0;
}

// zad. 3.2.14 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool rowne(unsigned int n, int (*f1)(int n), int (*f2)(int n))
{
    for(int i=0; i<n; i++)
    {
        if(f1(i)!=f2(i))
            return false;
    }
    return true;
}

int fib(int n)
{
    if(n==0 || n==1)
        return 1;
    return fib(n-2)+fib(n-1);
}

int silnia(int n)
{
    if(n==0)
        return 1;
    return silnia(n-1)*n;
}

int main()
{
    unsigned int n=5;
    if(rowne(n, fib, silnia))
        printf("true");
    printf("false");
    return 0;
}