#include <stdio.h> 

int main(){ 

    int a = 5; 
    int b = 10; 
    int temp = 0; 

    printf("%d %d\n", a, b); 

    temp = a; 
    a = b; 
    b = temp; 

    printf("%d %d\n", a, b); 


}