#include<stdio.h>
#include<stdlib.h>
struct node {
	int data; ;
	struct node *next;
};
int main(){
    struct mode*head =NULL;
    struct Node*head =malloc(sizeof(struct Node));
    head->data=45;
    head->next=NULL;
    printf("%d", head->data);
    return 0;
}