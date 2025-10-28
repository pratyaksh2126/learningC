#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int val) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if(rear == NULL) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void dequeue() {
    if(front == NULL) {
        printf("Queue Underflow\n");
        return;
    }
    struct Node* temp = front;
    printf("Dequeued element: %d\n", front->data);
    front = front->next;
    if(front == NULL) rear = NULL;
    free(temp);
}

void display() {
    struct Node* temp = front;
    if(temp == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements:\n");
    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    enqueue(10); enqueue(20); enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
