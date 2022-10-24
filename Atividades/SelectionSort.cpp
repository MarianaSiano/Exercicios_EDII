#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionsort(int vet[], int n)
{
    int min_idx;

    for(int i = 0; i < n - 1; i++) {
        min_idx = i;
        for(int j = i + 1; j < n; j++) {
            if(vet[j] < vet[min_idx]) {
                min_idx = j;
            }
        }

        if(min_idx != i) {
            swap(&vet[min_idx], &vet[i]);
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