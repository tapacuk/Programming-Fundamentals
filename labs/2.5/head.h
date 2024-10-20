#pragma once

struct FirstList {
    double data = 0;
    FirstList* next = nullptr;

    // äîäàâàííÿ íîâîãî åëåìåíòà â ë³ñò
    void push(int element) {
        FirstList* processingElement = this;
        
        // ïğîõ³ä äî ê³íöÿ ë³ñòà (ïğàöşº ïîêè íå çíàéäå îñòàíí³é åëåìåíò)
        while (processingElement->next != nullptr) {
            processingElement = processingElement->next;
        }

        FirstList* temp = new FirstList;
        temp->data = element;
        processingElement->next = temp;  // äîäàâàííÿ íîâîãî åëåìåíòó äî ë³ñòà
    }
}

// ïåğåâ³ğêà ÷è íå º çíà÷åííÿ íóëåì
inline bool isNonZero(FirstList* list) {
    return list->data != 0;
}
