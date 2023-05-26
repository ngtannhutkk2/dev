#include <stdio.h>


struct SinhVien {
    int maSV;
    char hoTen;
    char lopHoc;
    float Diem;

};

void Nhap(SinhVien *a, int n){
    for(int i =0; i<n; i++){
        printf("Nhap MsSV: ");
        scanf("%d", &a->maSV);
        printf("Nhap hoTen: ");
        fflush(stdin);
        gets(&a->hoTen);
        printf("Nhap Lop: ");
        fflush(stdin);
        gets(&a->lopHoc);
        fflush(stdin);
        printf("Nhap Diem: ");
        scanf("%f", &a->Diem);
        printf("\n");
    }
}

void Xuat(SinhVien *a, int n){
    for(int i = 0; i<n; i++){
        printf("MaSv: %d\n", a->maSV);
        printf("Ho Ten: %c\n", a->hoTen);
        printf("Lop hoc: %c\n", a->lopHoc);
        printf("Diem: %.2f\n", a->Diem);
        printf("\n");
    }
}

int main(){
   SinhVien *a;
   int n;
   printf("Nhap so luong: ");
   scanf("%d\n",&n);
   Nhap(a,n);
   Xuat(a,n);
   return 0;
}