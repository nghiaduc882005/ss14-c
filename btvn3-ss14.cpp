#include <stdio.h>
int distance(char *s) {
    int count = 0; 
    while (*s != '\0') { 
        count++; 
        s++; 
    }
    return count; 
}

int main() {
    char s1[100], s2[100]; 
    int d1, d2; 
    printf("Nhap vao chuoi thu nhat: ");
    gets(s1); 
    printf("Nhap vao chuoi thu hai: ");
    gets(s2); 
    d1 = distance(s1); 
    d2 = distance(s2); 
    printf("Do dai cua chuoi thu nhat la: %d\n", d1); 
    printf("Do dai cua chuoi thu hai la: %d\n", d2); 
    if (d1 > d2) { 
        printf("Chuoi co do dai lon hon la: %s\n", s1); 
    } else if (d1 < d2) { 
        printf("Chuoi co do dai lon hon la: %s\n", s2); 
    } else { 
        printf("Hai chuoi co do dai bang nhau\n"); 
    }
    return 0;
}

