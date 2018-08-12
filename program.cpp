#include "Array.h"
#include <random>

void print(int* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int* randomArray(int n) {
    int* result = new int[n];
    for (int i = 0; i < n; i++) {
        result[i] = rand() % 10;
    }
    return result;
}

int main(int argc, char const *argv[]) {
    int *array1, *array2, n1, n2;
    printf("set size for first array:");
    scanf("%d", &n1);
    printf("set size for second array:");
    scanf("%d", &n2);
    array1 = randomArray(n1);
    array2 = randomArray(n2);
    Array *object = new Array(array1, n1, array2, n2);
    print(array1, n1);
    print(array2, n2);
    print(object->intersection(), object->getIntersectionSize());
    print(object->association(), object->getAssociationSize());
    return 0;
}
