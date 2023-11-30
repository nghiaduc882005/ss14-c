#include <stdio.h>
int main()
{
//Khai bao bien x va con tro ptr
    int n;
    int *ptr; 
// Gan gia tri 10 cho bien va gan dia chi cua bien n cho con tro ptr 
    n = 10; //bien n
    ptr = &n; //con tro ptr
// C1: su dung ten bien va toan tu lay dia chi(&)
    printf("Gia tri cua n la: %d\n", n);
    printf("Dia chi cua n la: %p\n", &n);
// C2: su dung ten con tro va toan tu lay gia tri(*)
    printf("Gia tri cua n la: %d\n", *ptr);
    printf("Dia chi cua n la: %p\n", &ptr);
    return 0;
}
