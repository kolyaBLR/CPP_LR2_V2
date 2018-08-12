class Array {

    private:
        int *array1, *array2;
        int n1, n2;
        int intersectionSize, associationSize;

    public:
        Array();//конструктор по умолчанию
        Array(const Array& object);//конструктор копирования 
        Array(int* array1, int n1, int* array2, int n2);//конструктор с параметрами
        ~Array();//деструктор
        int* intersection();//пересечение
        int getIntersectionSize();
        int* association();//объединение
        int getAssociationSize();
};