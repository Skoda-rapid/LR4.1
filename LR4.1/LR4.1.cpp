#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int k, N, i;
	double S;
	k = 20;
	 
	cout << "N= ";
	cin >> N;

	S = 0;
	i = N;
	while(i<=k) {
	
		S += (cos(1. * i) + sin(1. * i)) / 1 + cos(1. * i) * sin(1. * i);
		i++;
	}
	
	cout << "1) S= " << S << endl;

	S = 0;
	i = N;

	do {
		S += (cos(1. * i) + sin(1. * i)) / 1 + cos(1. * i) * sin(1. * i);
		i++;
	} while (i <= k);
	
	cout << "2) S= " << S << endl;

	S = 0;
	for (i = N; i <= k; i++) {
		S += (cos(1. * i) + sin(1. * i)) / 1 + cos(1. * i) * sin(1. * i);
	}

	cout << "3) S= " << S << endl;

	for (i = k; i <= N; i--) {
		S += (cos(1. * i) + sin(1. * i)) / 1 + cos(1. * i) * sin(1. * i);
	}

	cout << "4) S= " << S << endl;
	system("pause");

}