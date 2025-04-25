#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert more elements.\n");
    } else {
        if (front == -1) front = 0;
        queue[++rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
    } else {
        printf("Dequeued: %d\n", queue[front++]);
    }
}
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}


void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main(){

    int n, value, key;
    printf("Number of elements to be inserted (max %d)? ", MAX);
    scanf("%d", &n);

    if (n > MAX) {
        printf("Cannot insert more than %d elements.\n", MAX);
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        enqueue(value);
    }

   
    while (1) {
        printf("\n QUEUE MENU \n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. PEEK \n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("Enter your key: ");
        scanf("%d", &key);
    

    switch(key){
        case 1:
        printf("Enter value to enqueue: ");
        scanf("%d", &value);
        enqueue(value);
        break;
        case 2:
        dequeue();
        break;
        case 3:
        peek();
        break;
        case 4:
        display();
        break;
        case 5:
        printf("Exiting Program.\n");
        exit(0);
        default:
            printf("Invalid key!\n");
    }
}
    return 0;
}
