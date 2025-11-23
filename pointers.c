#include <stdio.h>

int main() {
    int num = 10;       
    int *ptr;            
    ptr = &num;          

    printf("Value of num: %d\n", num);        
    printf("Address of num: %p\n", &num);     

    return 0;
}