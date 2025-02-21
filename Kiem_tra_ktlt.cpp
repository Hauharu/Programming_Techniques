/* tạo số random từ 1 đến 999 cho người dùng nhập số dòng, số cột sau đó tạo menu 
lựa chọn 1 
a) hoán đổi 2 hàng bất kì tìm 2 hàng trước khi hoán đổi sau đó tìm 2 hàng sau khi đã hoán đổi
b) cũng như trên mà dùng đệ quy
b dùng cấp phát động thực hiện câu a*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int maxr = 100, maxc = 100;
void hoandoi(int a[maxr][maxc], int r, int c)
{
	int i, k;
	static int x = rand() % ((((r - 1) - 0) + 1) + 0);
	cout << "Dong x truoc khi hoan doi: " << x << endl;
	static int y = rand() % ((((r - 1) - 0) + 1) + 0);
	cout << "Dong y truoc khi hoan doi: " << y << endl;
	for (i = 0; i < r; i++)
		if (a[i] == a[x])
			for (k = 0; k < r; k++)
				if (a[k] == a[y])
					swap(a[x], a[y]);
	cout << "Dong x sau khi hoan doi: " << y << endl;
	cout << "Dong y sau khi hoan doi: " << x << endl;
	
}
void hoandoidq(int a[maxr][maxc], int r, int c,int i,int j,static int x,static int y)
{	
	if (i >= r)
		return;
	if (j >= c)
	{
		hoandoidq(a, r, c, i + 1, 0,x,y);
		return;
	}
	if (a[i] == a[x])
		if (a[j] == a[y])
			swap(a[x], a[y]);
	hoandoidq(a, r, c, i, j + 1,x,y);

}

int main()
{
	int a[maxr][maxc];
	int r, c,k=0,l=0,m,n,x,y;
	srand(time(NULL));
	cout << "Nhap so dong: ";
	cin >> r;
	cout << "Nhap so cot: ";
	cin >> c;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			a[i][j] = rand() % 1000;
	cout << "Mang dang luu tru: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << endl;
	cout << "Doi vi tri hai hang cach thuong: " << endl;
	hoandoi(a, r, c);
	cout << "Mang dang luu tru: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << endl;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 1000;
	cout << "Mang dang luu tru: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j <n; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << endl;
	cout << "Doi vi tri hai hang cach de quy: " << endl;
	x = rand() % ((((r - 1) - 0) + 1) + 0);
	y = rand() % ((((r - 1) - 0) + 1) + 0);
	cout << "Dong x truoc khi hoan doi: " << x << endl;
	cout << "Dong y truoc khi hoan doi: " << y << endl;
	hoandoidq(a, r, c,k,l,x,y);
	cout << "Dong x truoc khi hoan doi: " << y << endl;
	cout << "Dong y truoc khi hoan doi: " << x << endl;
	cout << "Mang dang luu tru: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	return 0;
}