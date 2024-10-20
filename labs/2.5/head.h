#pragma once

struct FirstList {
    double data = 0;
    FirstList* next = nullptr;

    // додавання нового елемента в ліст
    void push(int element) {
        FirstList* processingElement = this;
        
        // прохід до кінця ліста (працює поки не знайде останній елемент)
        while (processingElement->next != nullptr) {
            processingElement = processingElement->next;
        }

        FirstList* temp = new FirstList;
        temp->data = element;
        processingElement->next = temp;  // додавання нового елементу до ліста
    }
}

// перевірка чи не є значення нулем
inline bool isNonZero(FirstList* list) {
    return list->data != 0;
}
