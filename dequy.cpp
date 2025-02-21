
/*B�i t?p 730: T�nh S(n) = 1 + 2 + 3 + ... + n - 1 + n
int Tinh(int n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) + n;
}

B�i t?p 731 : T�nh S(n) = 1 ^ 2 + 2 ^ 2 + 3 ^ 2 + ... + (n - 1) ^ 2 + n ^ 2
int Tinh(int n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) + n * n;
}

B�i t?p 732 : T�nh S(n) = 1 + 1 / 2 + 1 / 3 + ... + 1 / n
float Tinh(float n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) + 1 / n;
}

B�i t?p 733 : T�nh S(n) = 1 / 2 + 1 / 4 + ... + 1 / 2n
float Tinh(float n)
{
	if (n == 1)

		return 0.5;
	return Tinh(n - 1) + 1 / (2 * n);
}

B�i t?p 734 : T�nh S(n) = 1 + 1 / 3 + 1 / 5 + ... + 1 / (2n + 1)
float Tinh(float n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) + 1 / (2 * n + 1);
}

B�i t?p 735: T�nh S(n) = 1 / (1 * 2) + 1 / (2 * 3) + 1 / (n(*n - 1))
float Tinh(float n)
{
	if (n == 1)
		return 0.5;
	return Tinh(n - 1) + 1 / (n * (n + 1));
}

B�i t?p 736 : T�nh S(n) = 1 / 2 + 2 / 3 + 3 / 4 + ... + n / (n + 1)
float Tinh(float n)
{
	if (n == 1)
		return 0.5;
	return Tinh(n - 1) + n / (n + 1);
}

B�i t?p 737 :T�nh S(n) = 1 / 2 + 3 / 4 + 5 / 6 + ... + (2n + 1) / (2n + 2)
float Tinh(float n)
{
	if (n == 1)
		return 0.5;
	return Tinh(n - 1) + (2 * n + 1) / (2 * n + 2);
}

B�i t?p 738 :T�nh T(n) = 1 * 2 * 3*.....*n
float Tinh(float n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) * n;
}

B�i t?p 739 :T�nh T(x, n) = x ^ n
float LuyThua(float x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{

		return LuyThua(x, n + 1) * 1 / x;
	}
	return LuyThua(x, n - 1) * x;
}

B�i t?p 740 :T�nh S(n) = 1 + 1.2 + 1.2.3 + .... + 1.2.3....n
long GiaiThua(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return GiaiThua(n - 1) * n;
}
long Tong(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return Tong(n - 1) + GiaiThua(n - 1) * n;
}

B�i t?p 741 :T�nh S(x, n) = x + x ^ 2 + x ^ 3 + ... + x ^ n
float LuyThua(float x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	return LuyThua(x, n - 1) * x;
}
float Tong(float x, int n)
{
	if (n == 1)
	{
		return x;
	}
	return Tong(x, n - 1) + LuyThua(x, n - 1) * x;
}

B�i t?p 742 :T�nh S(x, n) = x ^ 2 + x ^ 4 + .... + x ^ 2n
double bai742(int x, int n)
{
	if (n == 1)
	{
		return pow(x, 2 * n);
	}
	return bai742(x, n - 1) + pow(x, 2 * n);
}

B�i t?p 743 :T�nh S(x, n) = x + x ^ 3 + x ^ 5 + .... + x ^ (2n + 1)
double tinh(int x, int n)
{
	if (n == 1)

	{
		return pow(x, n);
	}
	return tinh(x, n - 1) + pow(x, 2n + 1);
}

B�i t?p 744 :T�nh S(n) = 1 + 1 / (1 + 2) + 1 / (1 + 2 + 3) + ... + 1 / (1 + 2 + 3 + ... + n)
float Tong(float n)
{
	if (n == 1)
	{
		return (float)1;
	}
	return Tong(n - 1) + n;
}
float TongChia(float n)
{
	if (n == 1)
	{
		return (float)1;
	}
	return TongChia(n - 1) + 1 / (Tong(n - 1) + n);
}

B�i t?p 745 :T�nh S(x, n) = x + (x ^ 2) / 2!+ (x ^ 3) / 3!+ ... + (x ^ n) / n!
float LuyThua(float x, float n)
{
	if (n == 1)
	{
		return x;
	}
	return LuyThua(x, n - 1) * x;
}
float GiaiThua(float n)
{
	if (n == 1)
	{
		return (float)1;
	}
	return GiaiThua(n - 1) * n;
}
float LTChiaGT(float x, float n)
{
	if (n == 1)
	{
		return x;
	}
	return LTChiaGT(x, n - 1) + ((LuyThua(x, n - 1) * x) / (GiaiThua(n - 1) * n));
}

B�i t?p 746 :T�nh S(x, n) = 1 + (x ^ 2) / 2!+ (x ^ 4) / 4!+ ... + (x ^ 2n) / (2n)!
float LuyThua(float x, float n)
{
	if (n == 0)
	{

		return (float)1;
	}
	return LuyThua(x, n - 1) * x * x;
}
float GiaiThua(float n)
{
	if (n == 0)
	{
		return (float)1;
	}
	return GiaiThua(n - 1) * n;
}
float LTChiaGT(float x, float n)
{
	if (n == 0)
	{
		return (float)1;
	}
	return LTChiaGT(x, n - 1) + ((LuyThua(x, n - 1) * x * x) / ((GiaiThua(2 * n - 1) * 2 * n)));
}
B�i t?p 747 :T�m ??c s? l? l?n nh?t c?a s? nguy�n d??ng n.V� d? : n = 100 ??c l? l?n nh?t c?a 100
l� 25
int UocLeMax(int n)
{
	if (n % 2 == 1)
	{
		return n;
	}
	return UocLeMax(n / 2);
}

B�i t?p 748 :T�nh S(n) = sqrt(2 + sqrt(2 + ... sqrt(2 + sqrt(2))))
#include <math.h>
float Function(float n)
{
	if (n == 1)
	{
		return sqrt(2);
	}
	return sqrt(2 + Function(n - 1));
}

B�i t?p 749 :T�nh S(n) = sqrt(n + sqrt(n - 1 + sqrt(n - 2 + ...sqrt(2 + sqrt(1)))))
#include <math.h>
long double Function(long double n)
{
	if (n == 1)
	{
		return 1;
	}
	return sqrt(n + Function(n - 1));
}
B�i t?p 751:S(n) = 1 / (1 + 1 / (1 + 1 / (1 + 1 / (... 1 / (1 / (1 + 1 / (1 + 1)))))))

long double Thuong(int n)
{
	if (n == 1)
	{
		return 1.0 / (1.0 + 1.0);
	}
	return 1 / (1 + Thuong(n - 1));
}
B�i t?p 752 :H�y ??m s? l??ng ch? s? c?a s? nguy�n d??ng n
int DemSoLuongChuSo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return DemSoLuongChuSo(n / 10) + 1;
}
B�i t?p 753 :H�y t�nh t?ng c�c ch? s? c?a s? nguy�n d??ng n
int TongChuSo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return TongChuSo(n / 10) + n % 10;
}
B�i t?p 754 :H�y t�nh t�ch c�c ch? s? c?a s? nguy�n d??ng n
int Tich(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return Tich(n / 10) * (n % 10);

}
B�i t?p 755 :H�y ??m s? l??ng ch? s? l? c?a s? nguy�n d??ng n
int DemLe(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n % 2 == 1)
	{
		return DemLe(n / 10) + 1;
	}
	return DemLe(n / 10);
}
B�i t?p 756 :H�y t�nh t?ng c�c ch? s? ch?n c?a s? nguy�n d??ng n
int TongChuSoChan(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n % 2 == 0)
	{
		return TongChuSoChan(n / 10) + (n % 10);
	}
	return TongChuSoChan(n / 10);
}
B�i t?p 757 :H�y t�nh t�ch c�c ch? s? l? c?a s? nguy�n d??ng n
int TichChuSoLe(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n % 2 == 1)
	{
		return TichChuSoLe(n / 10) * (n % 10);
	}
	return TichChuSoLe(n / 10);
}
B�i t?p 758 :Cho s? nguy�n d??ng n.H�y t�m ch? s? ??u ti�n c?a n
int ChuSoDauTien(int n)
{
	if (n / 10 == 0)
	{
		return n;
	}
	return ChuSoDauTien(n / 10);
}
B�i t?p 759 :H�y t�m ch? s? ??o ng??c c?a s? nguy�n d??ng n

int DemSoLuongChuSo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return DemSoLuongChuSo(n / 10) + 1;
}
int DoiChuSo(int H, int Dem)
{
	if (Dem > 0)
	{
		return DoiChuSo(H * 10, Dem - 1);
	}
	return H;
}
int ChuSoDaoNguoc(int n)
{
	if (n == 0)
	{
		return 0;
	}
	int Dem = DemSoLuongChuSo(n);
	int H = n % 10;
	int T = DoiChuSo(H, Dem - 1);
	return ChuSoDaoNguoc(n / 10) + T;
}

B�i t?p 760 :T�m ch? s? l?n nh?t c?a s? nguy�n d??ng n
int ChuSoLonNhat(int Max, int n) //Max b?t ??u l� n%10
{
	if (n % 10 == 0)
	{
		return Max;
	}
	Max = (Max > n % 10) ? Max : n % 10;
	return ChuSoLonNhat(Max, n / 10);
}

B�i t?p 761 :T�m ch? s? nh? nh?t c?a s? nguy�n d??ng n
int ChuSoNhoNhat(int Min, int n) //Min b?t ??u l� n%10
{
	if (n % 10 == 0)
	{
		return Min;
	}
	Min = (Min < n % 10) ? Min : n % 10;
	return ChuSoLonNhat(Min, n / 10);
}
B�i t?p 762 :H�y ki?m tra s? nguy�n d??ng n c� to�n ch? s? l? hay kh�ng ?
int KTToanLe(int n)

{
	if (n % 2 == 0 && n != 0)
	{
		return 0;
	}
	if (n % 2 == 1)
	{
		return KTToanLe(n / 10);
	}
	return 1;
}

B�i t?p 763 : H�y ki?m tra s? nguy�n d??ng n c� to�n ch? s? ch?n hay kh�ng ?
int KTToanChan(int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n % 2 == 1)
	{
		return 0;
	}
	if (n % 2 == 0)
	{
		return KTToanChan(n / 10);
	}
	return 1;
}

void Dec_Bin(int n)
{
	if (n == 0)
		return;
	Dec_Bin(n / 2);
	cout << n % 2;
}
T�m ??c chung l?n nh?t c?a a v� b.
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}


T�nh gi� tr? c?a n^k.
{

	int tinhTH(int n, int k)
	{
		if (k == 1)
			return n;
		else if (n == k)
			return 1;
		else
			return (tinhTH(n - 1, k) + tinhTH(n - 1, k - 1));
	}
}

T�m s? l?n nh?t c?a m?t m?ng nguy�n.
{
	int Max(int a[], int n)
	{
		if (n == 1)
			return a[0];
		int max = Max(a, n - 1);
		if (a[n - 1] > max)
			return a[n - 1];
		return max;
	}
}

Ki?m tra xem m?t s? c� ??i x?ng hay kh�ng.
{
	bool is_palindrome(int n, int rev = 0)
	{
		if (n == 0) return rev == n;
		return is_palindrome(n / 10, rev * 10 + n % 10);
	}
}

T�m ??c s? chung l?n nh?t v� b?i s? chung nh? nh?t c?a hai s? b?ng ?? quy
{
	// H�m t�nh ??c s? chung l?n nh?t
	int uscln(int a, int b)
	{
		if (b == 0)
			return a;
		else
			return uscln(b, a%b);
	}
}
// H�m t�nh b?i s? chung nh? nh?t
	int bscnn(int a, int b)
	{
		return (a*b) / uscln(a, b);
	}
}
S?p x?p m?t m?ng t?ng d?n b?ng ?? quy
{
	void sapXep(int a[], int n)
	{
		 if (n == 1)
			return;
		sapXep(a, n - 1);
		int i, t;
		 for (i = n - 1; i>0 && a[i] < a[i - 1]; i--)
		 {
			t = a[i];
			a[i] = a[i - 1];
			a[i - 1] = t;
		 }
	}
}
T�m ki?m m?t ph?n t? trong m?t m?ng b?ng ?? quy
{
	int timKiem(int a[], int l, int r, int x)
	{
		if (r < l)
			return -1;
		if (a[l] == x)
			return l;
		if (a[r] == x)
			return r;
		return timKiem(a, l + 1, r - 1, x);
	}
}
T�nh t?ng c�c ch? s? c?a m?t s? nguy�n b?ng ?? quy
{
	int tongCacChuSo(int n)
	{
		if (n / 10 == 0)
			return n;
		else
			return (n % 10) + tongCacChuSo(n / 10);
	}
}
Ki?m tra m?t s? nguy�n c� ph?i s? nguy�n t? hay kh�ng b?ng ?? quy
{
	bool laSoNT(int n, int m = 2)
	{
		if (n == 2)
			return true;
		if (n < 2 || n % m == 0)
			return false;
		if (m <= sqrt(n))
			return laSoNT(n, m + 1);
		else
			return true;
	}
}
Ki?m tra m?t m?ng c� ph?i ??i x?ng hay kh�ng b?ng ?? quy
{
	bool laMangDoiXung(int a[], int l, int r)
	{
		if (l >= r)
			return true;
		if (a[l] != a[r])
			return false;
		return laMangDoiXung(a, l + 1, r - 1);
	}
}
T�nh t?ng c�c s? ch?y t? m?t s? nguy�n ??n m?t s? nguy�n kh�c b?ng ?? quy
{
	int tongSo(int a, int b)
	{
		if (a == b)
			return a;
		else
			return a + tongSo(a + 1, b);
	}
}
S?p x?p m?t m?ng gi?m d?n b?ng ?? quy
{
	void sapXep(int a[], int n)
	{
		if (n == 1)
			return;
		sapXep(a + 1, n - 1);
		int i, t;
		for (i = 1; i < n && a[i]>a[0]; i++);
		if (i != n)
		{
			t = a[0];
			a[0] = a[i];
			a[i] = t;
			sapXep(a + 1, n - 1);
		 }
	}
}
T�m s? l??ng c�c s? ch?n trong m?t m?ng b?ng ?? quy
{
	int soLuongChan(int a[], int n)
	{
		if (n == 0)
			return 0;
		else if (a[n - 1] % 2 == 0)
			return 1 + soLuongChan(a, n - 1);
		 else
			return soLuongChan(a, n - 1);
	}
}
T�m s? th? n trong d�y s? harmonics b?ng ?? quy
{
	double harmonic(int n)
	{
		if (n == 1)
			return 1.0;
		else
			return 1.0 / n + harmonic(n - 1);
	}
}
In t?t c? c�c s? ch�nh ph??ng trong m?t m?ng b?ng ?? quy
{
	bool laSoCP(int n)
	{
		 int x = sqrt(n);
			return x*x == n;
	}

	void inSoCP(int a[], int n)
	{
		if (n == 0)
			return;
		inSoCP(a, n - 1);
		if (laSoCP(a[n - 1]))
			cout << a[n - 1] << " ";
	}
}
T�m s? nh? nh?t trong m?t m?ng b?ng ?? quy
{
	int timMin(int a[], int n)
	{
		if (n == 1)
			 return a[0];
		else
		{
			int x = timMin(a, n - 1);
			if (a[n - 1] < x)
			return a[n - 1];
		 else
			 return x;
		}
	}
}


T�m s? l?n th? hai trong m?t m?ng b?ng ?? quy
{
}
S?p x?p m?t m?ng theo chi?u d??ng v� �m b?ng ?? quy
T�m s? d??ng nh? nh?t trong m?t m?ng b?ng ?? quy
T�m s? �m l?n nh?t trong m?t m?ng b?ng ?? quy
T�m m?t chu?i con li�n ti?p c� t?ng l?n nh?t trong m?t m?ng b?ng ?? quy
Ki?m tra m?t s? c� ph?i s? Armstrong hay kh�ng b?ng ?? quy
T�nh t?ng c�c ph?n t? ? c�c v? tr� l? trong m?t m?ng b?ng ?? quy
T�m s? l?n nh?t trong m?t m?ng v� ??m s? l?n xu?t hi?n b?ng ?? quy
T�m s? l?n xu?t hi?n c?a m?t k� t? trong m?t chu?i b?ng ?? quy
T�m s? l??ng ph?n t? x xu?t hi?n trong m?t m?ng b?ng ?? quy
Ki?m tra m?t s? c� ph?i s? ho�n h?o hay kh�ng b?ng ?? quy
T�nh s? ng�y trong m?t th�ng c?a m?t n?m b?t k? b?ng ?? quy
T�m s? ??o ng??c c?a m?t s? nguy�n b?ng ?? quy
T?i ?u h�a b�i to�n Th�p H� N?i b?ng ?? quy
Ki?m tra m?t chu?i c� ph?i chu?i Palindrome hay kh�ng b?ng ?? quy
T�m ??c s? chung nh? nh?t c?a hai s? b?ng ?? quy
T�m ph?n t? l?n th? k trong m?t m?ng b?ng ?? quy
T�m s? Fibonacci g?n nh?t v?i m?t s? nguy�n b?t k? b?ng ?? quy
T�m chu?i con d�i nh?t m� b?t ??u b?ng k� t? ??u ti�n v� k?t th�c b?ng k� t? cu?i c�ng trong m?t chu?i b?ng ?? quy
Li?t k� t?t c? c�c ho�n v? c?a m?t s? nguy�n b?ng ?? quy
T�nh t?ng nh?ng s? ch�nh ph??ng nh? h?n ho?c b?ng m?t s? nguy�n b?t k? b?ng ?? quy
T�nh t?ng c�c s? nguy�n t? nh? h?n ho?c b?ng m?t s? nguy�n b?t k? b?ng ?? quy
T�nh t?ng c�c ph?n t? n?m trong kho?ng gi?a hai gi� tr? b?t k? trong m?t m?ng b?ng ?? quy
T�m s? ph?n t? l?n h?n s? trung b�nh trong m?t m?ng b?ng ?? quy
T�m s? l??ng ph?n t? l?n h?n ho?c b?ng m?t gi� tr? b?t k? trong m?t m?ng b?ng ?? quy
Li?t k� c�c s? Armstrong trong m?t kho?ng s? b?ng ?? quy
Li?t k� t?t c? c�c s? ho�n h?o nh? h?n ho?c b?ng m?t gi� tr? b?t k? b?ng ?? quy
T�m s? ??i x?ng g?n nh?t v?i m?t s? nguy�n b?t k? b?ng ?? quy
T�m s? l??ng ph?n t? ch?n l?n h?n m?t gi� tr? b?t k? trong m?t m?ng b?ng ?? quy
T�m s? l??ng ph?n t? c� gi� tr? b?ng s? l??ng ch? s? c?a n� trong m?t m?ng b?ng ?? quy
T�m t?t c? c�c s? nguy�n t? l?n h?n ho?c b?ng m?t s? nguy�n b?t k? trong m?t m?ng b?ng ?? quy.
T�m chu?i con d�i nh?t trong m?t chu?i cho tr??c.
Vi?t ch??ng tr�nh t�m h?ng th? k trong m?t d�y s? Fibonacci.
T�nh t?ng c�c s? t? 1 ??n n kh�ng d�ng v�ng l?p.
Ki?m tra t�nh ?�ng ??n c?a m?t bi?u th?c s? h?c.
Vi?t ch??ng tr�nh duy?t m?t c�y nh? ph�n b?ng ph??ng ph�p ?? quy.
Chuy?n ??i m?t s? t? h? nh? ph�n sang h? th?p ph�n.
Ki?m tra xem m?t s? nguy�n d??ng c� ph?i l� s? ho�n h?o hay kh�ng.
T�m t?t c? c�c x�u nh? ph�n c� ?? d�i n.
Vi?t ch??ng tr�nh in m?t m?ng ?a chi?u b?ng ph??ng ph�p ?? quy.
Chia m?t s? nguy�n cho m?t s? nguy�n kh�c v� tr? v? k?t qu? v� ph?n d?.
T�nh t?ng hai ma tr?n.
Vi?t ch??ng tr�nh s?p x?p m?t m?ng b?ng thu?t to�n s?p x?p ch?n.
Ki?m tra xem m?t s? nguy�n c� ph?i l� s? nguy�n t? hay kh�ng.
T�m s? thu?n ngh?ch ??u ti�n l?n h?n m?t s? nguy�n d??ng cho tr??c.
T�m s? c�c s? s?p x?p c?a n ph?n t?.
Ki?m tra xem m?t chu?i c� ph?i l� chu?i con c?a m?t chu?i kh�c hay kh�ng.
T�m s? l?n th? n trong m?t m?ng nguy�n.
T�m s? l?n nh?t trong m?t d�y s? x�u k� t?.
Vi?t ch??ng tr�nh s?p x?p m?t m?ng b?ng thu?t to�n n?i b?t.
T�m s? nguy�n d??ng nh? nh?t sao cho t?ng c?a c�c ch? s? c?a n� l� m?t s? x�c ??nh.
Ki?m tra xem hai chu?i c� gi?ng nhau hay kh�ng.
T�nh t?ng c�c ph?n t? trong m?t ma tr?n ??u b?ng c�ch s? d?ng ?? quy.
T�m s? nh? th? k trong m?t m?ng nguy�n.
Vi?t ch??ng tr�nh s?p x?p m?t m?ng b?ng thu?t to�n s?p x?p ch�n.
S?p x?p c�c ph?n t? trong m?t m?ng theo th? t? t?ng d?n v� gi?m d?n b?ng ph??ng ph�p ?? quy.
T�nh t?ng c�c ph?n t? tr�n ???ng ch�o trong m?t ma tr?n.
T�m s? ch? s? l?n nh?t c?a m?t s? nguy�n d??ng.
Ki?m tra xem m?t chu?i c� ph?i l� chu?i ??i x?ng hay kh�ng.
T�m s? c�c x�u con c?a m?t chu?i.
T�m s? c�c c�ch chia m?t s? nguy�n d??ng th�nh c�c b?i s? nh? h?n.
T�m t?t c? c�c s? nguy�n t? nh? h?n m?t s? nguy�n d??ng n.
T�m s? nguy�n d??ng nh? nh?t sao cho t?ng c?a c�c ??c s? c?a n� l� m?t s? x�c ??nh.
T�nh l?y th?a c?a m?t s? theo ph??ng ph�p ?? quy.
T�m s? l?ng nhau c?a hai ma tr?n vu�ng.
T�m s? l?n nh?t trong m?t c�y nh? ph�n.
T�m gi� tr? c?a m?t ?a th?c t?i m?t ?i?m nh?t ??nh.
S?p x?p c�c ph?n t? trong m?t m?ng theo th? t? t?ng d?n b?ng thu?t to�n s?p x?p tr?n.
T�m s? nguy�n d??ng sao cho t?ng b�nh ph??ng c?a c�c ch? s? c?a n� l� m?t s? x�c ??nh.
T�m ph?n t? l?n th? k trong m?t m?ng nguy�n.
T�m s? c�c chu?i con li�n ti?p c?a m?t chu?i.
T�nh t?ng c�c s? nguy�n t? 1 ??n n.
T�nh t?ng c�c s? ch?n t? 1 ??n n.
T�nh t?ng c�c s? l? t? 1 ??n n.
T�nh t?ng c�c s? chia h?t cho k t? 1 ??n n.
T�nh t?ng c�c m? c? s? b t? 0 ??n n.
T�m gi� tr? l?n nh?t trong m?ng.
T�m gi� tr? nh? nh?t trong m?ng.
T�nh t?ng c�c ph?n t? trong m?ng.
T�m s? ph?n t? ch?n trong m?ng.
T�m s? ph?n t? l? trong m?ng.
T�nh giai th?a c?a m?t s? nguy�n d??ng.
T�nh s? Fibonacci th? n.
T�m ??c s? chung l?n nh?t c?a hai s? nguy�n d??ng.
T�m b?i s? chung nh? nh?t c?a hai s? nguy�n d??ng.
T�m s? nguy�n t? nh? h?n ho?c b?ng n.
Ki?m tra xem m?t s? c� ??i x?ng hay kh�ng.
Ki?m tra xem m?t chu?i c� ??i x?ng hay kh�ng.
Ki?m tra ph�p t�nh ??n gi?n(+, -, *, / ) th�nh c�ng hay kh�ng.
T�m chu?i con d�i nh?t trong m?t chu?i cho tr??c.
T�m s? l?n xu?t hi?n c?a m?t ph?n t? trong m?ng.
T�m s? l?n nh?t trong d�y con li�n t?c c?a m?t m?ng.
In ra c�c s? nguy�n d??ng nh? h?n ho?c b?ng n theo th? t? gi?m d?n.
T�m s? l?n th? n trong m?t m?ng nguy�n.
T�nh t?ng c�c ph?n t? c?a m?t ma tr?n.
Ki?m tra t�nh ??i x?ng c?a m?t ma tr?n vu�ng.
T�m s? c�c x�u nh? ph�n ?? d�i n.
T�m s? nh? th? k trong m?t m?ng nguy�n.
T�m s? l?p ph??ng nh? nh?t l?n h?n ho?c b?ng n.
T�m t?t c? c�c s? nguy�n t? trong m?t m?ng.
T�m s? t? do li�n th�ng c?a m?t ?? th? kh�ng h??ng.
* /

#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;
const int MAXR = 10, MAXC = 10;
void Nhap(int a[MAXR][MAXC], int r, int c, int i, int j);
void Xuat(int a[MAXR][MAXC], int r, int c, int i, int j);
void Tim_kiem(int a[MAXR][MAXC], int r, int c, int x, int& dem);
void reverseMatrix(int matrix[MAXR][MAXC], int r, int c, int i, int j);
void Xoa_dong(int a[MAXR][MAXC], int& r, int c, int row);
void Xoa_cot(int a[MAXR][MAXC], int r, int& c, int col);
void sortArray_Tang(int array[MAXR][MAXC], int numRows, int numCols, int currRow, int currCol);
void sortArray_Giam(int array[MAXR][MAXC], int numRows, int numCols, int currRow, int currCol);
void Tang_hang(int a[MAXR][MAXC], int n, int m, int i, int j);
void Tang_cot(int a[MAXR][MAXC], int r, int c, int i, int j);
void Them_dong(int a[MAXR][MAXC], int& r, int c, int row);
void Them_cot(int a[MAXR][MAXC], int r, int& c, int col);
int findMax(int a[MAXR][MAXC], int r, int c, int i, int j);
int findMin(int a[MAXR][MAXC], int r, int c, int i, int j);
int main()
{
	int a[MAXR][MAXC];
	int choose, r, c, x, i = 0, j = 0, count = 0, row, col, k = 0, l = 0;
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
			Nhap(a, r, c, i, j);
			IN = true;
			break;
		case 2:
			if (IN)
			{
				cout << "Mang dang luu tru: " << endl;
				Xuat(a, r, c, i, j);
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 3:
			if (IN)
			{
				cout << "Nhap phan tu muon tim kiem: ";
				cin >> x;
				Tim_kiem(a, r, c, x, count);
				if (count == 0) {
					cout << "Khong tim thay phan tu " << x << " trong mang." << endl;
				}
				else {
					cout << "Phan tu " << x << " xuat hien " << count << " lan trong mang." << endl;
				}
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 5:
			if (IN)
			{
				cout << "Da dao nguoc: " << endl;
				reverseMatrix(a, r, c, 0, 0);
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 6:
			if (IN)
			{
				cout << "Da sap xep tang: " << endl;
				sortArray_Tang(a, r, c, 0, 0);
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 7:
			if (IN)
			{
				cout << "Da sap xep giam: " << endl;
				sortArray_Giam(a, r, c, 0, 0);
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 8:
			if (IN)
			{
				Tang_hang(a, r, c, 0, 0);
				cout << "Mang da duoc sap xep tang dan: " << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
			break;
		case 9:
			if (IN)
			{
				Tang_cot(a, r, c, 0, 0);
				cout << "Mang da duoc sap xep tang dan: " << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 10:
			if (IN)
			{
				cout << "Nhap dong muon xoa: ";
				cin >> row;
				Xoa_dong(a, r, c, row);
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 11:
			if (IN)
			{
				cout << "Nhap cot muon xoa: ";
				cin >> col;
				Xoa_cot(a, r, c, col);
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 12:
			if (IN)
			{
				cout << "Enter the index of the row to insert (0-indexed): ";
				cin >> row;

				// Add the new row
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 13:
			if (IN)
			{
				cout << "Enter the index of the column to insert (0-indexed): ";
				cin >> col;

				// Add the new column

			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 15:
			if (IN)
			{
				int max = findMax(a, r, c, i, j); // g?i h�m ?? quy ?? t�m gi� tr? l?n nh?t
				cout << "Phan tu lon nhat trong mang: " << max << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 16:
			if (IN)
			{
				int min = findMin(a, r, c, i, j); // g?i h�m ?? quy ?? t�m gi� tr? l?n nh?t
				cout << "Phan tu nho nhat trong mang: " << min << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		default:
			cout << "Thoat" << endl;
		}
		_getch();


	} while (choose > 0 && choose <= 16);
	return 0;
}
void Nhap(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return;
	if (j >= c)
	{
		Nhap(a, r, c, i + 1, 0);
		return;
	}
	cout << "Nhap a[" << i << "][" << j << "]= ";
	cin >> a[i][j];
	Nhap(a, r, c, i, j + 1);
}
void Xuat(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return;
	if (j >= c)
	{
		cout << endl;
		Xuat(a, r, c, i + 1, 0);
		return;
	}
	cout << a[i][j] << "\t";
	Xuat(a, r, c, i, j + 1);
}
void Tim_kiem(int a[MAXR][MAXC], int r, int c, int x, int& count) {
	static int i = 0, j = 0;
	if (i >= r) {
		return;
	}
	if (j >= c) {
		j = 0; i++;
		Tim_kiem(a, r, c, x, count);
		return;
	}
	if (a[i][j] == x) {
		cout << "Phan tu " << x << " xuat hien o vi tri [" << i << "][" << j << "]" << endl;
		count++;
	}
	j++;
	Tim_kiem(a, r, c, x, count);
}
void reverseMatrix(int a[MAXR][MAXC], int r, int c, int i, int j)
{

	if (i >= r / 2)
	{
		return;
	}
	if (j >= c)
	{
		reverseMatrix(a, r, c, i + 1, 0);
		return;
	}
	swap(a[i][j], a[r - i - 1][c - j - 1]);
	reverseMatrix(a, r, c, i, j + 1);
}
void sortArray_Tang(int a[MAXR][MAXC], int r, int c, int i, int j) {
	int Row = i;
	int Col = j + 1;
	if (Col >= c) {
		Row++;
		Col = 0;
	}
	if (Row < r) {
		if (a[i][j] > a[Row][Col]) {
			swap(a[i][j], a[Row][Col]);
			sortArray_Tang(a, r, c, 0, 0);
		}
		else {
			sortArray_Tang(a, r, c, Row, Col);
		}
	}
}
void sortArray_Giam(int a[MAXR][MAXC], int r, int c, int i, int j) {
	int Row = i;
	int Col = j + 1;
	if (Col >= c) {
		Row++;
		Col = 0;
	}
	if (Row < r) {
		if (a[i][j] < a[Row][Col]) {
			swap(a[i][j], a[Row][Col]);
			sortArray_Giam(a, r, c, 0, 0);
		}
		else {
			sortArray_Giam(a, r, c, Row, Col);
		}
	}
}
void Tang_hang(int a[MAXR][MAXC], int r, int c, int i, int j) {
	if (i >= r) return; // duy?t h?t m?ng, tho�t h�m
	if (j >= c) { // ??n c?t cu?i c�ng c?a h�ng hi?n t?i, chuy?n sang h�ng ti?p theo
		Tang_hang(a, r, c, i + 1, 0);
		return;
	}
	for (int k = j + 1; k < c; k++) { // duy?t c�c ph?n t? c�n l?i c?a h�ng hi?n t?i
		if (a[i][j] > a[i][k]) { // n?u t�m th?y ph?n t? a[i][k] < a[i][j]
			swap(a[i][j], a[i][k]); // v� ho�n ??i hai ph?n t? n�y v?i nhau
		}
	}
	Tang_hang(a, r, c, i, j + 1); // ti?p t?c s?p x?p ph?n t? ti?p theo
}
void Tang_cot(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r) return; // duy?t h?t m?ng, tho�t h�m
	if (j >= c) { // ??n c?t cu?i c�ng c?a h�ng hi?n t?i, chuy?n sang h�ng ti?p theo
		Tang_cot(a, r, c, i + 1, 0);
		return;
	}
	for (int k = i + 1; k < r; k++) { // duy?t c�c ph?n t? c�n l?i c?a h�ng hi?n t?i
		if (a[i][j] > a[k][j]) { // n?u t�m th?y ph?n t? a[i][k] < a[i][j]
			swap(a[i][j], a[k][j]); // v� ho�n ??i hai ph?n t? n�y v?i nhau
		}
	}
	Tang_cot(a, r, c, i, j + 1); // ti?p t?c s?p x?p ph?n t? ti?p theo
}
void Xoa_dong(int a[MAXR][MAXC], int& r, int c, int row)
{
	if (row >= r - 1)
	{
		r--;
		return;
	}// n?u h�ng c?n x�a l� h�ng cu?i c�ng
	for (int i = 0; i < c; ++i)
	{
		a[row][i] = a[row + 1][i]; // di chuy?n h�ng ti?p theo l�n h�ng c?n x�a
	}
	row++;
	Xoa_dong(a, r, c, row); // ?? quy ?? x�a h�ng ti?p theo
}
void Xoa_cot(int a[MAXR][MAXC], int r, int& c, int col) {
	if (col >= c - 1)
	{
		c--;
		return;
	}// n?u c?t c?n x�a l� c?t cu?i c�ng
	for (int i = 0; i < r; ++i)
	{
		a[i][col] = a[i][col + 1]; // di chuy?n c?t ti?p theo qua c?t c?n x�a
	}
	col++;
	Xoa_cot(a, r, c, col);
}

int findMax(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return a[0][0]; // gi� tr? tr? v? m?c ??nh
	if (j >= c)
		return findMax(a, r, c, i + 1, 0); // x�t h�ng ti?p theo
	int current = a[i][j];
	int next = findMax(a, r, c, i, j + 1); // t�m gi� tr? l?n nh?t ? c?t ti?p theo
	return current > next ? current : next; // so s�nh gi� tr? hi?n t?i v� gi� tr? ti?p theo
}
int findMin(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return a[0][0]; // gi� tr? tr? v? m?c ??nh
	if (j >= c)
		return findMax(a, r, c, i + 1, 0); // x�t h�ng ti?p theo
	int current = a[i][j];
	int next = findMax(a, r, c, i, j + 1); // t�m gi� tr? l?n nh?t ? c?t ti?p theo
	return current < next ? current : next; // so s�nh gi� tr? hi?n t?i v� gi� tr? ti?p theo
}