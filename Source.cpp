#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if (((x + R) * (x + R) + (y + R) * (y + R) >= R * R &&
		x <= 0 && x >= -R && y <= 0 && y >= -R) ||
		((x - R) * (x - R) + y * y <= R * R && y >= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}
