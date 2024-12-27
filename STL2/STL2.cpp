// STL2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>


class Person {
public:
    std::string name;
    int age;
    
    // Добавляем конструктор по умолчанию
    Person() : name(""), age(0) {}
    Person(std::string n, int a) : name(n), age(a) {}
    // Конструктор копирования для глубокого копирования
    Person(const Person& other) : name(other.name), age(other.age) {}
 
};

int main()
{
        // Пример 1: "Глубокое" копирование с помощью copy
    std::vector<Person> source_persons = {
        Person("Иван", 25),
        Person("Мария", 30)
    };
    std::vector<Person> dest_persons(2);
    
    std::copy(source_persons.begin(), source_persons.end(), dest_persons.begin());
    
    // Пример 2: copy для unordered_map
    std::unordered_map<std::string, int> source_map = {
        {"один", 1},
        {"два", 2},
        {"три", 3}
    };
    std::vector<std::pair<std::string, int>> dest_vector(source_map.size());
    
    std::copy(source_map.begin(), source_map.end(), dest_vector.begin());
    
    // Пример 3: fill для заполнения массива
    std::vector<int> numbers(5);
    std::fill(numbers.begin(), numbers.end(), 42);

    // Вывод результатов
    std::cout << "Результат глубокого копирования:\n";
    for (const auto& person : dest_persons) {
        std::cout << person.name << ": " << person.age << "\n";
    }

    std::cout << "\nРезультат копирования map:\n";
    for (const auto& pair : dest_vector) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    std::cout << "\nРезультат заполнения массива:\n";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
