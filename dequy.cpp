
/*Bài t?p 730: Tính S(n) = 1 + 2 + 3 + ... + n - 1 + n
int Tinh(int n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) + n;
}

Bài t?p 731 : Tính S(n) = 1 ^ 2 + 2 ^ 2 + 3 ^ 2 + ... + (n - 1) ^ 2 + n ^ 2
int Tinh(int n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) + n * n;
}

Bài t?p 732 : Tính S(n) = 1 + 1 / 2 + 1 / 3 + ... + 1 / n
float Tinh(float n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) + 1 / n;
}

Bài t?p 733 : Tính S(n) = 1 / 2 + 1 / 4 + ... + 1 / 2n
float Tinh(float n)
{
	if (n == 1)

		return 0.5;
	return Tinh(n - 1) + 1 / (2 * n);
}

Bài t?p 734 : Tính S(n) = 1 + 1 / 3 + 1 / 5 + ... + 1 / (2n + 1)
float Tinh(float n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) + 1 / (2 * n + 1);
}

Bài t?p 735: Tính S(n) = 1 / (1 * 2) + 1 / (2 * 3) + 1 / (n(*n - 1))
float Tinh(float n)
{
	if (n == 1)
		return 0.5;
	return Tinh(n - 1) + 1 / (n * (n + 1));
}

Bài t?p 736 : Tính S(n) = 1 / 2 + 2 / 3 + 3 / 4 + ... + n / (n + 1)
float Tinh(float n)
{
	if (n == 1)
		return 0.5;
	return Tinh(n - 1) + n / (n + 1);
}

Bài t?p 737 :Tính S(n) = 1 / 2 + 3 / 4 + 5 / 6 + ... + (2n + 1) / (2n + 2)
float Tinh(float n)
{
	if (n == 1)
		return 0.5;
	return Tinh(n - 1) + (2 * n + 1) / (2 * n + 2);
}

Bài t?p 738 :Tính T(n) = 1 * 2 * 3*.....*n
float Tinh(float n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) * n;
}

Bài t?p 739 :Tính T(x, n) = x ^ n
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

Bài t?p 740 :Tính S(n) = 1 + 1.2 + 1.2.3 + .... + 1.2.3....n
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

Bài t?p 741 :Tính S(x, n) = x + x ^ 2 + x ^ 3 + ... + x ^ n
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

Bài t?p 742 :Tính S(x, n) = x ^ 2 + x ^ 4 + .... + x ^ 2n
double bai742(int x, int n)
{
	if (n == 1)
	{
		return pow(x, 2 * n);
	}
	return bai742(x, n - 1) + pow(x, 2 * n);
}

Bài t?p 743 :Tính S(x, n) = x + x ^ 3 + x ^ 5 + .... + x ^ (2n + 1)
double tinh(int x, int n)
{
	if (n == 1)

	{
		return pow(x, n);
	}
	return tinh(x, n - 1) + pow(x, 2n + 1);
}

Bài t?p 744 :Tính S(n) = 1 + 1 / (1 + 2) + 1 / (1 + 2 + 3) + ... + 1 / (1 + 2 + 3 + ... + n)
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

Bài t?p 745 :Tính S(x, n) = x + (x ^ 2) / 2!+ (x ^ 3) / 3!+ ... + (x ^ n) / n!
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

Bài t?p 746 :Tính S(x, n) = 1 + (x ^ 2) / 2!+ (x ^ 4) / 4!+ ... + (x ^ 2n) / (2n)!
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
Bài t?p 747 :Tìm ??c s? l? l?n nh?t c?a s? nguyên d??ng n.Ví d? : n = 100 ??c l? l?n nh?t c?a 100
là 25
int UocLeMax(int n)
{
	if (n % 2 == 1)
	{
		return n;
	}
	return UocLeMax(n / 2);
}

Bài t?p 748 :Tính S(n) = sqrt(2 + sqrt(2 + ... sqrt(2 + sqrt(2))))
#include <math.h>
float Function(float n)
{
	if (n == 1)
	{
		return sqrt(2);
	}
	return sqrt(2 + Function(n - 1));
}

Bài t?p 749 :Tính S(n) = sqrt(n + sqrt(n - 1 + sqrt(n - 2 + ...sqrt(2 + sqrt(1)))))
#include <math.h>
long double Function(long double n)
{
	if (n == 1)
	{
		return 1;
	}
	return sqrt(n + Function(n - 1));
}
Bài t?p 751:S(n) = 1 / (1 + 1 / (1 + 1 / (1 + 1 / (... 1 / (1 / (1 + 1 / (1 + 1)))))))

long double Thuong(int n)
{
	if (n == 1)
	{
		return 1.0 / (1.0 + 1.0);
	}
	return 1 / (1 + Thuong(n - 1));
}
Bài t?p 752 :Hãy ??m s? l??ng ch? s? c?a s? nguyên d??ng n
int DemSoLuongChuSo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return DemSoLuongChuSo(n / 10) + 1;
}
Bài t?p 753 :Hãy tính t?ng các ch? s? c?a s? nguyên d??ng n
int TongChuSo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return TongChuSo(n / 10) + n % 10;
}
Bài t?p 754 :Hãy tính tích các ch? s? c?a s? nguyên d??ng n
int Tich(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return Tich(n / 10) * (n % 10);

}
Bài t?p 755 :Hãy ??m s? l??ng ch? s? l? c?a s? nguyên d??ng n
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
Bài t?p 756 :Hãy tính t?ng các ch? s? ch?n c?a s? nguyên d??ng n
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
Bài t?p 757 :Hãy tính tích các ch? s? l? c?a s? nguyên d??ng n
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
Bài t?p 758 :Cho s? nguyên d??ng n.Hãy tìm ch? s? ??u tiên c?a n
int ChuSoDauTien(int n)
{
	if (n / 10 == 0)
	{
		return n;
	}
	return ChuSoDauTien(n / 10);
}
Bài t?p 759 :Hãy tìm ch? s? ??o ng??c c?a s? nguyên d??ng n

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

Bài t?p 760 :Tìm ch? s? l?n nh?t c?a s? nguyên d??ng n
int ChuSoLonNhat(int Max, int n) //Max b?t ??u là n%10
{
	if (n % 10 == 0)
	{
		return Max;
	}
	Max = (Max > n % 10) ? Max : n % 10;
	return ChuSoLonNhat(Max, n / 10);
}

Bài t?p 761 :Tìm ch? s? nh? nh?t c?a s? nguyên d??ng n
int ChuSoNhoNhat(int Min, int n) //Min b?t ??u là n%10
{
	if (n % 10 == 0)
	{
		return Min;
	}
	Min = (Min < n % 10) ? Min : n % 10;
	return ChuSoLonNhat(Min, n / 10);
}
Bài t?p 762 :Hãy ki?m tra s? nguyên d??ng n có toàn ch? s? l? hay không ?
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

Bài t?p 763 : Hãy ki?m tra s? nguyên d??ng n có toàn ch? s? ch?n hay không ?
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
Tìm ??c chung l?n nh?t c?a a và b.
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}


Tính giá tr? c?a n^k.
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

Tìm s? l?n nh?t c?a m?t m?ng nguyên.
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

Ki?m tra xem m?t s? có ??i x?ng hay không.
{
	bool is_palindrome(int n, int rev = 0)
	{
		if (n == 0) return rev == n;
		return is_palindrome(n / 10, rev * 10 + n % 10);
	}
}

Tìm ??c s? chung l?n nh?t và b?i s? chung nh? nh?t c?a hai s? b?ng ?? quy
{
	// Hàm tính ??c s? chung l?n nh?t
	int uscln(int a, int b)
	{
		if (b == 0)
			return a;
		else
			return uscln(b, a%b);
	}
}
// Hàm tính b?i s? chung nh? nh?t
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
Tìm ki?m m?t ph?n t? trong m?t m?ng b?ng ?? quy
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
Tính t?ng các ch? s? c?a m?t s? nguyên b?ng ?? quy
{
	int tongCacChuSo(int n)
	{
		if (n / 10 == 0)
			return n;
		else
			return (n % 10) + tongCacChuSo(n / 10);
	}
}
Ki?m tra m?t s? nguyên có ph?i s? nguyên t? hay không b?ng ?? quy
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
Ki?m tra m?t m?ng có ph?i ??i x?ng hay không b?ng ?? quy
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
Tính t?ng các s? ch?y t? m?t s? nguyên ??n m?t s? nguyên khác b?ng ?? quy
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
Tìm s? l??ng các s? ch?n trong m?t m?ng b?ng ?? quy
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
Tìm s? th? n trong dãy s? harmonics b?ng ?? quy
{
	double harmonic(int n)
	{
		if (n == 1)
			return 1.0;
		else
			return 1.0 / n + harmonic(n - 1);
	}
}
In t?t c? các s? chính ph??ng trong m?t m?ng b?ng ?? quy
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
Tìm s? nh? nh?t trong m?t m?ng b?ng ?? quy
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


Tìm s? l?n th? hai trong m?t m?ng b?ng ?? quy
{
}
S?p x?p m?t m?ng theo chi?u d??ng và âm b?ng ?? quy
Tìm s? d??ng nh? nh?t trong m?t m?ng b?ng ?? quy
Tìm s? âm l?n nh?t trong m?t m?ng b?ng ?? quy
Tìm m?t chu?i con liên ti?p có t?ng l?n nh?t trong m?t m?ng b?ng ?? quy
Ki?m tra m?t s? có ph?i s? Armstrong hay không b?ng ?? quy
Tính t?ng các ph?n t? ? các v? trí l? trong m?t m?ng b?ng ?? quy
Tìm s? l?n nh?t trong m?t m?ng và ??m s? l?n xu?t hi?n b?ng ?? quy
Tìm s? l?n xu?t hi?n c?a m?t ký t? trong m?t chu?i b?ng ?? quy
Tìm s? l??ng ph?n t? x xu?t hi?n trong m?t m?ng b?ng ?? quy
Ki?m tra m?t s? có ph?i s? hoàn h?o hay không b?ng ?? quy
Tính s? ngày trong m?t tháng c?a m?t n?m b?t k? b?ng ?? quy
Tìm s? ??o ng??c c?a m?t s? nguyên b?ng ?? quy
T?i ?u hóa bài toán Tháp Hà N?i b?ng ?? quy
Ki?m tra m?t chu?i có ph?i chu?i Palindrome hay không b?ng ?? quy
Tìm ??c s? chung nh? nh?t c?a hai s? b?ng ?? quy
Tìm ph?n t? l?n th? k trong m?t m?ng b?ng ?? quy
Tìm s? Fibonacci g?n nh?t v?i m?t s? nguyên b?t k? b?ng ?? quy
Tìm chu?i con dài nh?t mà b?t ??u b?ng ký t? ??u tiên và k?t thúc b?ng ký t? cu?i cùng trong m?t chu?i b?ng ?? quy
Li?t kê t?t c? các hoán v? c?a m?t s? nguyên b?ng ?? quy
Tính t?ng nh?ng s? chính ph??ng nh? h?n ho?c b?ng m?t s? nguyên b?t k? b?ng ?? quy
Tính t?ng các s? nguyên t? nh? h?n ho?c b?ng m?t s? nguyên b?t k? b?ng ?? quy
Tính t?ng các ph?n t? n?m trong kho?ng gi?a hai giá tr? b?t k? trong m?t m?ng b?ng ?? quy
Tìm s? ph?n t? l?n h?n s? trung bình trong m?t m?ng b?ng ?? quy
Tìm s? l??ng ph?n t? l?n h?n ho?c b?ng m?t giá tr? b?t k? trong m?t m?ng b?ng ?? quy
Li?t kê các s? Armstrong trong m?t kho?ng s? b?ng ?? quy
Li?t kê t?t c? các s? hoàn h?o nh? h?n ho?c b?ng m?t giá tr? b?t k? b?ng ?? quy
Tìm s? ??i x?ng g?n nh?t v?i m?t s? nguyên b?t k? b?ng ?? quy
Tìm s? l??ng ph?n t? ch?n l?n h?n m?t giá tr? b?t k? trong m?t m?ng b?ng ?? quy
Tìm s? l??ng ph?n t? có giá tr? b?ng s? l??ng ch? s? c?a nó trong m?t m?ng b?ng ?? quy
Tìm t?t c? các s? nguyên t? l?n h?n ho?c b?ng m?t s? nguyên b?t k? trong m?t m?ng b?ng ?? quy.
Tìm chu?i con dài nh?t trong m?t chu?i cho tr??c.
Vi?t ch??ng trình tìm h?ng th? k trong m?t dãy s? Fibonacci.
Tính t?ng các s? t? 1 ??n n không dùng vòng l?p.
Ki?m tra tính ?úng ??n c?a m?t bi?u th?c s? h?c.
Vi?t ch??ng trình duy?t m?t cây nh? phân b?ng ph??ng pháp ?? quy.
Chuy?n ??i m?t s? t? h? nh? phân sang h? th?p phân.
Ki?m tra xem m?t s? nguyên d??ng có ph?i là s? hoàn h?o hay không.
Tìm t?t c? các xâu nh? phân có ?? dài n.
Vi?t ch??ng trình in m?t m?ng ?a chi?u b?ng ph??ng pháp ?? quy.
Chia m?t s? nguyên cho m?t s? nguyên khác và tr? v? k?t qu? và ph?n d?.
Tính t?ng hai ma tr?n.
Vi?t ch??ng trình s?p x?p m?t m?ng b?ng thu?t toán s?p x?p ch?n.
Ki?m tra xem m?t s? nguyên có ph?i là s? nguyên t? hay không.
Tìm s? thu?n ngh?ch ??u tiên l?n h?n m?t s? nguyên d??ng cho tr??c.
Tìm s? các s? s?p x?p c?a n ph?n t?.
Ki?m tra xem m?t chu?i có ph?i là chu?i con c?a m?t chu?i khác hay không.
Tìm s? l?n th? n trong m?t m?ng nguyên.
Tìm s? l?n nh?t trong m?t dãy s? xâu kí t?.
Vi?t ch??ng trình s?p x?p m?t m?ng b?ng thu?t toán n?i b?t.
Tìm s? nguyên d??ng nh? nh?t sao cho t?ng c?a các ch? s? c?a nó là m?t s? xác ??nh.
Ki?m tra xem hai chu?i có gi?ng nhau hay không.
Tính t?ng các ph?n t? trong m?t ma tr?n ??u b?ng cách s? d?ng ?? quy.
Tìm s? nh? th? k trong m?t m?ng nguyên.
Vi?t ch??ng trình s?p x?p m?t m?ng b?ng thu?t toán s?p x?p chèn.
S?p x?p các ph?n t? trong m?t m?ng theo th? t? t?ng d?n và gi?m d?n b?ng ph??ng pháp ?? quy.
Tính t?ng các ph?n t? trên ???ng chéo trong m?t ma tr?n.
Tìm s? ch? s? l?n nh?t c?a m?t s? nguyên d??ng.
Ki?m tra xem m?t chu?i có ph?i là chu?i ??i x?ng hay không.
Tìm s? các xâu con c?a m?t chu?i.
Tìm s? các cách chia m?t s? nguyên d??ng thành các b?i s? nh? h?n.
Tìm t?t c? các s? nguyên t? nh? h?n m?t s? nguyên d??ng n.
Tìm s? nguyên d??ng nh? nh?t sao cho t?ng c?a các ??c s? c?a nó là m?t s? xác ??nh.
Tính l?y th?a c?a m?t s? theo ph??ng pháp ?? quy.
Tìm s? l?ng nhau c?a hai ma tr?n vuông.
Tìm s? l?n nh?t trong m?t cây nh? phân.
Tìm giá tr? c?a m?t ?a th?c t?i m?t ?i?m nh?t ??nh.
S?p x?p các ph?n t? trong m?t m?ng theo th? t? t?ng d?n b?ng thu?t toán s?p x?p tr?n.
Tìm s? nguyên d??ng sao cho t?ng bình ph??ng c?a các ch? s? c?a nó là m?t s? xác ??nh.
Tìm ph?n t? l?n th? k trong m?t m?ng nguyên.
Tìm s? các chu?i con liên ti?p c?a m?t chu?i.
Tính t?ng các s? nguyên t? 1 ??n n.
Tính t?ng các s? ch?n t? 1 ??n n.
Tính t?ng các s? l? t? 1 ??n n.
Tính t?ng các s? chia h?t cho k t? 1 ??n n.
Tính t?ng các m? c? s? b t? 0 ??n n.
Tìm giá tr? l?n nh?t trong m?ng.
Tìm giá tr? nh? nh?t trong m?ng.
Tính t?ng các ph?n t? trong m?ng.
Tìm s? ph?n t? ch?n trong m?ng.
Tìm s? ph?n t? l? trong m?ng.
Tính giai th?a c?a m?t s? nguyên d??ng.
Tính s? Fibonacci th? n.
Tìm ??c s? chung l?n nh?t c?a hai s? nguyên d??ng.
Tìm b?i s? chung nh? nh?t c?a hai s? nguyên d??ng.
Tìm s? nguyên t? nh? h?n ho?c b?ng n.
Ki?m tra xem m?t s? có ??i x?ng hay không.
Ki?m tra xem m?t chu?i có ??i x?ng hay không.
Ki?m tra phép tính ??n gi?n(+, -, *, / ) thành công hay không.
Tìm chu?i con dài nh?t trong m?t chu?i cho tr??c.
Tìm s? l?n xu?t hi?n c?a m?t ph?n t? trong m?ng.
Tìm s? l?n nh?t trong dãy con liên t?c c?a m?t m?ng.
In ra các s? nguyên d??ng nh? h?n ho?c b?ng n theo th? t? gi?m d?n.
Tìm s? l?n th? n trong m?t m?ng nguyên.
Tính t?ng các ph?n t? c?a m?t ma tr?n.
Ki?m tra tính ??i x?ng c?a m?t ma tr?n vuông.
Tìm s? các xâu nh? phân ?? dài n.
Tìm s? nh? th? k trong m?t m?ng nguyên.
Tìm s? l?p ph??ng nh? nh?t l?n h?n ho?c b?ng n.
Tìm t?t c? các s? nguyên t? trong m?t m?ng.
Tìm s? t? do liên thông c?a m?t ?? th? không h??ng.
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
				int max = findMax(a, r, c, i, j); // g?i hàm ?? quy ?? tìm giá tr? l?n nh?t
				cout << "Phan tu lon nhat trong mang: " << max << endl;
			}
			else
				cout << "Vui long nhap mang" << endl;
			break;
		case 16:
			if (IN)
			{
				int min = findMin(a, r, c, i, j); // g?i hàm ?? quy ?? tìm giá tr? l?n nh?t
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
	if (i >= r) return; // duy?t h?t m?ng, thoát hàm
	if (j >= c) { // ??n c?t cu?i cùng c?a hàng hi?n t?i, chuy?n sang hàng ti?p theo
		Tang_hang(a, r, c, i + 1, 0);
		return;
	}
	for (int k = j + 1; k < c; k++) { // duy?t các ph?n t? còn l?i c?a hàng hi?n t?i
		if (a[i][j] > a[i][k]) { // n?u tìm th?y ph?n t? a[i][k] < a[i][j]
			swap(a[i][j], a[i][k]); // và hoán ??i hai ph?n t? này v?i nhau
		}
	}
	Tang_hang(a, r, c, i, j + 1); // ti?p t?c s?p x?p ph?n t? ti?p theo
}
void Tang_cot(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r) return; // duy?t h?t m?ng, thoát hàm
	if (j >= c) { // ??n c?t cu?i cùng c?a hàng hi?n t?i, chuy?n sang hàng ti?p theo
		Tang_cot(a, r, c, i + 1, 0);
		return;
	}
	for (int k = i + 1; k < r; k++) { // duy?t các ph?n t? còn l?i c?a hàng hi?n t?i
		if (a[i][j] > a[k][j]) { // n?u tìm th?y ph?n t? a[i][k] < a[i][j]
			swap(a[i][j], a[k][j]); // và hoán ??i hai ph?n t? này v?i nhau
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
	}// n?u hàng c?n xóa là hàng cu?i cùng
	for (int i = 0; i < c; ++i)
	{
		a[row][i] = a[row + 1][i]; // di chuy?n hàng ti?p theo lên hàng c?n xóa
	}
	row++;
	Xoa_dong(a, r, c, row); // ?? quy ?? xóa hàng ti?p theo
}
void Xoa_cot(int a[MAXR][MAXC], int r, int& c, int col) {
	if (col >= c - 1)
	{
		c--;
		return;
	}// n?u c?t c?n xóa là c?t cu?i cùng
	for (int i = 0; i < r; ++i)
	{
		a[i][col] = a[i][col + 1]; // di chuy?n c?t ti?p theo qua c?t c?n xóa
	}
	col++;
	Xoa_cot(a, r, c, col);
}

int findMax(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return a[0][0]; // giá tr? tr? v? m?c ??nh
	if (j >= c)
		return findMax(a, r, c, i + 1, 0); // xét hàng ti?p theo
	int current = a[i][j];
	int next = findMax(a, r, c, i, j + 1); // tìm giá tr? l?n nh?t ? c?t ti?p theo
	return current > next ? current : next; // so sánh giá tr? hi?n t?i và giá tr? ti?p theo
}
int findMin(int a[MAXR][MAXC], int r, int c, int i, int j)
{
	if (i >= r)
		return a[0][0]; // giá tr? tr? v? m?c ??nh
	if (j >= c)
		return findMax(a, r, c, i + 1, 0); // xét hàng ti?p theo
	int current = a[i][j];
	int next = findMax(a, r, c, i, j + 1); // tìm giá tr? l?n nh?t ? c?t ti?p theo
	return current < next ? current : next; // so sánh giá tr? hi?n t?i và giá tr? ti?p theo
}