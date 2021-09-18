#include<stdio.h>
#include<stdlib.h>

int *arr,size,i;

void update(int item,int poi){
        arr[poi-1]=item;
}

void display(){
	printf("Updated array is: \n");
	for ( i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
}

void insert(int poi,int item){
	for(i=size;i>=poi;i--){
        arr[i]=arr[i-1];
    }
    arr[poi-1]=item;
    size=size+1;
}

void search(int item){
	for ( i = 0; i < size; i++)
    {
        if(arr[i]==item){
        	printf("The element %d is in '%d' position",item,i+1);
		}
        else
            printf("NOT FOUND!");
    }
}

void delete(int item){
	int poi,j;
	for ( j = 0; j < size; j++)
    {
        if(arr[j]==item)
        poi=j+1;
    }
	for (i = poi; i <size; i++)
    {
        arr[i-1]=arr[i];
    }
    size=size-1;
    if(i==0)
    printf("Array is empty!");
}

int main()
{
    int item,choice,poi;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    arr=(int*) malloc(size*sizeof(int));
    printf("Enter the elements of the array: \n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",(arr+i));
    }
    while(1)
	{
        printf("\n***MENU***\n");
        printf("1. update\n2. insert\n3. search\n4. remove\n5. display\n6. exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
		{
            case 1: printf("Enter the updated value and position you want to update: ");
                    scanf("%d%d",&item,&poi);
                    update(item,poi);
                    break;
            case 2: printf("Enter the position and the value you want to insert: ");
                    scanf("%d%d",&poi,&item);
                    insert(poi,item);
                    break;
            case 3: printf("Enter the value you want to search: ");
                    scanf("%d",&item);
                    search(item);
                    break;
            case 4: printf("Enter the value you want to remove: ");
                    scanf("%d",&item);
                    delete(item);
                    break;
            case 5: display();
                    break;
            case 6: exit(0);
            default: printf("INVALID CHOICE!");
        }
    }
    free(arr);
    
    return 0;
}
