#include <iostream>

using namespace std;

void print_word(char word[], int size){
    for (int i = 0; i < size; i++){
        cout << word[i];
    }
    cout << endl;
}

void guess_letter(char letter, string key_word, char current_word[], int *x_letters){
    bool guess = false;
    for (int i = 0; i < key_word.size(); i++){
        if (letter == key_word[i]){
            current_word[i] = letter;
            guess = true;
            *x_letters -= 1;
        }
    }
    print_word(current_word, key_word.size());
    if (guess){
        cout << "Угадали." << endl;
    }
    else {
        cout << "Нет такой буквы." << endl;
    }
}

int main(){
    string key_word;
    cout << "Введите слово: ";
    cin >> key_word;
    cout << endl;

    int size = key_word.size();

    char *current_word = new char[size];
    for (int i = 0; i < size; i++){
        current_word[i] = 45;   // 45 соответствует символу "-" в ASCII
    }

    char letter;
    while (size != 0)
    {
        cout << "Ведите букву: ";
        cin >> letter;
        guess_letter(letter, key_word, current_word, &size);
    }
    cout << "Вы угадали слово — " << key_word << "! Поздравляю!\n";

    return 0;
}