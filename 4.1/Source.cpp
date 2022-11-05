#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int l, N, i;
	double S;
	cout << "k = "; cin >> l;
	cout << "N = "; cin >> N;
	S = 0;
	i = l;
	while (i <= N)
	{
		S += sqrt(1 +cos*cos*sin(1.*i)/(1 + sin*sin*cos(1.*i)));
		i++;
	}
	cout << S << endl;
		S = 0;
	i = l;
	do {
		S += sqrt(1 + cos * cos * sin(1. * i) / 1 + sin * sin * cos(1. * i));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = l; i <= N; i++)
	{
		S += sqrt(1 + cos * cos * sin(1. * i) / 1 + sin * sin * cos(1. * i));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= l; i--)
	{
		S += sqrt(1 + cos * cos * sin(1. * i) / 1 + sin * sin * cos(1. * i));
	}
	cout << S << endl;
	return 0;
}