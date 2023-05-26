#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caesar_cipher(char *string, int shift)   {
    int i;
    for (i = 0; string[i] != '\0'; i++) {
        // Kiểm tra ký tự có phải là chữ cái không
        if (isalpha(string[i])) {
            // Xác định vị trí ký tự trong bảng chữ cái
            int char_index = tolower(string[i]) - 'a';
            // Dịch chuyển ký tự và tính toán vị trí mới
            int new_char_index = (char_index + shift) % 26;
            // Xác định ký tự mới
            char new_char = new_char_index + 'a';
            // Nếu ký tự cũ là chữ hoa thì đổi thành chữ hoa ký tự mới
            if (isupper(string[i])) {
                new_char = toupper(new_char);
            }
            // Thay thế ký tự cũ bằng ký tự mới
            string[i] = new_char;
        }
    }
}

int main() {
    char string[100];
    int shift;
    printf("Nhap chuoi can ma hoa: ");
    fgets(string, sizeof(string), stdin);
    printf("Nhap so luong ky tu muon dich chuyen: ");
    scanf("%d", &shift);
    // Loại bỏ ký tự newline được thêm vào khi sử dụng fgets
    string[strcspn(string, "\n")] = '\0';
    caesar_cipher(string, shift);
    printf("Chuoi da ma hoa la: %s", string);
    return 0;
}