#include <stdio.h>
#define SIZE 5
int top = -1,top2=-1;
int stack[SIZE];
int queue[SIZE];
void push() {
    if (top >= SIZE - 1) {
        printf("Error: Stack Overflow\n");
        return;
    }
    
    printf("Enter an element you want to push: ");
    int data;
    scanf("%d", &data);
    top++;
    stack[top] = data;
}


void add(){
    top2=0;
    for (int i = 0; i <SIZE; i++)
    {
        queue[i] = stack[SIZE-1-i];
    }
        
}

void dequeue(){
    if (top==-1)
    {
        printf("Queue is empty");
    }
    top2++;
}


void displayQueue(){
    for (int i = top2; i <=top; i++)
    {
        printf("\n%d ",queue[i]);
    }
    
}

int main() {
    while (top < SIZE - 1) {
        push();

    }

    for (int i = 0; i <= top; i++) {
        printf("\nElement in stack at position %d is: %d", i + 1, stack[i]);
    }
   add();
   displayQueue();
   dequeue();
   printf("\nsafter dequeue");
   displayQueue();
    return 0;
}
