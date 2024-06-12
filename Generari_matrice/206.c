/*
Cerinţa

Scrieţi un program care citeşte de la tastatură două numere naturale nenule n şi m şi

care construieşte în memorie şi apoi afişează o matrice A cu n linii (numerotate de la 1 la n)
 
şi m coloane (numerotate de la 1 la m) cu proprietatea că fiecare element Aij memorează cea mai 

mică dintre valorile indicilor i şi j ( 1≤i≤n, 1≤j≤m ).


Date de intrare

Programul citește de la tastatură numerele n şi m
Date de ieşire

Programul afișează pe ecran matricea construită, câte o linie a matricei pe câte o linie a ecranului, 

elementele fiecărei linii fiind separate prin câte un spaţiu.
Restricţii şi precizări

    2≤m≤20 , 2≤n≤20

Exemplu:
*/


#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int a[MAX][MAX];

void generateMatrix(int a[][MAX],int n, int m){
    for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(i < j){
                    a[i][j] = i;
                }
                else{
                    a[i][j] = j;
                }
            }
        }
}

void printMatrix(int a[][MAX], int n, int m){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

int main(void){
    int n, m;

    scanf("%d %d", &n, &m);

    generateMatrix(a, n, m);

    printMatrix(a, n, m);

    return 0;
}