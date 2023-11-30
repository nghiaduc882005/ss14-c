#include <stdio.h>
void swap(int *a, int *b) { //hoan doi
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[], int quantity) { //sap xep noi bot, so luong
    for (int i = 0; i < quantity - 1; ++i) {
        for (int j = 0; j < quantity - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int quantity;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &quantity);

    int arr[quantity];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < quantity; ++i) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, quantity);

    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < quantity; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
