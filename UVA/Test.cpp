#include<iostream>
#include<cstdio>
#define SIZE 10
int q[SIZE], rear=-1, fro=-1,item;
void new_value();
void delete_value();
void show();
main()
{
    int n=0;
    while(n!=4)
    {
        printf("\n\n1.\tInsert\n2.\tDelete\n3.\tDisplay\n4.\tExit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch(n)
        {
        case 1:
            new_value();
            break;
        case 2:
            delete_value();
            break;
        case 3:
            show();
            break;

        default:
            printf("\n\nInvalid choice.\n");
        }
    }
}

void new_value()
{
    if((fro==0 && rear==SIZE-1) || (fro==rear+1))
        printf("\n\nQueue is full.");
    else
    {
        printf("\n\nEnter ITEM: ");
        scanf("%d", &item);

        if(rear == -1)
        {
            rear = 0;
            fro = 0;
        }
        else if(rear == SIZE-1)
            rear = 0;
        else
            rear++;

        q[rear] = item;
        printf("\n\nItem inserted: %d\n", item);
    }
}
void delete_value()
{
    if(fro == -1)
        printf("\n\nQueue is empty.\n");
    else
    {
        item = q[fro];

        if(fro == rear)
        {
            fro = -1;
            rear = -1;
        }
        else if(fro == SIZE-1)
            fro = 0;
        else
            fro++;

        printf("\n\nITEM deleted: %d", item);
    }
}
void show()
{
    int i;

    if((fro == -1) || (fro==rear+1))
        printf("\n\nQueue is empty.\n");
    else
    {
        printf("\n\n");

        for(i=fro; i<=rear; i++)
            printf("\t%d",q[i]);
    }
}
