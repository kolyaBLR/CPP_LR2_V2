#include "Array.h"

Array::Array() {

}

Array::Array(const Array& object) {
    this->array1 = object.array1;
    this->n1 = object.n1;

    this->array2 = object.array2;
    this->n2 = object.n2;
}

Array::Array(int* array1, int n1, int* array2, int n2) {
    this->array1 = array1;
    this->n1 = n1;

    this->array2 = array2;
    this->n2 = n2;
}

Array::~Array() {
    delete[] array1;
    delete[] array2;
}

int* Array::intersection() {
    int *result = new int[n1];
    intersectionSize = 0;
    for (int i = 0; i < n1; i++) {
        if (array1[i] == array2[i]) {
            result[intersectionSize++] = array1[i];
        }
    }
    return result;
}

int Array::getIntersectionSize() {
    return this->intersectionSize;
}

int* Array::association() {
    int *result = new int[n1 + n2];
    associationSize = 0;
    for (int i = 0; i < n1; i++, associationSize++) {
        result[associationSize] = array1[i];
    }
    for (int i = 0; i < n2; i++, associationSize++) {
        result[associationSize] = array2[i];
    }
    return result;
}

int Array::getAssociationSize() {
    return this->associationSize;
}