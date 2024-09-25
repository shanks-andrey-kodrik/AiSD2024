#include <iostream>
using namespace std;
struct List {
    int value;
    List* next;
};

void insert_list(List** l, int x) {
    List* p = new List;
    p->value = x;
    p->next = *l;      
    *l = p;            
}

void print_list(List* l) {
    while (l != NULL) {
        cout << l->value << " ";
        l = l->next;
    }
    cout << endl;
}

int main() {
    List* listt = NULL;
    /*
    //T1 - ожидаем список 3 2 1
    insert_list(&listt, 1);
    insert_list(&listt, 2);
    insert_list(&listt, 3);
    print_list(listt);
    */
    
    /*
    //T2 - ожидаем пустую строку
    print_list(listt);
    */
    
    /*
    //T3 - проверка порядка вставки
    for (int i = 0; i < 5; i++){
        insert_list(&listt, i);
    }
    print_list(listt);
    */
    return 0;
    
}