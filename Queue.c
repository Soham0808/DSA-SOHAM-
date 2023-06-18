#include<stdio.h>
#define qsize 5
int front , rear, error, count=0;
void insert();
void delete();
void wrq();
main()
{
	
	float queue [qsize];
	float element ;
	int selection;
	rear=0;
	front=0;
	printf("Queue operations:");
	do 
	{
		error =1;
		printf("\n 1-insert , 2-delete , 3-quit :");
		scanf("%d", &selection);
		
		switch (selection)
		{
			case 1:
				printf("\n Enter the element to be inserted :");
				scanf("%f",& element);
				printf("%2f \n", element);
				insert (queue, element);
                if (!error)
                {
                    printf("The Queue after insertion :\n");
                    wrq(queue);
                    printf("\n");

                } 
				break;
                case 2:
                delete(queue);
                if ((!error )&&(count))
                {
                    printf("The queue after deletion :\n ");
                    wrq(queue);
                    printf("\n");

                }
                break;
                case 3:
                if ((!error )&&(front))
                {
                    printf("The final queue :\n ");
                    wrq(queue);
                    printf("\n");

                }
                break;
            default :
            printf("Invalid Option");
            break;
        }
	
	}	while (selection !=3);
}
void insert (qu,item)
float qu[qsize],item ;
{
	if (rear <qsize)
	{
		rear++;
		qu[rear]= item ;
		if (!front)
		front =1;
		error =0;
		count++;
		
	}
	else 
	{
		printf("Queue overflow\n");
		error =1;
		
	}

}
void delete (qu)
float qu[qsize];
{
	float item ;
	if( front)
	{
		item =qu[front];
		error =0;
		count--;
		printf("The element deleted =%6.2f\n ", item);
		if (front ==rear )
		{
			front=0;
			rear=0;
			printf("The Queue is empty \n");
			
		}
		else  
		front ++;

	}
	else 
	{
		printf("Queue undeflow");
		error=1;
		
	}
	return ;
	
}
void wrq (qu)
float qu[qsize];
{
	int c,k;
	k=0;
	for (c=front; c<rear+1; c++)
	{
		printf ("%8.2f",qu[c]);
	
	}

}