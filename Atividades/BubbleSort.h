#ifndef BubbleSort_H_INCLUDED
#define BubbleSort_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

class BubbleSort
{
    private:
        int n;
        int tam;
        int vet[];

    public:
        void bubblesort(int vet[], int n);
        void printArray(int vet[], int tam);
};

#endif BubbleSort_H_INCLUDED