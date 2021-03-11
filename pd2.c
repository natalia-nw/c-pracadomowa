// Natalia Wenda
// zad 6.2.1
int** alokuj(unsigned int n, unsigned int m)
{
    int ** t=malloc(n*sizeof(int*));
    int i;
    for(i=0; i<n; i++)
        t[i]=malloc(m*sizeof(int));
    return t;
}

// zad 6.2.2
int (* alokuj(unsigned int n, unsigned int m))[]
{
    return malloc(n*sizeof(int[m]));
}

// zad 6.2.3
void zwolnij(unsigned int n, unsigned int m, int ** t)
{
    int i;
    for(i=0; i<n; i++)
        free(t[i]);
free(t);
}

// zad 6.2.4
void zwolnij(unsigned int n, int t[][n])
{
    free(t);
}

// zad 7.2.1
struct trojkat
{
    double a, b, c;
};
double obwod(struct trojkat t)
{
    return t.a+t.b+t.c;
}

// zad 7.2.2
void przepisz(struct trojkat t1, struct trojkat *t2)
{
    *t2=t1;
}

// zad 7.2.3
struct punkt
{
    double x, y, z;
};
double minimum(struct punkt tab[], int n)
{
    int i, j;
    double pom, min=sqrt(pow(tab[1].x-tab[0].x,2)
                         +pow(tab[1].y-tab[0].y,2)
                         +pow(tab[1].z-tab[0].z,2);
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
        {
            pom=sqrt(pow(tab[j].x-tab[i].x,2)
                     +pow(tab[j].y-tab[i].y,2)
                     +pow(tab[j].z-tab[i].z,2));
            if(pom<min) min=pom;
        }
    return min;
}

// zad 7.2.4
void przepisz(struct punkt tab1[], struct punkt tab2[], unsigned int n)
{
    int i;
    for(i=0; i<n; i++)
        tab2[i]=tab1[i];
}

// zad 7.2.5
struct punkt10
{
    double t[10];
}
void przepisz(struct punkt10 tab1[], struct punkt10 tab2[], unsigned int n)
{
    int i;
    for(i=0; i<n; i++)
        tab2[i]=tab1[i];
}



























