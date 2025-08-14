#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; };
struct Node* head = NULL;
void insert(int x) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data=x; n->next=NULL;
    if(!head) head=n;
    else { struct Node*t=head; while(t->next) t=t->next; t->next=n; }
}
void delete(int x) {
    struct Node **t=&head, *tmp;
    while(*t && (*t)->data!=x) t=&(*t)->next;
    if(*t) { tmp=*t; *t=(*t)->next; free(tmp);}
}
void display() {
    struct Node* t=head;
    while(t) { printf("%d ",t->data); t=t->next; }
    printf("\n");
}
int main() {
    int ch, v;
    do {
        printf("1.Ins 2.Del 3.Dis 4.Exit\n"); scanf("%d",&ch);
        if(ch==1) {printf("Enter the value to insert: \n"); scanf("%d",&v); insert(v); }
        else if(ch==2) {printf("Enter the value to delete: \n"); scanf("%d",&v); delete(v); }
        else if(ch==3) printf("The Linked List Array: \n"); display();
    } while(ch!=4);
}
