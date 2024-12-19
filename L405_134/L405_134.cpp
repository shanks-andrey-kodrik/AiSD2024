// L405_134
// Сушков Дмитрий
#include "L403_133.h"
#include "L402_132.h"
#include "L405_134.h"
#include <iostream>
item_type extract_min (priority_queue *q) 
{
 int min = -1; 
 if (q->n <= 0) std::cout << "Warning: empty priority queue.\n" << std::endl;
	else {
	min = q->q[1] ; 
	q->q[1] = q->q[q->n] ;
	q->n = q->n - 1; 
	bubble_down(q,1);
	}
	return(min);
} 
void bubble_down(priority_queue *q, int p)
 { 
	int c; 
	int i; 
	int min_index;  
	c = pq_young_child(p) ;
	min_index = p; 
	for (i=0; i<=1; i++) 
		if ((c+i) <= q->n) {
		 if (q->q[min_index] > q->q[c+i]) min_index = c+i;
		 } 
	if (min_index != p) {
	pq_swap(q,p,min_index); 
	bubble_down(q, min_index); 
	} 
}