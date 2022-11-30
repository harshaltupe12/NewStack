// global declaration
#include<stdio.h>
#include<conio.h>
#define Size 5
int Stack[Size];
int choice,top,ele,i;
int is_full();
int is_empty();
void push();
void pop();
void display();

void main(){
    top = -1;
    printf("Select any to perform\n ");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT ");
    do
    {
        printf("\nEnter Your Choice ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:{
            push();
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
            printf("You decide to Exit ");
            break;
        }
        
        default:{
            printf("Please enter valid choice ");
        }
        break;
        }
    } 
    while (choice!=4);
}

int is_full(){
    if (top == Size-1){
        return(1);
    }
    else{
        return(0);
    }
}

void push(){
    if (is_full()==1)
    {
        printf("\nStack is overflow ");
    }
    else{
        printf("\nEnter element to add in stack ");
        scanf("%d",&ele);
        top++;
        Stack[top] = ele;
    }
}

int is_empty(){
    if (top == -1)
    {
        return(1);
    }
    else{
        return(0);
    } 
}

void pop(){
    if (is_empty()==1)
    {
        printf("Stack is empty ");
    }
    else{
        printf("\nPoped Element is: %d", Stack[top]);
        top--;
    }
}

void display(){
    if (is_empty() == 1)
    {
        printf("Stack is underflow nothing to show ");
    }
    else{
        printf("Elements in stack is: ");
        for (int i = top; i>=0; i--)
        {
            printf("%d ",Stack[i]);
        }
    }
}
