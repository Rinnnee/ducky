#include <stdio.h>
//insertion sort
int main(){
    int a[] = {6, 5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    int i=0, j=0, key=0;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
    }
    return 0;
}