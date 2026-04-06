#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("a: %p\nb: %p\nc: %p\n", (void*)&a, (void*)&b, (void*)&c);

    long diff_ab = (char*)&b - (char*)&a;
    long diff_bc = (char*)&c - (char*)&b;
    
    printf("\nРазница между a и b: %ld байт\n", diff_ab);
    printf("Разница между b и c: %ld байт\n", diff_bc);
    printf("\nОбъяснение: переменные располагаются в стеке последовательно,\n");
    printf("но компилятор может добавлять выравнивание (padding) для оптимизации\n");
    printf("доступа к памяти. Поэтому расстояние не всегда равно sizeof(int).\n");
    
    return 0;
}