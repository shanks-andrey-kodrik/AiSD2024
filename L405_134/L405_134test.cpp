// L405_134
// Сушков Дмитрий
#include "L403_133.h"
#include "L402_132.h"
#include "L405_134.h"
#include <iostream>
// Пример испльзования

int main() {
// Создаем кучу
    priority_queue q;
    q.n = 0;
    int n;
    std::cout << "Number elements: ";
    std::cin >> n;
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        int value;
        std::cin >> value;
        pq_insert(&q, value);
    }

    print_queue(q);

// Извлекаем минимальный элемент 
    if (q.n > 0) {
        int min_val = extract_min(&q); 
        std::cout << "\nExtracted minimum element: " << min_val << std::endl;
        std::cout << "Queue after extraction: ";
        print_queue(q);
    } else {
        std::cout << "The queue is empty" << std::endl;
    }

    return 0;
}