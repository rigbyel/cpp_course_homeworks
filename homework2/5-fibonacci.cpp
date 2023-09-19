#include <iostream>
#include <math.h>

using namespace std;

int fibonacci(int n){
    int grandparent = 0;
    int parent = 1;
    int temp;

    if (n == 1){
        return parent;
    }

    for (int i = 1; i < n; i++){
        temp = parent + grandparent;
        grandparent = parent;
        parent = temp;
    }

    return parent;
}

int read_number(){
    bool correct = false;
    string n_input;
    double n;

    while(!correct){
        cout << "Введите целое число от 1 до 100: ";
        cin >> n_input;
        try
        {   
            n = stod(n_input);
            if (n > floor(n)){
                cout << "Вы ввели нецелое число\n";
            }
            else if (n < 1){
                cout << "Число меньше 1.\n";
            }
            else if (n > 100){
                cout << "Число больше 100\n";
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

    for (int i = 1; i <= n; i++){
        cout << fibonacci(i) << " ";
    }
    
    cout << endl;

    return 0;
}