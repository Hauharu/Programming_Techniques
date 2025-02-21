#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

struct SanPham {
    char maSP[10];
    char tenSP[50];
    int soLuong;
    float donGia;
    char phanLoai[20];
};

// a. Định nghĩa struct SanPham
void nhapSanPham(SanPham& sp) {
    cout << "Ma san pham: ";
    cin >> sp.maSP;
    cout << "Ten san pham: ";
    cin.ignore();
    cin.getline(sp.tenSP, 50);
    cout << "So luong: ";
    cin >> sp.soLuong;
    cout << "Don gia: ";
    cin >> sp.donGia;
    cout << "Phan loai: ";
    cin >> sp.phanLoai;
}

// b. Hàm nhập thông tin cho tối đa 50 sản phẩm
void nhapDanhSachSanPham(SanPham danhSachSanPham[], int soLuong) {
    cout << "Nhap so luong san pham: ";
    cin >> soLuong;
    for (int i = 0; i < soLuong; i++) {
        cout << "Nhap thong tin san pham thu " << i + 1 << endl;
        nhapSanPham(danhSachSanPham[i]);
    }
}

// c. Hàm đọc dữ liệu từ file lên cho danh sách sản phẩm
void docDanhSachSanPham(SanPham danhSachSanPham[], int& soLuong) {
    ifstream file;
    file.open("DuLieuSP.txt", ios::in);
    if (file.is_open()) {
        file >> soLuong;
        file.ignore();
        for (int i = 0; i < soLuong; i++) {
            file.getline(danhSachSanPham[i].maSP, 10, '#');
            file.getline(danhSachSanPham[i].tenSP, 50, '#');
            file >> danhSachSanPham[i].soLuong;
            file.ignore();
            file >> danhSachSanPham[i].donGia;
            file.ignore();
            file.getline(danhSachSanPham[i].phanLoai, 20);
        }
    }
    else
        cout << "Khong the mo file DuLieuSP.txt";
    file.close();
    return;
}

// d. Hàm xuất thông tin của các sản phẩm đang lưu trữ trong chương trình
void xuatDanhSachSanPham(SanPham danhSachSanPham[], int soLuong) {
    cout << "Danh sach san pham:\n";
    for (int i = 0; i < soLuong; i++) {
        cout << "Ma SP: ";
        cout << danhSachSanPham[i].maSP << endl;
        cout << "Ten SP: ";
        cout << danhSachSanPham[i].tenSP << endl;
        cout << "So luong: ";
        cout << danhSachSanPham[i].soLuong << endl;
        cout << "Don gia: ";
        cout << danhSachSanPham[i].donGia << endl;
        cout << "Phan loai: ";;
        cout << danhSachSanPham[i].phanLoai << endl;
        cout << endl;
    }
}

// e. Hàm trả về danh sách sản phẩm nào là "Vat dung"
void timSanPhamTheoPhanLoai(SanPham danhSachSanPham[], int soLuong, char phanLoai[], SanPham danhSachKetQua[], int& soLuongKetQua) {
    soLuongKetQua = 0;
    for (int i = 0; i < soLuong; i++) {
        if (strcmp(danhSachSanPham[i].phanLoai, phanLoai) == 0) {
            danhSachKetQua[soLuongKetQua] = danhSachSanPham[i];
            soLuongKetQua++;
        }
    }
}

// f. Hàm ghi danh sách các sản phẩm nào là “Vat dung" ra file mang tên BT.txt (mỗi lần ghi là ghi thêm vào file)
void ghiSanPhamTheoPhanLoaiRaFile(SanPham danhSachSanPham[], int soLuong, char phanLoai[]) {
    SanPham danhSachKetQua[50];
    int soLuongKetQua = 0;
    timSanPhamTheoPhanLoai(danhSachSanPham, soLuong, phanLoai, danhSachKetQua, soLuongKetQua);
    ofstream file;
    file.open("BT.txt", ios::app);
    for (int i = 0; i < soLuongKetQua; i++) {
        file << danhSachKetQua[i].maSP << "#" << danhSachKetQua[i].tenSP << "#"
            << danhSachKetQua[i].soLuong << "#" << danhSachKetQua[i].donGia << "#"
            << danhSachKetQua[i].phanLoai << endl;
    }
    file.close();
}

// g. Hàm tính tổng vốn bỏ ra bằng cách tính tổng giá thành của toàn bộ các sản phẩm
float tinhTongVon(SanPham danhSachSanPham[], int soLuong) {
    float tongVon = 0;
    for (int i = 0; i < soLuong; i++) {
        tongVon += danhSachSanPham[i].soLuong * danhSachSanPham[i].donGia;
    }
    return tongVon;
}

// h. Hàm đếm số sản phẩm có các ký tự “an” trong tên
int demSanPhamTheoKyTu(SanPham danhSachSanPham[], int soLuong, char kyTu[]) {
    int soLuongKyTu = 0;
    for (int i = 0; i < soLuong; i++) {
        if (strstr(danhSachSanPham[i].tenSP, kyTu) != NULL) {
            soLuongKyTu++;
        }
    }
    return soLuongKyTu;
}

// i. Hàm main kiểm chứng chương trình
int main() {
    SanPham danhSachSanPham[50];
    int soLuong = 0;
    int luaChon;

    do {
        system("cls");
        cout << "\n============== MENU ==============\n";
        cout << "1. Nhap danh sach san pham\n";
        cout << "2. Doc danh sach san pham tu file\n";
        cout << "3. Xuat danh sach san pham\n";
        cout << "4. Tim san pham theo phan loai\n";
        cout << "5. Ghi danh sach san pham theo phan loai ra file\n";
        cout << "6. Tinh tong von\n";
        cout << "7. Dem so san pham theo ky tu\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> luaChon;

        switch (luaChon) {
        case 0:
            cout << "Thoat chuong trinh.";
            return 0;
        case 1:
            nhapDanhSachSanPham(danhSachSanPham, soLuong);
            break;
        case 2:
            docDanhSachSanPham(danhSachSanPham, soLuong);
            break;
        case 3:
            xuatDanhSachSanPham(danhSachSanPham, soLuong);
            break;
        case 4: {
            cin.ignore();
            SanPham danhSachKetQua[100];
            int soLuongKetQua = 0;
            char phanLoai[20];
            cout << "Nhap phan loai san pham can tim: ";
            cin.getline(phanLoai, 20);
            timSanPhamTheoPhanLoai(danhSachSanPham, soLuong, phanLoai, danhSachKetQua, soLuongKetQua);
            if (soLuongKetQua == 0) {
                cout << "Khong tim thay san pham nao co phan loai la " << phanLoai << endl;
            }
            else {
                xuatDanhSachSanPham(danhSachKetQua, soLuongKetQua);
            }
            xuatDanhSachSanPham(danhSachKetQua, soLuongKetQua);
            break;
        }
        case 5: {
            char phanLoai[20];
            cout << "Nhap phan loai can ghi: ";
            cin >> phanLoai;
            ghiSanPhamTheoPhanLoaiRaFile(danhSachSanPham, soLuong, phanLoai);
            cout << "Ghi thanh cong.\n";
            break;
        }
        case 6: {
            float tongVon = tinhTongVon(danhSachSanPham, soLuong);
            cout << "Tong von: " << tongVon << endl;
            break;
        }
        case 7: {
            char kyTu[3];
            cout << "Nhap ky tu: ";
            cin >> kyTu;
            int soLuongKyTu = demSanPhamTheoKyTu(danhSachSanPham, soLuong, kyTu);
            cout << "So luong san pham co ky tu " << kyTu << ": " << soLuongKyTu << endl;
            break;
        }
        default:
            cout << "Lua chon khong hop le.\n";
            break;
        }
        _getch();
    } while (luaChon >= 1 && luaChon <= 7);
    return 0;
}




#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>
#define MAX 30
using namespace std;
struct SanPham
{
    char maSP[11];
    string tenSP;
    double donGia;
    int soLuong;
};
void nhap1sp(SanPham& sp)
{
    cin.ignore();
    cout << "Nhap ma san pham: ";
    cin.getline(sp.maSP, 11);
    cout << "Nhap ten san pham: ";
    getline(cin, sp.tenSP);
    cout << "Nhap don gia: ";
    cin >> sp.donGia;
    cout << "Nhap so luong: ";
    cin >> sp.soLuong;
}
void xuat1sp(SanPham& sp)
{
    cout << "Ma san pham: " << sp.maSP << endl;
    cout << "Nhap ten san pham: " << sp.tenSP << endl;
    cout << "Nhap don gia: " << sp.donGia << endl;
    cout << "Nhap so luong: " << sp.soLuong << endl;
}
void nhapdssp(SanPham* sp, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin cua san pham thu " << i + 1 << endl;
        nhap1sp(*(sp + i));
    }
}
void xuatdssp(SanPham* sp, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin cua san pham thu " << i + 1 << endl;
        xuat1sp(*(sp + i));
    }
}
void suatt(SanPham& sp)
{
    int chon;
    do {

        cout << "\n1. Sua ma san pham\n"
            << "2. Sua ten san pham\n"
            << "3. Sua don gia\n"
            << "4. Sua so luong ton kho \n"
            << "5. Sua toan bo\n"
            << "6. Hoan tat chinh sua\nBan chon: ";
        cin >> chon;
        switch (chon)
        {
        case 1:
            cin.ignore();
            cout << "Nhap ma moi cho san pham: ";
            cin.getline(sp.maSP, 11);
            break;
        case 2:
            cin.ignore();
            cout << "Nhap ten moi cho san pham: ";
            getline(cin, sp.tenSP);
            break;
        case 3:
            cout << "+ Nhap don gia moi: ";
            cin >> sp.donGia;
            break;
        case 4:
            cout << "Nhap so luong ton kho moi: ";
            cin >> sp.soLuong;
            break;
        case 5:
            nhap1sp(sp);
            break;
        default:
            cout << "Hoan tat viec chinh sua\n";
        }
    } while (chon >= 1 && chon <= 5);
}
void xoasp(SanPham* sp, int& n, int x)
{
    for (int i = x; i < n - 1; i++)
        sp[i] = sp[i + 1];
    n--;
}
void sapxepsltang(SanPham* sp, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if ((sp + i)->soLuong > (sp + j)->soLuong)
                swap(*(sp + i), *(sp + j));
}
int main()
{
    int chon;
    int vt;
    SanPham* sp = NULL;
    int n, x;
    bool in = false;
    do {
        system("cls");
        cout << "Chuong trinh struct don gian\n"
            << "1. Nhap danh sach san pham\n"
            << "2. Xuat danh sach san pham\n"
            << "3. Sua 1 san pham\n"
            << "4. Xoa mot san pham\n"
            << "5. Sap xep theo so luong ton kho tang dan\n"
            << "Ban chon thoat\nBan chon: ";
        cin >> chon; cin.ignore();
        switch (chon)
        {
        case 1:
            do {
                cout << "Nhap so san pham: ";
                cin >> n;
                if (n <= 0 && n > MAX)
                    cout << "Nhap lai";
            } while (n <= 0 && n > MAX);
            sp = new SanPham[n];
            nhapdssp(sp, n);
            in = true;
            break;
        case 2:
            if (in)
                xuatdssp(sp, n);
            else
                cout << "Chua nhap san pham" << endl;
            break;
        case 3:
            if (in)
            {
                cout << "Nhap vi tri san pham can sua: ";
                cin >> vt;
                if (vt >= 1 && vt <= n)
                    suatt(sp[vt - 1]);
                else
                    cout << "Vi tri chinh sua ko hop le";
            }
            else
                cout << "Chua nhap san pham\n";
            break;
        case 4:
            if (in)
            {
                cout << "Nhap vi tri san pham can xoa: ";
                cin >> x;
                if (x >= 1 && x <= n)
                    xoasp(sp, n, x - 1);
                else
                    cout << "Vi tri can xoa ko hop le";
            }
            else
                cout << "Chua nhap san pham\n";
            break;
        case 5:
            if (in)
            {
                sapxepsltang(sp, n);
                cout << "Da sap xep tang dan" << endl;
            }
            else
                cout << "Chua nhap san pham\n";
            break;
        default:
            delete[]sp;
            cout << "Thoat\n";
        }
        _getch();
    } while (chon >= 1 && chon <= 5);
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#define Mon 3
using namespace std;
struct SinhVien
{
    string maSV;
    string hoTen;
    string queQuan;
    double diem[Mon];
};
struct DsSinhVien
{
    SinhVien* sv;
    int n;
};
//void docdssv(DsSinhVien& ds)
//{
//    ifstream f;
//    f.open("data.txt");
//    f >> ds.n;
//    ds.sv = new SinhVien[ds.n];
//    for (int i = 0; i < ds.n; i++)
//    {
//        f >> ds.sv[i].maSV;
//        f.ignore();
//        getline(f, ds.sv[i].hoTen);
//        getline(f, ds.sv[i].queQuan);
//        for (int j = 0; j < Mon; j++)
//        {
//            f >> ds.sv[i].diem[j];
//            f.ignore();
//        }
//
//    }
//    f.close();
//}
void nhap(SinhVien& sv)
{
    cin.ignore();
    cout << "Nhap ma so sinh vien: ";
    getline(cin, sv.maSV);
    cout << "Nhap ho va ten: ";
    getline(cin, sv.hoTen);
    cout << "Nhap que quan: ";
    getline(cin, sv.queQuan);
    for (int i = 0; i < Mon; i++)
    {
        cout << "Nhap diem mon thu " << i + 1 << "\t";
        cin >> sv.diem[i];
    }
}
void xuat(const SinhVien sv)
{
    cout << "Ma so sinh vien: ";
    cout << sv.maSV << endl;
    cout << "Ho va ten: ";
    cout << sv.hoTen << endl;
    cout << "Que quan: ";
    cout << sv.queQuan << endl;
    for (int i = 0; i < Mon; i++)
    {
        cout << "Diem mon thu " << i + 1 << ": ";
        cout << sv.diem[i] << "\t";
    }
    cout << endl;
}
DsSinhVien* timKiem(DsSinhVien ds, string s)
{
    DsSinhVien* kq = new DsSinhVien();
    kq->sv = new SinhVien[ds.n];
    int dem = 0;
    for (int i = 0; i < ds.n; i++)
    {
        int pos = ds.sv[i].hoTen.find(s);
        if (pos >= 0)
            kq->sv[dem++] = ds.sv[i];
    }
    kq->n = dem;
    return kq;
}
void sxgiamhoTen(DsSinhVien& ds)
{
    for (int i = 0; i < ds.n - 1; i++)
        for (int j = i + 1; j < ds.n; j++)
            if (ds.sv[i].hoTen < ds.sv[j].hoTen)
                swap(ds.sv[i], ds.sv[j]);
}
int main()
{
    DsSinhVien ds;
    //docdssv(ds);
    cout << "Nhap so luong sinh vien: ";
    cin >> ds.n;
    ds.sv = new SinhVien[ds.n];
    for (int i = 0; i < ds.n; i++)
    {
        cout << "Nhap sinh vien thu " << i + 1 << endl;
        nhap(ds.sv[i]);
    }
    cout << "Danh sach sinh vien vua nhap: " << endl;
    for (int i = 0; i < ds.n; i++)
        xuat(ds.sv[i]);
    cout << "Tim kiem sinh vien theo ten: " << endl;
    cout << "Nhap tu khoa muon tim kiem: ";
    string kw;
    cin.ignore();
    getline(cin, kw);
    DsSinhVien* kq = timKiem(ds, kw);
    for (int i = 0; i < kq->n; i++)
        xuat(kq->sv[i]);
    cout << "Sap xep giam dan theo ten" << endl;
    sxgiamhoTen(ds);
    for (int i = 0; i < ds.n; i++)
        xuat(ds.sv[i]);
    return 0;
}


#include <iostream>
#include <string>

using namespace std;

string convertCase(string str) {
    int n = str.length();

    for (int i = 0; i < n; i++) {
        if (islower(str[i])) {  // nếu là chữ thường, đổi thành chữ hoa
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i])) {  // nếu là chữ hoa, đổi thành chữ thường
            str[i] = tolower(str[i]);
        }
    }

    return str;
}

int main() {
    string input = "Hello, World!";
    string output = convertCase(input);

    cout << "Input string: " << input << endl;
    cout << "Output string: " << output << endl;

    return 0;
}


#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include <string>
using namespace std;

struct Net {
    string name;
    bool isAvailable;
    int duration; // time of use in minutes
};

class NetControl {
private:
    Net** nets;
    int rows, cols;
public:
    // Constructor
    NetControl(int r, int c) {
        rows = r;
        cols = c;
        // Allocate heap memory for the 2D array
        nets = new Net * [rows];
        for (int i = 0; i < rows; i++) {
            nets[i] = new Net[cols];
        }
    }

    // Initialize the nets with random values
    void initNets() {
        srand(time(0));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int r = rand() % 2;
                nets[i][j].isAvailable = (r == 0) ? true : false;
                nets[i][j].duration = 0;
                nets[i][j].name = "Net(" + to_string(i) + "-" + to_string(j) + ")";
            }
        }
    }

    // Show all nets
    void showNets() {
        cout << "--------------------------" << endl;
        cout << "All Nets" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << nets[i][j].name << "\t";
                if (nets[i][j].isAvailable) {
                    cout << "Available" << endl;
                }
                else {
                    cout << "Booked\t Duration:" << nets[i][j].duration << endl;
                }
            }
        }
    }

    // Book a net
    void bookNet(int row, int col, int duration) {
        if (nets[row][col].isAvailable) {
            nets[row][col].isAvailable = false;
            nets[row][col].duration = duration;
            cout << "Net booked successfully" << endl;
        }
        else {
            cout << "Net already booked" << endl;
        }
    }

    // Cancel booking
    void cancelBooking(int row, int col) {
        if (nets[row][col].isAvailable) {
            cout << "Net already available" << endl;
        }
        else {
            nets[row][col].isAvailable = true;
            nets[row][col].duration = 0;
            cout << "Booking cancelled" << endl;
        }
    }

    // Save nets to file
    void saveNets() {
        ofstream fout;
        fout.open("nets.txt");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                fout << nets[i][j].name << "," << nets[i][j].isAvailable << "," << nets[i][j].duration << "\n";
            }
        }
        fout.close();
        cout << "Nets saved to file" << endl;
    }

    // Load nets from file
    void loadNets() {
        ifstream fin;
        fin.open("nets.txt");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                string name, av, dur;
                getline(fin, name, ',');
                getline(fin, av, ',');
                getline(fin, dur, '\n');
                nets[i][j].name = name;
                nets[i][j].isAvailable = (av == "1") ? true : false;
                nets[i][j].duration = atoi(dur.c_str());
            }
        }
        fin.close();
        cout << "Nets loaded from file" << endl;
    }

    // Destructor
    ~NetControl() {
        // Deallocate heap memory for the 2D array
        for (int i = 0; i < rows; i++) {
            delete[] nets[i];
        }
        delete[] nets;
    }
};

int main() {
    srand(time(0));

    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    NetControl netControl(rows, cols);

    netControl.initNets();

    int choice = -1;

    while (choice != 0) {
        cout << "\n-----------------------------";
        cout << "\n1. Show all nets\n2. Book a net\n3. Cancel booking\n4. Save nets to file\n5. Load nets from file\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            // Show all nets
            netControl.showNets();
            break;
        case 2:
            // Book a net
            int row, col, duration;
            cout << "Enter row and column: ";
            cin >> row >> col;
            cout << "Enter duration (in minutes): ";
            cin >> duration;
            netControl.bookNet(row, col, duration);
            break;

        case 3:
            // Cancel booking
            int c_row, c_col;
            cout << "Enter row and column: ";
            cin >> c_row >> c_col;
            netControl.cancelBooking(c_row, c_col);
            break;

        case 4:
            // Save nets to file
            netControl.saveNets();
            break;

        case 5:
            // Load nets from file
            netControl.loadNets();
            break;

        case 6:
            // Exit
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
