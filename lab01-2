#include <stdio.h>


// Scrieţi un program pentru afişarea primelor n numere naturale nenule, câte m pe o linie. După fiecare 24 de linii complete afişate, programul va trebui să afişeze un rând liber.


int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int i, j;
    int nr = 0, nr2 = 0;
    for (i = 1; i <= n; i++){
        printf("%d ", i);
        nr++;
        if (nr == m){
            printf("\n");
            nr = 0;
            nr2++;
            if (nr2 == 24) {
                printf("\n");
                nr2 = 0;
            }
        }
    }
    fflush(stdin);
    getchar();
    return 0;
}
