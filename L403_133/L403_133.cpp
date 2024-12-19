// L403_133
// Сушков Дмитрий

#include <iostream>
#include "L402_132.h"
#include "L403_133.h"

void pq_swap(priority_queue *q, int i, int j) {
    std::swap(q->q[i], q->q[j]);
}

void pq_insert(priority_queue *q, item_type x) {
    if (q->n >= PQ_SIZE - 1) {
        std::cout << "Warning: priority queue overflow insert x=" << x << std::endl;
    } else {
        q->n = q->n + 1;
        q->q[q->n] = x;
        bubble_up(q, q->n);
    }
}

void bubble_up(priority_queue *q, int p) {
    if (pq_parent(p) < 0) return;
    if (q->q[pq_parent(p)] > q->q[p]) {
        pq_swap(q, p, pq_parent(p));
        bubble_up(q, pq_parent(p));
    }
}
void print_queue(const priority_queue &q) {
    std::cout << "Elements in priority queue: ";
    for (int i = 1; i <= q.n; i++) {
        std::cout << q.q[i] << " ";
    }
    std::cout << std::endl;
}
