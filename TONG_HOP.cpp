/*
Nhap mang
xuat mang
tim kiem co hay ko
hoan doi
dao nguoc
sap xep tang
sap xep giam
sap xep tang dan theo hang
sap xep tang dan theo cot
xoa mot dong
xoa mot cot
them mot dong
them mot cot
*/
#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;
const int MAXR = 10, MAXC = 10;
void Nhap(int a[MAXR][MAXC], int r, int c);
void Xuat(int a[MAXR][MAXC], int r, int c);
void Tim_kiem(int a[MAXR][MAXC], int r, int c, int x, int& dem);
void Hoan_doi(int a[MAXR][MAXC], int r, int c, int x, int y, int z, int v);
void Dao_nguoc(int a[MAXR][MAXC], int r, int c);
void Sx_tang(int a[MAXR][MAXC], int r, int c);
void Sx_giam(int a[MAXR][MAXC], int r, int c);
void Sx_tang_hang(int a[MAXR][MAXC], int r, int c);
void Sx_tang_cot(int a[MAXR][MAXC], int r, int c);
void Xoa_dong(int a[MAXR][MAXC], int& r, int c, int x);
void Xoa_cot(int a[MAXR][MAXC], int r, int& c, int x);
void Them_dong(int a[MAXR][MAXC], int& r, int c, int x);
void Them_cot(int a[MAXR][MAXC], int r, int& c, int x);
bool Doi_xung(int a[MAXR][MAXC], int r, int c);
int Tim_max(int a[MAXR][MAXC], int r, int c, int& max);
int Tim_min(int a[MAXR][MAXC], int r, int c, int& min);
void NhapDQ(int a[MAXR][MAXC], int r, int c, int i, int j);
void XuatDQ(int a[MAXR][MAXC], int r, int c, int i, int j);
void Tim_kiemDQ(int a[MAXR][MAXC], int r, int c, int x, int& lan);
void Hoan_doiDQ(int a[MAXR][MAXC], int r, int c, int x, int y, int z, int v);
void Dao_nguocDQ(int a[MAXR][MAXC], int r, int c, int i, int j);
void Sx_tangDQ(int a[MAXR][MAXC], int r, int c, int i, int j);
void Sx_giamDQ(int a[MAXR][MAXC], int r, int c, int i, int j);
void Sx_tang_hangDQ(int a[MAXR][MAXC], int r, int c, int i, int j);
void Sx_tang_cotDQ(int a[MAXR][MAXC], int r, int c, int i, int j);
void Xoa_dongDQ(int a[MAXR][MAXC], int& r, int c, int x);
void Xoa_cotDQ(int a[MAXR][MAXC], int r, int& c, int x);
void Them_dongDQ(int a[MAXR][MAXC], int& r, int c, int x);
void Them_cotDQ(int a[MAXR][MAXC], int r, int& c, int x);
int Tim_max(int a[MAXR][MAXC], int r, int c, int i, int j);
int Tim_min(int a[MAXR][MAXC], int r, int c, int i, int j);
int main()
{
	int a[MAXR][MAXC];
	int r, c, choose, i = 0, j = 0, dem = 0, lan = 0, q, w, e, t, y, u, o, p, s, d, f, g, max, min;
	bool IN = false;
	do {
		system("cls");
		cout << "===========MENU===========\n"
			<< "1. Nhap mang\n"
			<< "2. Xuat mang \n"
			<< "3. Tim kiem \n"
			<< "4. Hoan doi\n"
			<< "5. Dao nguoc\n"
			<< "6. sap xep tang\n"
			<< "7. sap xep giam\n"
			<< "8. sap xep tang theo hang\n"
			<< "9. sap xep tang theo cot\n"
			<< "10. Xoa mot dong\n"
			<< "11. Xoa mot cot\n"
			<< "12. Them mot dong\n"
			<< "13. Them mot cot\n"
			<< "14. Doi xung\n"
			<< "15. Tim max\n"
			<< "16. Tim min\n"
			<< "17. Nhap mang dq\n"
			<< "18. Xuat mang dq\n"
			<< "19. Tim kiem dq\n"
			<< "20. Hoan doi dq\n"
			<< "21. Dao nguoc dq\n"
			<< "22. sap xep tang dq\n"
			<< "23. sap xep giam dq\n"
			<< "24. sap xep tang theo hang dq\n"
			<< "25. sap xep tang theo cot dq\n"
			<< "26. Xoa mot dong dq\n"
			<< "27. Xoa mot cot dq\n"
			<< "28. Them mot dong dq\n"
			<< "29. Them mot cot dq\n"
			<< "30. Doi xung dq\n"
			<< "31. Tim max dq\n"
			<< "32. Tim min dq\n"
			<< "0. Thoat\n"
			<< "BAN CHON: ";
		cin >> choose;

		switch (choose)
		{
		case 1:
			do {
				cout << "Nhap so dong: ";
				cin >> r;
				cout << "Nhap so cot: ";
				cin >> c;
				if (r <= 0 || r >= MAXR || c <= 0 || c >= MAXC)
					cout << "Nhap sai. Nhap lai!" << endl;
			} while (r <= 0 || r >= MAXR || c <= 0 || c >= MAXC);
			Nhap(a, r, c);
			IN = true;
			break;
		case 2:
			if (IN)
			{
				cout << "Mang dang luu tru: " << endl;
				Xuat(a, r, c);
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 3:
			if (IN)
			{
				cout << "Nhap gia tri can tim: ";
				cin >> q;
				Tim_kiem(a, r, c, q, dem);
				cout << q << " xuat hien " << dem << " lan trong mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 4:
			if (IN)
			{
				cout << "Vi tri can hoan doi: ";
				cin >> w >> e;
				cout << "Vi tri can hoan doi: ";
				cin >> t >> y;
				Hoan_doi(a, r, c, w, e, t, y);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 5:
			if (IN)
			{
				cout << "Da dao nguoc mang" << endl;
				Dao_nguoc(a, r, c);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 6:
			if (IN)
			{
				cout << "Mang da sap xep tang: ";
				Sx_tang(a, r, c);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 7:
			if (IN)
			{
				cout << "Mang da sap xep giam: ";
				Sx_giam(a, r, c);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 8:
			if (IN)
			{
				cout << "Mang da sap xep tang theo hang: ";
				Sx_tang_hang(a, r, c);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 9:
			if (IN)
			{
				cout << "Mang da sap xep tang theo cot: ";
				Sx_tang_cot(a, r, c);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 10:
			if (IN)
			{
				cout << "Nhap dong can xoa: ";
				cin >> u;
				Xoa_dong(a, r, c, u);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 11:
			if (IN)
			{
				cout << "Nhap cot can xoa: ";
				cin >> o;
				Xoa_cot(a, r, c, u);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 12:
			if (IN)
			{
				cout << "Nhap dong can them: ";
				cin >> p;
				Them_dong(a, r, c, p);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 13:
			if (IN)
			{
				cout << "Nhap cot can them: ";
				cin >> s;
				Them_cot(a, r, c, s);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 14:
			if (IN)
			{
				if (Doi_xung(a, r, c) == true)
					cout << "Mang doi xung" << endl;
				else
					cout << "Mang khong doi xung" << endl;

			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 15:
			if (IN)
			{
				cout << "Phan tu lon nhat trong mang: " << Tim_max(a, r, c, max) << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 16:
			if (IN)
			{
				cout << "Phan tu lon nhat trong mang:" << Tim_min(a, r, c, min) << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 17:
			do {
				cout << "Nhap so dong: ";
				cin >> r;
				cout << "Nhap so cot: ";
				cin >> c;
				if (r <= 0 || r >= MAXR || c <= 0 || c >= MAXC)
					cout << "Nhap sai. Nhap lai!" << endl;
			} while (r <= 0 || r >= MAXR || c <= 0 || c >= MAXC);
			NhapDQ(a, r, c, i, j);
			IN = true;
			break;
		case 18:
			if (IN)
			{
				cout << "Mang dang luu tru: " << endl;
				XuatDQ(a, r, c, i, j);
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 19:
			if (IN)
			{
				cout << "Nhap gia tri can tim: ";
				cin >> d;
				Tim_kiem(a, r, c, d, lan);
				cout << d << " xuat hien " << lan << " lan trong mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 21:
			if (IN)
			{
				cout << "Da dao nguoc mang" << endl;
				Dao_nguocDQ(a, r, c, i, j);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 22:
			if (IN)
			{
				cout << "Mang da sap xep tang: ";
				Sx_tangDQ(a, r, c, i, j);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 23:
			if (IN)
			{
				cout << "Mang da sap xep giam: ";
				Sx_giamDQ(a, r, c, i, j);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 24:
			if (IN)
			{
				cout << "Mang da sap xep tang theo hang: ";
				Sx_tang_hangDQ(a, r, c, i, j);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 25:
			if (IN)
			{
				cout << "Mang da sap xep tang theo cot: ";
				Sx_tang_cotDQ(a, r, c, i, j);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
		case 26:
			if (IN)
			{
				cout << "Nhap dong can xoa: ";
				cin >> f;
				Xoa_dongDQ(a, r, c, f);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 27:
			if (IN)
			{
				cout << "Nhap cot can xoa: ";
				cin >> g;
				Xoa_cotDQ(a, r, c, g);
				cout << "Chon 2 de xem mang" << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 31:
			if (IN)
			{
				int max = Tim_max(a, r, c, i, j); // gọi hàm đệ quy để tìm giá trị lớn nhất
				cout << "Phan tu lon nhat trong mang: " << max << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 32:
			if (IN)
			{
				int min = Tim_min(a, r, c, i, j); // gọi hàm đệ quy để tìm giá trị lớn nhất
				cout << "Phan tu nho nhat trong mang: " << min << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		default:
			cout << "Thoat" << endl;
		}
		_getch();
	} while (choose > 0 && choose <= 32);

}
void Nhap(int a[MAXR][MAXC], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		cout << "Nhap " << c << " so nguyen cho dong thu " << i + 1 << endl;
		for (int j = 0; j < c; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
}
void Xuat(int a[MAXR][MAXC], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
}
void Tim_kiem(int a[MAXR][MAXC], int r, int c, int x, int& dem)
{

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] == x)
			{
				cout << x << " nam o vi tri a[" << i << "][" << j << "]" << endl;
				dem++;
			}
		}
}
void Hoan_doi(int a[MAXR][MAXC], int r, int c, int x, int y, int z, int v)
{

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (i == x && y == j)
				for (int k = 0; k < r; k++)
					for (int l = 0; l < c; l++)
						if (k == z && v == l)
							swap(a[i][j], a[z][v]);

}
void Dao_nguoc(int a[MAXR][MAXC], int r, int c)
{

	for (int i = 0; i < r / 2; i++)
		for (int j = 0; j < c; j++)
			swap(a[i][j], a[r - 1 - i][c - 1 - j]);

}
void Sx_tang(int a[MAXR][MAXC], int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			for (int k = 0; k < r; k++)
				for (int l = 0; l < c; l++)
					if (a[i][j] < a[k][l])
						swap(a[i][j], a[k][l]);
}
void Sx_giam(int a[MAXR][MAXC], int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			for (int k = 0; k < r; k++)
				for (int l = 0; l < c; l++)
					if (a[i][j] > a[k][l])
						swap(a[i][j], a[k][l]);
}
void Sx_tang_hang(int a[MAXR][MAXC], int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			for (int k = j + 1; k < c; k++)
				if (a[i][j] > a[i][k])
					swap(a[i][j], a[i][k]);
}
void Sx_tang_cot(int a[MAXR][MAXC], int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = i + 1; j < r; j++)
			for (int k = 0; k < c; k++)
				if (a[i][k] > a[j][k])
					swap(a[i][k], a[j][k]);
}
void Xoa_dong(int a[MAXR][MAXC], int& r, int c, int x)
{
	for (int i = x; i < r - 1; i++)
		for (int j = 0; j < c; j++)
			a[i][j] = a[i + 1][j];
	r--;
}
void Xoa_cot(int a[MAXR][MAXC], int r, int& c, int x)
{
	for (int i = 0; i < r; i++)
		for (int j = x; j < c - 1; j++)
			a[i][j] = a[i][j + 1];
	c--;
}
void Them_dong(int a[MAXR][MAXC], int& r, int c, int x)
{
	int i, j;
	for (i = r; i > x; i--)
		for (j = 0; j < c; j++)
			a[i][j] = a[i - 1][j];
	r++;
	for (j = 0; j < c; j++)
	{
		cout << "Nhap a[" << i << "][" << j << "]= ";
		cin >> a[x][j];
	}
}
void Them_cot(int a[MAXR][MAXC], int r, int& c, int x)
{
	int i, j;
	for (i = 0; i < r; i++)
		for (j = c; j > x; j--)
			a[i][j] = a[i][j - 1];
	c++;
	for (i = 0; i < r; i++)
	{
		cout << "Nhap a[" << i << "][" << j << "]= ";
		cin >> a[i][x];
	}
}
bool Doi_xung(int a[MAXR][MAXC], int r, int c)
{
	for (int i = 0; i < r / 2; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] != a[r - 1 - i][c - 1 - j])
				return false;
		}
	}
	return true;
}
int Tim_max(int a[MAXR][MAXC], int r, int c, int& max)
{
	max = a[0][0];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (a[i][j] > max)
				max = a[i][j];
	return max;
}
int Tim_min(int a[MAXR][MAXC], int r, int c, int& min)
{
	min = a[0][0];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (a[i][j] < min)
				min = a[i][j];
	return min;
}
void NhapDQ(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return;
	if (j >= c)
	{
		NhapDQ(a, r, c, i + 1, 0);
		return;
	}
	cout << "Nhap a[" << i << "][" << j << "]= ";
	cin >> a[i][j];
	NhapDQ(a, r, c, i, j + 1);
}
void XuatDQ(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return;
	if (j >= c)
	{
		cout << endl;
		XuatDQ(a, r, c, i + 1, 0);
		return;
	}
	cout << a[i][j] << "\t";
	XuatDQ(a, r, c, i, j + 1);
}
void Tim_kiemDQ(int a[MAXR][MAXC], int r, int c, int x, int& lan)
{
	static int i = 0, j = 0;
	if (i >= r)
		return;
	if (j >= c)
	{
		i++, j = 0;
		Tim_kiem(a, r, c, x, lan);
		return;
	}
	if (a[i][j] == x)
	{
		cout << x << " nam o a[" << i << "][" << j << "]" << endl;
		lan++;
	}
	j++;
	Tim_kiem(a, r, c, x, lan);
}
void Hoan_doiDQ(int a[MAXR][MAXC], int r, int c, int x, int y, int z, int v);
void Dao_nguocDQ(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r / 2)
		return;
	if (j >= c)
	{
		Dao_nguocDQ(a, r, c, i + 1, 0);
		return;
	}
	swap(a[i][j], a[r - 1 - i][c - 1 - j]);
	Dao_nguocDQ(a, r, c, i, j + 1);
}

void Sx_tangDQ(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	int row = i;
	int col = j + 1;
	if (col >= c)
	{
		row++;
		col = 0;
	}
	if (row < r)
	{
		if (a[i][j] > a[row][col])
		{
			swap(a[i][j], a[row][col]);
			Sx_tangDQ(a, r, c, 0, 0);
		}
		else
			Sx_tangDQ(a, r, c, row, col);
	}
}
void Sx_giamDQ(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	int row = i;
	int col = j + 1;
	if (col >= c)
	{
		row++;
		col = 0;
	}
	if (row < r)
	{
		if (a[i][j] < a[row][col])
		{
			swap(a[i][j], a[row][col]);
			Sx_giamDQ(a, r, c, 0, 0);
		}
		else
			Sx_giamDQ(a, r, c, row, col);
	}
}
void Sx_tang_hangDQ(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return;
	if (j >= c)
	{
		Sx_tang_hangDQ(a, r, c, i + 1, 0);
		return;
	}
	for (int k = j + 1; k < c; k++)
		if (a[i][j] > a[i][k])
			swap(a[i][j], a[i][k]);
	Sx_tang_hangDQ(a, r, c, i, j + 1);
}
void Sx_tang_cotDQ(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return;
	if (j >= c)
	{
		Sx_tang_cotDQ(a, r, c, i + 1, 0);
		return;
	}
	for (int k = i + 1; k < r; k++)
		if (a[i][j] > a[k][j])
			swap(a[i][j], a[k][j]);
	Sx_tang_cotDQ(a, r, c, i, j + 1);
}
void Xoa_dongDQ(int a[MAXR][MAXC], int& r, int c, int x)
{
	if (x >= r - 1)
	{
		r--;
		return;
	}
	for (int i = 0; i < c; i++)
		a[x][i] = a[x + 1][i];
	x++;
	Xoa_dongDQ(a, r, c, x);
}
void Xoa_cotDQ(int a[MAXR][MAXC], int r, int& c, int x)
{
	if (x >= c - 1)
	{
		c--;
		return;
	}
	for (int i = 0; i < r; i++)
		a[i][x] = a[i][x + 1];
	x++;
	Xoa_cotDQ(a, r, c, x);
}
void Them_dongDQ(int a[MAXR][MAXC], int& r, int c, int x);
void Them_cotDQ(int a[MAXR][MAXC], int r, int& c, int x);
int Tim_max(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return a[0][0];
	if (j >= c)
		return Tim_max(a, r, c, i + 1, 0);
	int current = a[i][j];
	int next = Tim_max(a, r, c, i, j + 1);
	return current > next ? current : next;
}
int Tim_min(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return a[0][0];
	if (j >= c)
		return Tim_min(a, r, c, i + 1, 0);
	int current = a[i][j];
	int next = Tim_min(a, r, c, i, j + 1);
	return current < next ? current : next;
}