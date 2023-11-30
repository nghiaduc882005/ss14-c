#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void importStr(char *s) { //nhap chuoi
    printf("Nhap vao mot chuoi: ");
    gets(s); 
}

void printfStr(char *s) { //in chuoi
    printf("Chuoi vua nhap la: %s\n", s); 
}

void copyStr(char *s1, char *s2) { //sao chep chuoi
    while (*s1 != '\0') { 
        *s2 = *s1; 
        s1++; 
        s2++; 
    }
    *s2 = '\0'; 
}

void addStr(char *s1, char *s2) { //them chuoi
    while (*s1 != '\0') { 
        s1++; 
    }
    while (*s2 != '\0') { 
        *s1 = *s2; 
        s1++; 
        s2++; 
    }
    *s1 = '\0'; 
}

int strComparison(char *s1, char *s2) { //so sanh chuoi
    while (*s1 != '\0' && *s2 != '\0') { 
        if (*s1 < *s2) { 
            return -1; 
        } else if (*s1 > *s2) { 
            return 1; 
        } else { 
            s1++; 
            s2++;
        }
    }
    if (*s1 == '\0' && *s2 == '\0') { 
        return 0; 
    } else if (*s1 == '\0') { 
        return -1; 
    } else { 
        return 1; 
    }
}

void reverseStr(char *s) {
    int n = strlen(s); 
    char *p1 = s; 
    char *p2 = s + n - 1;
    char temp;
    while (p1 < p2) { 
        temp = *p1; 
        *p1 = *p2; 
        *p2 = temp; 
        p1++; 
        p2--; 
    }
}

int main() {
    char s1[100], s2[100]; 
    int choice; 
    int result; 
    do {
        printf("MENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Sao chep chuoi vao mot chuoi khac\n");
        printf("4. Nhap vao chuoi khac, tien hanh them chuoi do vao chuoi ban dau\n");
        printf("5. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("6. In ra chuoi dao nguoc\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                importStr(s1);
                break;
            case 2:
                printfStr(s1);
                break;
            case 3:
                copyStr(s1, s2);
                printf("Chuoi s2 sau khi sao chep tu chuoi s1 la: %s\n", s2);
                break;
            case 4:
                importStr(s2);
                addStr(s1, s2);
                printf("Chuoi s1 sau khi them chuoi s2 la: %s\n", s1);
                break;
            case 5:
                importStr(s2);
                result = strComparison(s1, s2); //result: ket qua 
                if (result == 0) {
                    printf("Hai chuoi bang nhau\n");
                } else if (result < 0) {
                    printf("Chuoi s1 nho hon chuoi s2\n");
                } else {
                    printf("Chuoi s1 lon hon chuoi s2\n");
                }
                break;
            case 6:
                break;
            case 7:
				exit(0);
		}
	}while(1==1);
}
