/*
Scrieţi un program care citeşte de la tastatură un număr natural n 

şi construieşte în memorie o matrice cu n linii şi n coloane ale cărei 

elemente vor primi valori după cum urmează: elementul din linia i şi coloana j 

primeşte ca valoare ultima cifră a produsului i * j (1 ≤ i ≤ n şi 1 ≤ j ≤ n).

Date de intrare

Programul citește de la tastatură numărul n
Date de ieşire

Programul afișează pe ecran matricea construită, câte o linie a matricei pe câte o linie a ecranului, 

elementele fiecărei linii fiind separate prin câte un spaţiu.
Restricţii şi precizări

    2 ≤ n ≤ 24

Exemplu:
*/

#include <stdio.h>

#define MAX 25

void generateMatrix(int a[][MAX],int n){
    for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                a[i][j] = i * j % 10;
            }
        }
}

void printMatrix(int a[][MAX], int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

int main(void){
    int n = 0;
    scanf("%d", &n);

    int a[MAX][MAX];

    generateMatrix(a, n);

    printMatrix(a, n);
    return 0;
}