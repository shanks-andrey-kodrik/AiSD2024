#include <iostream>
using namespace std;
struct ItemType {
    int value;
};
struct List {
    ItemType item;
    List* next;
};

void insert_list(List** l, ItemType x) {
    List* p = new List;
    p->item = x;
    p->next = *l;      
    *l = p;            
}

void print_list(List* l) {
    while (l != nullptr) {
        cout << l->item.value << " ";
        l = l->next;
    }
    cout << endl;
}

int main() {
    List* listt = NULL;
    ItemType i1 = { 1 }, i2 = { 2 }, i3 = { 3 };
    insert_list(&listt, i1);
    insert_list(&listt, i2);
    insert_list(&listt, i3);
    print_list(listt);
    return 0;
}
