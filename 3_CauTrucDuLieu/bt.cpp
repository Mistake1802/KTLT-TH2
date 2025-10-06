#include <iostream>

using namespace std;

struct SinhVien {
    char masv[20];
    char hoten[20];
    int tuoi;
    float dtb;
};

SinhVien nhapSinhVien() {
    SinhVien sv;
    cout << "Ma SV: ";
    cin.getline(sv.masv, 20);
    cout << "Ho ten: ";
    cin.getline(sv.hoten, 20);
    cout << "Tuoi: ";
    cin >> sv.tuoi;
    cout << "Diem trung binh: ";
    cin >> sv.dtb;
    cin.ignore();  
    return sv;
}

void xuatSinhVien(const SinhVien &sv) {
    cout << "Ma SV: " << sv.masv << ", Ho ten: " << sv.hoten
         << ", Tuoi: " << sv.tuoi << ", DTB: " << sv.dtb << endl;
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();

    SinhVien *ds = new SinhVien[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        ds[i] = nhapSinhVien();  
    }

    cout << "\nDanh sach sinh vien vua nhap:\n";
    for (int i = 0; i < n; ++i) {
        xuatSinhVien(ds[i]);
    }

    delete[] ds;
    return 0;
}

