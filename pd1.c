//Natalia Wenda

//zad. 1.3.3 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Podaj trzy liczby: \n");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c)
    {
        printf("liczba %d jest najwieksza", a);
    }
    else if(b>a && b>c)
    {
        printf("liczba %d jest najwieksza", b);
    }
    else if(c>a && c>b)
    {
        printf("liczba %d jest najwieksza", c);
    }
    else if(a==b && b==c)
    {
        printf("liczby sa rowne");
    }
    else if(a==b && c>a)
    {
        printf("liczba %d jest najwieksza", c);
    }
    else if(a==b && c<a)
    {
        printf("liczba %d jest najwieksza", a);
    }
    else if(b==c && a>b)
    {
        printf("liczba %d jest najwieksza", a);
    }
    else if(b==c && a<b)
    {
        printf("liczba %d jest najwieksza", b);
    }

    return 0;
}


//zad. 1.3.7

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;
    printf("Podaj wspolczynniki rownania ax^2+bx+c \n");
    scanf("%f%f%f", &a, &b, &c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x1=(-b-sqrt(d))/2*a;
        x2=(-b+sqrt(d))/2*a;
        printf("x1=%.f x2=%.f", x1, x2);
    }
    else if(d==0)
    {
        x1=-b/2*a;
        printf("x1=%.f", x1);
    }
    else
    {
        printf("Brak rozwiazan, delta ujemna");
    }
    return 0;
}

//zad. 1.3.9

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, wynik;
    int dzialanie;
    printf("Podaj dwie liczby: \n");
    scanf("%f%f", &a, &b);
    printf("Podaj numer dzialania jakie chcesz wykonac: \n 1.dodawanie \n 2.odejmowanie \n 3.mnozenie \n 4.dzielenie \n");
    scanf("%d", &dzialanie);

    switch(dzialanie)
    {
        case 1:
            wynik=a+b;
            printf("%.f", wynik);
            break;
        case 2:
            wynik=a-b;
            printf("%.f", wynik);
            break;
        case 3:
            wynik=a*b;
            printf("%.f", wynik);
            break;
        case 4:
            wynik=a/b;
            printf("%.f", wynik);
            break;
    }

    return 0;
}
