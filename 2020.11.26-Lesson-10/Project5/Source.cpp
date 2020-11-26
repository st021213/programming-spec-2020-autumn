#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	short ss;
	long l;
	long long ll;

	cout << "long " << sizeof(long) << endl;
	l = 1 << 30;
	cout << l << endl;

	cout << "short " << sizeof(short) << endl;
	ss = l;
	cout << ss << endl;

	cout << "long long " << sizeof(long long) << endl;
	ll = ((long long)1) << 63 - 1;
	cout << ll << endl;

	double d;
	d = 5.32;
	ss = d;
	cout << "ss=" << ss << "\td=" << d << endl;
	d = 5 / 3;
	cout << d << endl;
	d = (double)5 / 3;
	cout << d << endl;
	d = 1.0 * 5 / 3;
	cout << d << endl;

	float f;
	f = 5 * 1.0f / 3;
	cout << f << endl;

	cout << setprecision(10) << f << endl;
	f = ll;
	cout << setprecision(10) << f << endl;
	cout << setprecision(10) << fixed << f << endl;

	d = 0.3;
	cout << fixed << setprecision(30) << d + d << endl;



	return 0;
}