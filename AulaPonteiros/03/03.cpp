// 03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

template<typename T>
void escrever(T algo)
{
	cout << algo << endl;
}

void pegar_valor(int* valor_um, int *valor_dois)
{
	int aux;

	aux = valor_um;
}

int main()
{
	int valor_um = 6,
		valor_dois = 1;

	int *ponteiro_um, *ponteiro_dois;

	ponteiro_um = &valor_um;
	ponteiro_dois = &valor_dois;

	pegar_valor(ponteiro_um, ponteiro_dois);

	cin.get();
    return 0;
}

