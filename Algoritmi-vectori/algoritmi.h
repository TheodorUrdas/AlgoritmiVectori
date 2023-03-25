#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int v[], int& n) {
	
	ifstream f("numere.txt");

	f >> n;
	for (int i = 0; i < n; i++) {

		f >> v[i];
	}

	
}

void citire2(int v[], int& n) {

	cout << "n=";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
}

void afisare(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

}

void sortareSelectie(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}								
	}

}

void bubblesort(int v[], int d) {
	bool semn = true;
	do {
		semn = true;
		for (int i = 0; i < d - 1; i++) {
			if (v[i] > v[i+1]) {
				int aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
				semn = false;
			}
		}
	} while (semn == false);
}	

int binarySearch(int v[], int d, int  key) {


	bubblesort(v, d);


	int a = 0;
	int b = d - 1;

	while (a<= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {
			return mj;
		}

		if (v[mj]< key) {
			
			a = mj + 1;
		}
		if (v[mj] > key) {

			b= mj - 1;
		}
		

	}

	return -1;
}

void stergere(int v[], int&d, int p) {

	for (int i = p; i < d; i++) {
		v[i] = v[i + 1];
	}
	d--;
}
void inserare(int v[], int& d, int p,int nou) {

	for (int i = d-1; i>=p; i--) {
		v[i + 1] = v[i];
	}
	d++;
	v[p] = nou;
}


					