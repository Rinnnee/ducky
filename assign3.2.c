#include <stdio.h>
#include <stdlib.h>
//mergesort
void mergeSort(int *array, int length);
void merge(int *leftArray, int *rightArray, int *array, int leftSize, int rightSize);

int main(void) {
    int array[] = {8, 2, 5, 3, 4, 7, 6, 1};
    int length = sizeof(array) / sizeof(array[0]);
    mergeSort(array, length);
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

void mergeSort(int *array, int length) {
    if (length <= 1) return; // base case
    int middle = length / 2;
    int leftArray[middle];
    int rightArray[length - middle];
    int i = 0, j = 0;
    for (; i < length; i++) {
        if (i < middle) {
            leftArray[i] = array[i];
        } 
        else {
            rightArray[j] = array[i];
            j++;
        }
    }
    mergeSort(leftArray, middle);
    mergeSort(rightArray, length - middle);
    merge(leftArray, rightArray, array, middle, length - middle);
}

void merge(int *leftArray, int *rightArray, int *array, int leftSize, int rightSize) {
    int i = 0, l = 0, r = 0;
    // check the conditions for merging
    while (l < leftSize && r < rightSize) {
        if (leftArray[l] < rightArray[r]) {
            array[i] = leftArray[l];
            i++;
            l++;
        } 
        else {
            array[i] = rightArray[r];
            i++;
            r++;
        }
    }
    while (l < leftSize) {
        array[i] = leftArray[l];
        i++;
        l++;
    }
    while (r < rightSize) {
        array[i] = rightArray[r];
        i++;
        r++;
    }
}
