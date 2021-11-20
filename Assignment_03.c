//Write a menu driven program to implement a stack using array and perform the stack operations.
#include<stdio.h>
#include<stdlib.h>

int top=-1,size;
int *arr;

int isFull(){
    if(top==size-1)
        return 1;
    else
        return 0;
}

int isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}

void peek(){
    if(isEmpty())
    printf("\nStack is empty!\n");
    else
    printf("Top value is %d\n",arr[top]);
}

void push(int n){
    if(isFull())
    printf("\nStack is full!\n");
    else{
        top=top+1;
        arr[top]=n;
        printf("\nInserted %d!\n",arr[top]);
    }
}
void pop(){
    if(isEmpty())
    printf("\nStack is empty!\n");
    else{
        printf("\ndeleted %d",arr[top]);
        top--;
    }
}
void display(){
    if(isEmpty())
    printf("\nStack is empty!\n");
    else{
    	int i;
        for(i=0;i<=top;i++)
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int item,choice;
    printf("Enter the size of the stack: ");
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    while(1){
        printf("\n***MENU***\n");
        printf("1. push\n2. pop\n3. display\n4. exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Enter the value you want to insert: ");
                    scanf("%d",&item);
                    push(item);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("INVALID CHOICE!");
        }
    }
    free(arr);

    return 0;
}
