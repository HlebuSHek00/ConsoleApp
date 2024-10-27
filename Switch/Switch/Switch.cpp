

#include <iostream>
using namespace std;

int kb_to_bytes(int kb) {
    return kb * 1024;
}
int bytes_to_kb(int bytes) {
    return bytes / 1024;
}
int main()
{
    system("chcp 1251>nul");
    int choice;
    int input;
    
   cout << "Выберите действие:\n";
    cout << "1. Перевести из килобайтов в байты\n";
    cout << "2. Перевести из байтов в килобайты\n";
   cin >> choice;

    switch (choice) {
    case 1:
        cout << "Введите количество килобайтов: ";
        cin >> input;
       cout << "Результат: " << kb_to_bytes(input) << " байт\n";
        break;
    case 2:
       cout << "Введите количество байтов: ";
        cin >> input;
        cout << "Результат: " << bytes_to_kb(input) << " килобайт\n";
        break;
    default:
        cout << "Неверный выбор\n";
    }

    return 0;
}
