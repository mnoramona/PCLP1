#include <stdio.h>


//Scrieţi un program care adună de n ori x şi de n ori y. Se vor afişa la fiecare n/10 termeni calculaţi sumele parţiale şi se vor folosi ambele formate de afişare: %f şi %e.


int main(){
    float x, sx = 0;
    double y, sy = 0;
    int n,i;
    scanf ("%d %f %lf", &n, &x, &y);
    for(i = 1; i <= n; i++){
        sx = sx + x;
        sy = sy + y;
        if(i%(n/10)==0){
            printf("%f %e %f %e \n", sx, sx, sy, sy);
        }
    }
    return 0;
}
