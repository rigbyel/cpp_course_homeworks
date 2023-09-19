#include <iostream>
#include <math.h>

using namespace std;

int factorial(int n){
    if (n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n-1);
}


int read_number(){
    bool correct = false;
    string n_input;
    double n;

    while(!correct){
        cout << "Введите целое число от 0 до 100000: ";
        cin >> n_input;
        try
        {   
            n = stod(n_input);
            if (n > floor(n)){
                cout << "Вы ввели нецелое число\n";
            }
            else if (n < 0){
                cout << "Вы ввели отрицательное число\n";
            }
            else if (n > 100000){
                cout << "Вы ввели слишком большое число\n";
            }
            else {
                correct = true;
            }
        }
        catch(invalid_argument){
            cout << "Вы ввели строку\n";
        }
        catch(out_of_range){
            cout << "Вы ввели слишком большое число\n";
        }
    }
    return int(n);
}

int main(){
    int n;
    n = read_number();

    cout << factorial(n) << endl;

    return 0;
}