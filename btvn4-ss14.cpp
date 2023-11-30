#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void importArr(char *a, int n){
    printf("Nhap vao %d ky tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf(" %c", a + i);
    } 
}
void printfArr(char *a, int n) {
    printf("In ra mang ky tu la: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", *(a + i)); 
    }
    printf("\n");
}
void copyArr(char *a, char *b, int n){
	for (int i = 0; i < n; i++){
		*(b + i) = *(a + i); 
	}
}
void swapArr(char *a, char *b, int n){
	char temp;
	for (int i = 0; i < n; i++){
		temp = *(a + 1);
		*(a + i) = *(b + i);
		*(b + i) = *(a + i);
	}
}
void reverseArr(char *a, int n){
	char temp;
	int i = 0;
	int j = n - 1;
	while(i < j) {
        temp = *(a + i); 
        *(a + i) = *(a + j); 
        *(a + j) = temp; 
        i++; 
        j--; 
    }
}
int search(char *a, char c, int n){
	for (int i = 0; i < n; i++) {
        if (*(a + i) == c) { 
            return i; 
        }
    }
    return -1; //neu khong tim thay ki tu c --> tra ve ky tu 1
}
int main(){
	int n; 
    char *a; 
	char *b; 
    char c; 
    int index; //muc luc
	do{
		printf("Menu\n");
		printf("1.Nhap vao mang\n");
		printf("2.In ra mang\n");
		printf("3.Sao chep mang vao mang khac\n");
		printf("4.Nhap vao mang khac, doi cho 2 mang voi nhau\n");
		printf("5.Dao nguoc mang\n");
		printf("6.Nhap vao 1 ky tu, tim kiem ky tu do trong mang\n");
		printf("7.Thoat\n");
		
		int choice;
		printf("lua chon cua ban la: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap vao so luong ky tu: ");
                scanf("%d", &n);
                a = (char *)malloc(n * sizeof(char)); //ham mallo: cap phat 1 vung nho co kich thuoc la size
                b = (char *)malloc(n * sizeof(char));
                importArr(a, n);
				break;
			case 2:
				printfArr(a, n);
				break;
			case 3:
				copyArr(a, b, n);
				printf("Mang b sau chep tu mang a la : ");
				printfArr(b, n);
				break;
			case 4:
				printf("Nhap vao mang b : ");
				importArr(b, n);
				swapArr(a, b, n);
				printf("Mang a sau khi doi cho voi mang b la : ");
				printfArr(a, n);
				printf("Mang b sau khi doi cho voi mang a la : ");
				printfArr(b, n);
				break;
			case 5:
				reverseArr(a, n);
				printf("Mang a sau khi dao nguoc la : ");
				printfArr(a, n);
				break;
			case 6:
				printf("Nhap vao ky tu can tim kiem : ");
				search(a, c, n);
				scanf(" %c", &c);
                index = search(a, n, c);
                if (index == -1) {
                    printf("Khong tim thay ky tu %c trong mang\n", c);
                } else {
                    printf("Tim thay ky tu %c tai vi tri %d trong mang\n", c, index);
                }
				break;
			case 7:
				exit(0);
		}
	}while(1==1);
}
