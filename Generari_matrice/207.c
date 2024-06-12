/*
Cerinţa

Scrieţi un program care citeşte de la tastatură un număr natural n şi construieşte în 

memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori după cum urmează:

    elementele aflate pe diagonala principală a matricei vor primi valoarea 0
    elementele de pe prima coloană, cu excepţia celui aflat pe diagonala principală vor primi valoarea n
    elementele de pe a doua coloană, cu excepţia celui aflat pe diagonala principală vor primi valoarea n-1
    …
    elementele de pe ultima coloană, cu excepţia celui aflat pe diagonala principală vor primi valoarea 1

Date de intrare

Programul citește de la tastatură numărul n.
Date de ieşire

Programul afișează pe ecran matricea construită, câte o linie a matricei pe câte o linie a ecranului, elementele fiecărei linii fiind separate prin câte un spaţiu.
Restricţii şi precizări

    2≤n≤24

    de ex : input 4
    output:
0 3 2 1
4 0 2 1
4 3 0 1
4 3 2 0 

*/

#include <stdio.h>

#define MAX 25

void printMatrix(int a[][MAX], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

void generateMatrix(int a[][MAX], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = n - j;
        }
        a[i][i] = 0;
    }
}


int main(void){
    int n = 0;
    //nr linii si nr coloane
    scanf("%d", &n);

    int a[MAX][MAX] = {0};

    generateMatrix(a, n);

    printMatrix(a, n);

    return 0;
}