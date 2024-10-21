#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double i = 0;
	double k;
	int N;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	S = 0;
	k = N;
	while (k <= 19)
	{
		S += (((k - N) / (k + N)) + 1);
		k++;
	}
	cout << S << endl;
	S = 0;
	k = N;
	do {
		S += (((k - N) / (k + N)) + 1);
		k++;
	} 
	while (k <= 19);
	cout << S << endl;
	S = 0;
	for (k = N; k <= 19; k++)
	{
		S += (((k - N) / (k + N)) + 1);
	}
	cout << S << endl;
	S = 0;
	for (k = 19; k >= N; k--)
	{
		S += (((k - N) / (k + N)) + 1);
	}
	cout << S << endl;
	return 0;
}





