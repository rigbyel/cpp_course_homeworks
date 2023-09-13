#include <iostream>
using namespace std;


template <typename T>
// функция для вывода значений массива 
void print_array(T arr, int size,  string text){
    cout << text;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
   
    // фиксированные массивы 
    // первый способ
    int array1[5];
    array1[0] = 1;
    array1[1] = 2;
    array1[2] = 3;
    array1[3] = 4;
    array1[4] = 5;

    // второй способ
    int array2[5] = { 1, 2, 3, 4, 5 };

    // третий способ(uniform-инициализация)
    int array3[5] { 1, 2, 3, 4, 5 };

    // четвертый способ
    int array4[] = { 1, 2, 3, 4, 5 };

    // пятый способ
    enum Indices
    {
        FIRST,
        SECOND,
        THIRD,
        FOURTH,
        FIFTH,
        TOTAL
    };
    int array5[TOTAL];
    array5[FIRST] = 1;
    array5[SECOND] = 2;
    array5[THIRD] = 3;
    array5[FOURTH] = 4;
    array5[FIFTH] = 5;

    // шестой способ
    const int array6[] = { 1, 2, 3, 4, 5 };

    // динамические массивы
    // седьмой способ
    int *array7 = new int[5] { 1, 2, 3, 4, 5 };

    // восьмой способ
    cout << "Введите длину массива: ";
    int length;
    cin >> length;
    int *array8 = new int[length];

    // проверка
    print_array(array1, 5, "Первый способ: ");
    print_array(array2, 5, "Второй способ: ");
    print_array(array3, 5, "Третий способ: ");
    print_array(array4, 5, "Четвертый способ: ");
    print_array(array5, 5, "Пятый способ: ");
    print_array(array6, 5, "Шестой способ: ");
    print_array(array7, 5, "Седьмой способ: ");
    print_array(array8, length, "Восьмой способ: ");

    return 0;
}