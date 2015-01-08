#include<stdio.h>
#include<stdlib.h>

struct node
{
  int value;
  struct node* next;
};

typedef struct node node;
node* head;

void push(int value)
{
  node* temp = new node;
  temp->value = value;
  temp->next = head;
  head = temp;
}

void pop()
{
  node* temp = head;
  head = head->next;
  free(temp);
}

void print(node *head)
{
  while(head != NULL)
  {
    printf("%i ",head->value);
    head = head->next;
  }
  printf("\n");
}

int top = -1;
void stackPush(node* value,node* base)
{
  top++;
  base[top] = *value;
}

void stackPop()
{
  top--;
}

bool stackEmpty()
{
  return top == -1;
}

node* stackTop(node* base)
{
  return &base[top];
}

void Reverse(int length, node* head1)
{
  int i;
  node base[51];

  while(head1 != NULL)
  {
    stackPush(head1,base);
    head1 = head1->next;
  }
  head1 = stackTop(base);
  head = head1;
  stackPop();
  while(!stackEmpty())
  {
    head1->next = stackTop(base);
    stackPop();
    head1 = head1->next;
  }
  head1->next = NULL;
}


int main(void)
{
  push(3);
  push(4);
  push(5);
  push(6);
  print(head);
  Reverse(4, head);
  print(head);
  //printf("%p\n", head);

}
