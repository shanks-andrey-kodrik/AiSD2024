// L407_136
// Сушков Дмитрий
#include "L403_133.h"
#include "L402_132.h"
#include "L405_134.h"
#include "L407_136.h"
#include <iostream>

void make_heap(priority_queue *q, item_type s[], int n) 
{
    int i;
	q->n = n;
    for (i = 0; i < n; i++) 
        q->q[i + 1] = s[i];  
    for (i = q->n; i >= 1; i--) 
        bubble_down(q, i);
}
