#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	int N, i;
	double P, S;

	i = N;
	S = 0;
	while (i <= 16)
	{
		;
		i++;
	}
	cout << S << endl;
	i = N;
	S = 0;
	do {
		S *= (i * N) / (pow(i, 2)) + (pow(N, 2));
		i++;
	} while (i <= 16);
	cout << S << endl;
	S = 0;
	for (i = N; i >= 1; i--)
	{
		S *= (i * N) / (pow(i, 2)) + (pow(N, 2));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i <= 1; i--)
	{
		S *= (i * N) / (pow(i, 2)) + (pow(N, 2));
	}
	cout << S << endl;
	return 0;
}

