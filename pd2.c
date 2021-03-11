// rozdzial 6
// zad1
#include <stdio.h>
int main()
{
    char tab[26];
    int i=0;
    char c='a';
    while(c<='z')
    {
        tab[i]=c;
        i++;
        c++;
    }
    for(int i=0; i<26; i++)
    {
        printf("%c\n",tab[i]);
    }
    return 0;
}

// zad2
#include <stdio.h>
int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%s", "$");
        }
        printf("%s", "\n");
    }
}

// zad3
#include <stdio.h>
int main()
{
    char tab[]={'F','E','D','C','B','A','\0'};
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c",tab[j]);
        }
        printf("%s","\n");
    }
}

// zad4
#include <stdio.h>
int main()
{
    char c;
    printf("Podaj wielka litere alfabetu: ");
    scanf("%c",&c);
    int lit = (int)c - 65;
    for(int i = 65; i <= (int)c; i++){
        for(int z = 0; z < lit; z++){
            printf(" ");
        }
        int x;
        for(x = 65;x <= (int)c - lit; x++){
            printf("%c", x);
        }
        lit--;
        x -= 2;
        for(int j = 65; j <  i; j++){
            printf("%c", x);
            x -= 1;
        }
        printf("\n");
    }
    return 0;
}

// zad5

#include <stdio.h>
int main()
{
    int a, b;
    printf("Podaj dwie liczby calkowite, granice dolna, potem granice gorna: ");
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++)
    {
        printf("%d | %d | %d\n", i, i * i, i * i * i);
    }
    return 0;
}

//rozdzial 7
// zad1
#include <stdio.h>
#include <stdlib.h>
int main(){

    char znak;
    char ctab[400];
    int tab[400] = {0};
    int i = 1;
    while((znak = getchar()) != '#'){
        int j;
        for(j = 0; j < i; j++){
            if(ctab[j] == znak){
                tab[j]++;
                break;
            }
        }
        if(j == i){
            ctab[i - 1] = znak;
            tab[i - 1]++;
            i++;
        }
    }
    for(int x = 0; x < i - 1; x++){
        if(ctab[x] == '\n') printf("Znak: '\\n', liczba wystapien: %d\n", tab[x]);
        else printf("Znak: '%c', liczba wystapien: %d\n", ctab[x], tab[x]);
    }
    return 0;
}
// zad2
#include <stdio.h>
#include <stdlib.h>
int main(){
    char znak;
    char ctab[400];
    int i = 0;
    while((znak = getchar()) != '#'){
        if(znak == '\n') {ctab[i] = '\\n';}
        else {ctab[i] = znak;}

        i++;
    }
    for(int x = 1; x <= i; x++){
        printf("'%c'-%d, ", ctab[x - 1], (int)ctab[x - 1]);
        if(x % 8 == 0) printf("\n");
    }
    return 0;
}

// zad3
include <stdio.h>
#include <stdlib.h>
int main(){

    int liczba, parzyste = 0, nieparzyste = 0, liczbaP = 0, liczbaNP = 0;
    while(scanf(" %d", &liczba) != 0){
        if(liczba == 0) break;
        if(liczba % 2 == 0){
            parzyste += liczba;
            liczbaP++;
        }
        else{
            nieparzyste += liczba;
            liczbaNP++;
        }
    }
    float sredniaP = parzyste / liczbaP;
    float sredniaNP = nieparzyste / liczbaNP;
    printf("Parzyste: %d, srednia: %g\n", liczbaP, sredniaP);
    printf("Nieparzyste: %d, srednia: %g", liczbaNP, sredniaNP);
    return 0;
}

// zad4
  
#include <stdio.h>
#include <stdlib.h>
int main(){

    char znak;
    int zamiany = 0;
    while((znak = getchar()) != '#'){
        if(znak == '.'){
                zamiany++;
        }
        else if(znak == '!'){
            zamiany++;
        }
    }
    printf("Liczba zamian: %d\n", zamiany);
    return 0;
}

// zad 5
#include <stdio.h>
#include <stdlib.h>

int main(){

    int liczba, parzyste = 0, nieparzyste = 0, liczbaP = 0, liczbaNP = 0;
    while(free){
        scanf("%d", &liczba);
    if(liczba == 0) break;
        switch (liczba){
            case 1:
                nieparzyste += liczba;
                liczbaNP++;
                break;
            case 2:
                parzyste += liczba;
                liczbaP++;
                break;
            case 3:
                nieparzyste += liczba;
                liczbaNP++;
                break;
            case 4:
                parzyste += liczba;
                liczbaP++;
                break;
            case 5:
                nieparzyste += liczba;
                liczbaNP++;
                break;
            case 6:
                parzyste += liczba;
                liczbaP++;
                break;
            case 7:
                nieparzyste += liczba;
                liczbaNP++;
                break;
            case 8:
                parzyste += liczba;
                liczbaP++;
                break;

            case 9:
                nieparzyste += liczba;
                liczbaNP++;
                break;
        }
    }
    float sredniaP = parzyste / liczbaP;
    float sredniaNP = nieparzyste / liczbaNP;
    printf("Parzyste: %d, srednia: %g\n", liczbaP, sredniaP);
    printf("Nieparzyste: %d, srednia: %g", liczbaNP, sredniaNP);
    return 0;
}