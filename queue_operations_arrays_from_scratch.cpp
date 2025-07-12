#include <iostream>
#define SIZE 5

class Queue {
private:
    int q_array[SIZE], front, rear;

public:
    // Constructor
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is full
    bool is_full() {
        return rear == SIZE - 1;
    }

    // Check if queue is empty
    bool is_empty() {
        return front == -1 && rear == -1;
    }

    // Add item
    void enqueue(int item) {
        if (is_full()) {
            std::cout << "Queue is full, can't add items\n";
        } else {
            if (front == -1) front = 0;
            rear++;
            q_array[rear] = item;
            std::cout << "Item added: " << item << "\n";
        }
    }

    // Remove item
    void dequeue() {
        if (is_empty()) {
            std::cout << "Queue is empty!!\n";
        } else {
            int element = q_array[front];
            std::cout << "Deleted -> " << element << "\n";
            if (front == rear) {
                front = rear = -1;
            } else {
                front++;
            }
        }
    }

    // Display queue
    void display() {
        if (is_empty()) {
            std::cout << "Queue is empty!!!\n";
        } else {
            std::cout << "Front index -> " << front << "\n";
            std::cout << "Items: ";
            for (int i = front; i <= rear; i++)
                std::cout << q_array[i] << " ";
            std::cout << "\nRear index -> " << rear << "\n";
        }
    }
};

int main() {
    Queue q;

    // Test dequeue on empty
    q.dequeue();

    // Fill the queue
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    // Try enqueue when full
    q.enqueue(6);

    // Display full queue
    q.display();

    // Dequeue and display again
    q.dequeue();
    q.display();

    return 0;
}
