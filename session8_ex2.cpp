#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho m?t m?ng
    int mang[] = {10, 20, 30, 40, 50};
    int n = sizeof(mang) / sizeof(mang[0]); // T�nh s? ph?n t? c?a m?ng

    // Khai b�o bi?n d? luu ph?n t? ngu?i d�ng nh?p
    int phanTu;
    int viTri = -1; // Bi?n d? luu v? tr� c?a ph?n t?, m?c d?nh l� -1 (kh�ng t�m th?y)

    // Y�u c?u ngu?i d�ng nh?p m?t ph?n t?
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &phanTu);

    // Ki?m tra ph?n t? c� t?n t?i trong m?ng kh�ng
    for (int i = 0; i < n; i++) {
        if (mang[i] == phanTu) {
            viTri = i; // G�n v? tr� c?a ph?n t?
            break;
        }
    }

    // In k?t qu?
    if (viTri != -1) {
        printf("Vi tri phan tu trong mang la: %d\n", viTri);
    } else {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

