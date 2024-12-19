// L402_132
// Сушков Дмитрий

#include <iostream>
#include "L402_132.h"

// Пример использования
int main() {
    int index; 
    std::cout << "Enter the index: ";
    std::cin >> index; 

    int parent = pq_parent(index);
    int youngChild = pq_young_child(index);

    std::cout << "Parent index " << index << ": " << parent << std::endl;
    std::cout << "Child index " << index << ": " << youngChild << std::endl;

    return 0;
}


