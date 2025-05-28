#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

int main(){
   struct node*head;
   struct node *node1,*node2,*node3,*node4,*node5,*node6,*temp;
   node1=(struct node*)malloc(sizeof(struct node));
   node1->data=10;
   head=node1;
   node2=(struct node*)malloc(sizeof(struct node));
   node2->data=20;
   node1->next=node2;
   node3=(struct node*)malloc(sizeof(struct node));
   node3->data=30;
   node2->next=node3;
   node4=(struct node*)malloc(sizeof(struct node));
   
   node4->data=40;
   node3->next=node4;
   node5=(struct node*)malloc(sizeof(struct node));
   node5->data=50;
   node4->next=node5;
   node6=(struct node*)malloc(sizeof(struct node));
   node6->data=60;
   node5->next=NULL;
   
   temp=head;
   while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
   }
   printf("NULL\n");
    return 0;
}
