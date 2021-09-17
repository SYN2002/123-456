#include<stdio.h>
#include<math.h>
int size,*arr;
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