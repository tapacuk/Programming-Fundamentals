#pragma once

struct FirstList {
    double data = 0;
    FirstList* next = nullptr;

    // ��������� ������ �������� � ���
    void push(int element) {
        FirstList* processingElement = this;
        
        // ������ �� ���� ���� (������ ���� �� ������ ������� �������)
        while (processingElement->next != nullptr) {
            processingElement = processingElement->next;
        }

        FirstList* temp = new FirstList;
        temp->data = element;
        processingElement->next = temp;  // ��������� ������ �������� �� ����
    }
}

// �������� �� �� � �������� �����
inline bool isNonZero(FirstList* list) {
    return list->data != 0;
}
