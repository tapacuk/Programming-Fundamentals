/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 2.5
 * Variant: 5
 */
#include <iostream>
#include "head.h"
#include <stdlib.h>

 // структура аналогічна тієї що в файлі head.h
struct SecondList {
    double data = 0;
    SecondList* next = nullptr;

    void push(double element) {
        SecondList* temp = new SecondList;
        temp->data = element;  

        SecondList* processingElement = this;

        while (processingElement->next != nullptr) {
            processingElement = processingElement->next;
        }

        processingElement->next = temp;
    }
};

void initList(FirstList* list);
void makeSecondList(FirstList* list, SecondList* newList);

int main() {
    
    FirstList* sampleList1 = new FirstList;
    // позначення першого елементу та пуш елементів в кінець ліста
    sampleList1->data = 1;
    sampleList1->push(7);
    sampleList1->push(-12);
    sampleList1->push(-42);
    sampleList1->push(98);
    sampleList1->push(22);

    // заповнюємо другий ліст на основі першого
    SecondList* sampleList2 = new SecondList;
    makeSecondList(sampleList1, sampleList2);

}

void initList(FirstList* list) {
    for (int i = 0; i < 7; i++) {
        int randInt = rand() % 200;

        // присвоєння першому елементу рандомного значення без пушу 
        if (i == 0) {
            list->data = randInt;
            continue;
        }

        list->push(randInt);
    }
}


void makeSecondList(FirstList* list, SecondList* newList) {
    FirstList* processingElement = list;
    bool isInited = false;  // перевірка на ініціалізацію першого елементу

    while (processingElement != nullptr) {
        if (isNonZero(processingElement) && processingElement->data < 0) {
            // якщо це перший елемент нового ліста то присвоюємо значення першого елементу без пушу (так само як з першим лістом)
            if (!isInited) {
                newList->data = processingElement->data;
                processingElement = processingElement->next;
                isInited = true;  // позначення що ініціалізація відбулась
                continue;
            }
            newList->push(processingElement->data);
        }
        processingElement = processingElement->next;
    }
}
