// zad 2.2.5
#include <stdio.h>
#include <stdlib.h>

int pot(int n)
{
    int w = 2;
    for(int i = 1; i < n; i++)
    {
       w *= 2;
    }
    return w;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", pot(n));
    return 0;
}


// zad 2.2.6
#include <stdio.h>
#include <stdlib.h>

int pot(int n, int m)
{
    if(n == 0 && m == 0){
        printf("ERROR\n");
        return -1;
    }
    if(n < 0 || m < 0)
    {
        printf("ERROR\n");
        return -1;
    }
    int w = n;
    for(int i = 1;i < m; i++)
    {
        w *= n;
    }
    return w;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", pot(n, m));
    return 0;
}


// zad 2.2.23
#include <stdio.h>
#include <stdlib.h>

int rek(int n){
    if(n == 0) return 1;
    return 2 * rek(n - 1) + 5;
}

int main(){
    int n;
    scanf("%d", &n);
    if(n < 0){
        printf("blad\n");
        return -1;
    }
    printf("%d", rek(n));
    return 0;
}


// zad 1
#include <stdio.h>
#include <stdlib.h>

double min(double a, double b)
{
    if(a > b) return b;
    return a;
}

int main(){
    double a = 7, b = 3;
    printf("%g %g\n", a, b);
    printf("mniejsze jest ");
    printf("%g", min(a, b));

    return 0;
}


// zad 2
#include <stdio.h>
#include <stdlib.h>

void rzad_ch(char ch[], int i, int j)
{
    for(int x = 0; x < j; x++)
        {
        for(int y = 0; y < i; y++)
        {
            printf("%c", ch[0]);
        }
        printf("\n");
    }
}

int main()
{
    char ch[] = "ch";
    int i = 5, j = 3;
    rzad_ch(ch, i, j);
    return 0;
}