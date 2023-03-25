#pragma once
#include <iostream>
using namespace std;
#include "functii.h"
#include "algoritmi.h"


//Să se ordoneze crescător elementele vectorului.
void pb1() {
	
	int v[1000], n;
	citire(v, n);
	bubbleSort(v, n);
	afisare(v, n);
}


//Se dă un vector cu n elemente, numere naturale. Afișați în ordine crescătoare valorile prime din acest vector.
void pb2() {
	int v[1000], n;
	citire(v, n);
	bubbleSort(v, n);
	
	for (int i = 0; i < n; i++) {
		bool nrPrim = prim(v[i]);
		if (nrPrim == true) {
			cout << v[i] << " ";
		}
	}
}

//Se dă un vector cu n elemente, numere naturale.Afișați în ordine descrescătoare valorile divizibile cu 10 din acest vector.
void pb3() {

	int v[1000], n;
	citire(v, n);
	sortDescresc(v, n);

	for (int i = 0; i < n; i++) {
		if (v[i] % 10 == 0) {
			cout << v[i] << " ";
		}
	}
}

void pb4() {

	int v[1000], n, p = 2;
	citire(v, n);
	stergere(v, n, p);
	afisare(v, n);
}

