#include <stdio.h>
 
int main() {
    int num[10];
    int V;
    
    scanf("%d", &V);
    
    num[0] = V;
    
    for(int i=1; i <10; i++){
        num[i] = num[i-1] * 2;
    }
    
    for(int i=0; i<10; i++){
        printf("N[%d] = %d\n",i,num[i]);
    }
    return 0;
}
