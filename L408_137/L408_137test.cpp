// L408_137
// Сушков Дмитрий
#include "L403_133.h"
#include "L402_132.h"
#include "L408_137.h"
#include <iostream>

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
	// Проверка работы функции
	int x; 
	std::cout << "Enter the 'x': ";
	std::cin >> x; 
    int count = q.n;
    int i = 1;
	int Count = heap_compare(&q, i, count, x);	
	std::cout << Count;
    return 0;
}
