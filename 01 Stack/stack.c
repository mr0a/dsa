/*
    Date: 15/05/2022
    Implementation of Stack Data Structure with Array
    Optional :
        * Donot use if else conditions

*/

#include <stdio.h>

int main()
{

    int size = 10;
    int stack[size];
    int top = 0;

    int isEmpty()
    {
        return !(top && 1);
        // or return top == 0;
    }
    int isFull()
    {

        return top == size;
    }

    int insert(int element)
    {
        !isFull() && (stack[top] = element) || printf("The stack is full\n");
        return !isFull() && ++top;
        // or increment at top and try
    }

    int getTop(){
        return stack[top-1];
    }

    void pop(){
        !isEmpty() && --top || printf("The stack is empty\n");
    }

    int display()
    {
        printf("The elements in the stack are: \n");
        int i;
        for (i = 0; i < top; ++i)
            printf("%d => %d\n", i, *(stack + i));
        i == 0 && printf("There are no elements to display\n");
    }

    printf("%d \n", insert(10));
    printf("%d \n", insert(9));
    printf("%d \n", insert(8));
    printf("%d \n", insert(7));
    printf("%d \n", insert(6));
    printf("%d \n", insert(5));
    printf("%d \n", insert(4));
    printf("%d \n", insert(3));
    printf("%d \n", insert(2));
    printf("%d \n", insert(1));
    printf("%d \n", insert(0));
    printf("%d \n", insert(55));
    printf("%d \n", insert(54));
    printf("%d \n", insert(53));
    printf("%d \n", insert(52));

    display();

    printf("The element at the top is: %d\n", getTop());
    pop();
    display();
    printf("The element at the top is: %d\n", getTop());
    pop();
    display();
    printf("The element at the top is: %d\n", getTop());
    pop();
    display();
    printf("The element at the top is: %d\n", getTop());
    pop();
    display();
    printf("The element at the top is: %d\n", getTop());
    pop();
    display();
    printf("The element at the top is: %d\n", getTop());
    pop();
    display();
    printf("The element at the top is: %d\n", getTop());
    pop();
    display();
    printf("The element at the top is: %d\n", getTop());
    pop();
    display();
    printf("The element at the top is: %d\n", getTop());
    pop();
    display();
    printf("The element at the top is: %d\n", getTop());
    pop();
    display();

}