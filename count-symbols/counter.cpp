#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<wchar_t, int> count_symbols(wstring& text) {
    map<wchar_t, int> counter_map;
    wchar_t symbol;

    for (int i = 0; i < text.size(); i++) {
        symbol = text[i];
        if (1040<=static_cast<unsigned>(symbol) && static_cast<unsigned>(symbol)<=1103)
            if (counter_map.count(text[i])) {
                counter_map[text[i]] += 1;
            }
            else {
                counter_map[text[i]] = 1;
            }
    }

    return counter_map;
}

wstring read_text(const string filepath) {
    std::wifstream file(filepath, std::ios::binary);

    file.imbue(std::locale(""));


    std::wstring fileContent;
    std::wstring line;
    while (std::getline(file, line)) {
        fileContent += line + L"\n";
    }

    file.close();
    return fileContent;
}


int count_symbols(const string filePath) {
   
    wstring text = read_text(filePath);

    map<wchar_t, int> counter;

    counter = count_symbols(text);


    // Копируем элементы словаря в вектор пар ключ-значение
    std::vector<std::pair<wchar_t, int>> myVector(counter.begin(), counter.end());

    // Сортируем вектор по значениям
    std::sort(myVector.begin(), myVector.end(), [](const auto& lhs, const auto& rhs) {
        return lhs.second > rhs.second;
        });

    int i = 1;
    for (const auto& pair : myVector) {
        if (i > 10) {
            break;
        }
        std::wcout << pair.first << ": " << pair.second << "\n";
        i++;
    }

    return 0;
}

int main() {

    setlocale(LC_ALL, "Russian");
    cout << "Том 1" << endl;
    count_symbols("v1.txt");
    cout << endl;
    cout << "Том 2" << endl;
    count_symbols("v2.txt");
    cout << endl;
    cout << "Том 3" << endl;
    count_symbols("v3.txt");
    cout << endl;
    cout << "Том 4" << endl;
    count_symbols("v4.txt");

}