#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?t m?ng
    int mang[] = {10, 20, 30, 40, 50};
    int n = sizeof(mang) / sizeof(mang[0]); // Tính s? ph?n t? c?a m?ng

    // Khai báo bi?n d? luu ph?n t? ngu?i dùng nh?p
    int phanTu;
    int viTri = -1; // Bi?n d? luu v? trí c?a ph?n t?, m?c d?nh là -1 (không tìm th?y)

    // Yêu c?u ngu?i dùng nh?p m?t ph?n t?
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &phanTu);

    // Ki?m tra ph?n t? có t?n t?i trong m?ng không
    for (int i = 0; i < n; i++) {
        if (mang[i] == phanTu) {
            viTri = i; // Gán v? trí c?a ph?n t?
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

