#include <stdio.h>
 
int main() {
    int tempo, velocidade;
    double total;
    
    scanf("%d %d",&tempo, &velocidade);
    
    total = ( tempo * velocidade ) / 12.0;
    
    printf("%.3lf\n",total);
    
    return 0;
}
