// L407_136
// Сушков Дмитрий
#include "L403_133.h"
#include "L402_132.h"
#include "L405_134.h"
#include "L407_136.h"
#include <iostream>
#include <vector>

int main() {
    int n;

    // Запрашиваем размер массива у пользователя
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    // Создаем массив нужного размера
    std::vector<item_type> s(n);

    // Запрашиваем элементы массива
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    // Выводим исходный массив
    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << s[i] << " ";
    }
    std::cout << std::endl;

    // Создаем пирамиду и выводим ее
    priority_queue q;
    make_heap(&q, s.data(), n); 
    print_queue(&q);

    return 0;
}