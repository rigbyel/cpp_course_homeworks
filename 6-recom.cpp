#include <iostream>
#include <map>
#include <stdlib.h>
#include <math.h>
// #include <windows.h>

using namespace std;

int *index(string date) {
    int sum = 0;
    for (int i = 0; i < date.size(); i++) {
        if (date[i] != 46) {
            sum += (int(date[i]) - 48);
        }
    }

    int power = int(date[3]) + int(date[4]) - 96;      
    int i = rand() % 3;
    int random[3]{ 0, 11111111, 22222222 };
    sum = pow(sum, power/2) + random[i];
    static int index[5];
    index[0] = (sum) & 0b00001101;
    index[1] = (sum >> 4) & 0b00001101;
    index[2] = (sum >> 8) & 0b00001101;
    index[3] = (sum >> 12) & 0b00001101;
    index[4] = (sum >> 16) & 0b00001101;

    return index;
}


int main() {
   // SetConsoleCP(1251);
   // SetConsoleOutputCP(1251);
   // setlocale(LC_ALL, "russian");

    string name, date;
    string song[]{"Master of puppets Metallica", "Брошу Pyrokinesis", "Homebody PH1","Червяк Даргомыжский","Russian Ebunny","Enemy Imagine dragons"," Зизазай Огги и тараканы","Valentine Justice","Swimming pools Kendrick Lamar","Night Call Kovinsky","Yesterday The Beatles","Так закалялась сталь Гражданская оборона","За деньги да Инстасамка","Bad habits Ed sheeran" };
    string movie[]{"Короткое замыкание", "Трансформеры", "Полночь", "По соображениям совести","Джентльмены","Ван Хельсинк","Операция Ы","Драйв","Большая игра","Игра в имитацию","Всё везде и сразу","Форрест Гамп","Терминал","Не смотрите наверх"};
    string actor[]{"Райан Гослинг", "Кристиан Бейл", "Джеки Чан","Эндрю Гарфилд","Леонардо ДиКаприо","Бенедикт Кембербетч","Мэтью Макконахи","Дэвид Линч","Дэниэлл Рэдклифф","Джейк Джиллехолл","Александр Петров","Рональд Рейган","Том Круз","Брэд Питт"};
    string actress[]{"Наталия Крачковская", "Меган Фокс", "Джениффер Лопез","Эмма Стоун","Эмма Уотсон","Кира Найтли","Милла Йовович","Марго Робби","Мерил Стрип","Скарлет Йоханссон","Александра Бортич","Анджелина Джоли","Шарлиз Терон","Ингеборга Дапкунайте"};
    string celeb[]{"Дейв Майнстейн", "Иван Зола", "Сергей Мавроди", "Екатерина Гордеева", "Роберт Опенгеймер", "Лионель Месси", "Папич", "Хидэо Кодзима", "Ляйсан Утяшева","Павел Воля","Криштиану Роналду","Борис Бурда","Ким Кардашьян","Клава Кока"};


    while (true){
        cout << "Введите имя: \n";
        cin >> name;
        if (name[0] == '0'){
            return 0;   // завершение программы при вводе нуля вместо имени
        }
        cout << endl;
        cout << "Введите дату рождения: \n";
        cin >> date;
        cout << "Здравствуйте, " << name << endl;

        int *ind = index(date);
        cout << "Ваша песня сегодня: "<< song[ind[0]] << endl;
        cout << "Фильм: "<< movie[ind[1]] << endl;
        cout << "Актер: " << actor[ind[2]] << endl;
        cout << "Актриса: " << actress[ind[3]] << endl;
        cout << "Знаменитость: " << celeb[ind[4]] << endl;
    }
    return 0;
}
