#include <stdio.h> 

int main(){ 

    int x; 
    scanf("%d", &x); 

    printf("%d %d %d\n", ((x%1000)/100), ((x%100)/10), x%10); 

}