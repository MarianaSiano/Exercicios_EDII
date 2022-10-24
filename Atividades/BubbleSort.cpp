#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

void bubblesort(int vet[], int n)
{
    int i, j;
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(vet[j] > vet[j + 1]) {
                swap(vet[j], vet[j + 1]);
            }
        }
    }
}

void printArray(int vet[], int tam)
{
    for(int i = 0; i < tam; i++) {
        cout << vet[i] << endl;
    }

    cout << endl;
}