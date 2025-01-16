// L408_137
// Сушков Дмитрий
#include "L403_133.h"
#include "L402_132.h"
#include "L408_137.h"

int heap_compare(priority_queue *q, int i, int count, int x)
	{
	if ((count <=0) || (i > q->n)) return (count);
	if (q->q[i] < x) {
		count = heap_compare(q, pq_young_child(i), count-1, x);
		count = heap_compare(q, pq_young_child(i)+1, count, x);	
	}
	return (count);
}