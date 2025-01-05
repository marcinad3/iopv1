#include <iostream>

using namespace std;

long long int silnia(int n){
	long long int wyn = 1;
	for(int i = 1; i<=n;i++){
		wyn *=i;
	}
	return wyn;
}

int main(){
	int n;
	cin >> n;
	if (n < 0){
		cout << "podana liczba nie moze byc ujemna" << endl;
		return 0;
	}
	cout << silnia(n) << endl;
	return 0;
}
