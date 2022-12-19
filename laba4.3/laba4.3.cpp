#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	// ������� ����������
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	// ʳ���� ����������

	x = xp;
	while (x <= xk) // ����
	{
		if (x < 1 && c != 0)
			F = a * pow(x, 2) + (b / c);
		if (x > 1.5 && c == 0)
			F = ((x - a) / pow((x - c), 2));
		if (!(x < 1 && c != 0) && !(x > 1.5 && c == 0))
			F = (pow(x, 2)) / (pow(c, 2));

		// �� ������� ����������
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << F
			<< " |" << endl;
		// �� ����� ����������

		x += dx;
	}

	// �� ������� ����������
	cout << "---------------------------" << endl;
	// �� ����� ����������

	return 0;
}