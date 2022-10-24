#ifndef SelectionSort_H_INCLUDED
#define SelectionSort_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

class SelectionSort
{
    private:
        int *xp, *yp, n, tam;
        int vet[];

    public:
        void swap(int *xp, int *yp);
        void selectionsort(int vet[], int n);
        void printArray(int vet[], int tam);
};

#endif SelectionSort_H_INCLUDED