// L403_133
// Сушков Дмитрий
#include <iostream>
#include "L402_132.h"
#include "L403_133.h"

// Пример использования
int main() {
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

    return 0;
}
