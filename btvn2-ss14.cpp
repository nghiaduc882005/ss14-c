#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}
int diff(int *a, int *b) {
    return *a - *b; 
}
int main() {
    int x, y; 
    int *p, *q; 
    printf("Nhap gia tri cua x va y: ");
    scanf("%d%d", &x, &y); 
    p = &x; 
    q = &y; 
    printf("Truoc khi doi cho: x = %d, y = %d\n", x, y); 
    printf("Hieu cua x va y truoc khi doi cho: %d\n", diff(p, q)); 
    swap(p, q); 
    printf("Sau khi doi cho: x = %d, y = %d\n", x, y); 
    printf("Hieu cua x va y sau khi doi cho: %d\n", diff(p, q));
    return 0;
}

