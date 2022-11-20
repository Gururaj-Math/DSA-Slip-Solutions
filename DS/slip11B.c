#include<stdio.h>
#include<conio.h>
int queue[];
rear=-1;
front=-1;
void insert();
void delete();
void display();
void main(){
    int a;
    while(1)
    {
        printf("1. insert data\n");
        printf("2. delete data\n");
        printf("3. display data\n");
        printf("4. exit\n");
        printf("ENTER CHOICE\n");
        scanf("%d",&a);
        switch(a){
            case 1:
                insert();
            break;
            case 2:
                delete();
            break;
            case 3:
                display();
            break;
            case 4:
                exit(1);
            break;
            default:
                printf("Invalid input\n");
            break;
        }
    }
    getch();
};
void insert(){
    int data;
    printf("Enter Data\n");
    scanf("%d",&data);
    queue[rear]=data;
    rear++;
    printf("\nData inserted successfully\n");
}   
void delete(){
    if(front==rear)
    {
        printf("Queue is empty\n");
    }
    else{
        front++;
    }
}
void display(){
    int i;
     if(front==rear)
    {
        printf("Queue is empty\n");
    }
    else{
        printf("Queue elements:\n");
        for(i=front;i<rear;i++){
            printf("%d \t",queue[i]);
        }
        printf("\n");
    }

}