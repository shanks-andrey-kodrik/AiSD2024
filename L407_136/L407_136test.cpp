// L407_136
// Сушков Дмитрий
#include "L403_133.h"
#include "L402_132.h"
#include "L405_134.h"
#include "L407_136.h"
#include <iostream>
// Пример испльзования
int main() {
    priority_queue q;
    item_type s[] = {7, 2, 4, 5, 3};  // Пример
    int n = sizeof(s) / sizeof(s[0]);
    // Выводим исходный массив
    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << s[i] << " ";  
    }
    std::cout << std::endl;
	// Создаем пирамиду и выводим ее
    make_heap(&q, s, n);
    print_queue(&q);

    return 0;
}
