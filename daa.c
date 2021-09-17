#include<stdio.h>
#include<stdlib.h>

int top=-1,size,*arr;

void push(int n){
    if(top==size-1)
    printf("\nStack is full!\n");
    else{
        top=top+1;
        arr[top]=n;
        printf("\nInsert %d!\n",arr[top]);
    }
}
void pop(){
    if(top==-1)
    printf("\nStack is empty!\n");
    else{
        printf("\ndelete %d",arr[top]);
        top--;
    }
}
void display(){
    if(top==-1)
    printf("\nStack is empty!!\n");
    else{
        for(int i=top;i>=0;i--)
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
            default: printf("INVALID!");
        }
    }

    return 0;
}