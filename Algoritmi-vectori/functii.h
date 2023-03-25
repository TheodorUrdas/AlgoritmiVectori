#pragma once
#include <iostream>
using namespace std;

void citire(int v[], int& n) {

	cout << "n=";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
}

void bubbleSort(int v[], int n) {
	bool semn = true;
	do {
		semn = true;
		for (int i = 0; i < n - 1; i++) {
			if (v[i] > v[i + 1]){

				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				semn = false;
			}
		}
	} while (semn == false);
}

void afisare(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}

bool prim(int n) {

	if (n == 1 || n == 0) {
		return false;
	}

	for (int k = 2; k <= n / 2; k++) {
		if (n % k == 0) {
			return false;
		}
	}

	return true;
}

void sortDescresc(int v[], int n) {
	bool semn = true;
	do {
		semn = true;
		for (int i = 0; i < n - 1; i++) {
			if (v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				semn = false;
			}
		}
	} while (semn == false);
}

int divizori(int n) {

	int div = 0;
	for (int k = 1; n >= k; k++) {
		if (n % k == 0) {
			div++;
		}
	}
	return div;
}

