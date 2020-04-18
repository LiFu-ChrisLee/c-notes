#include "lib/list.h"
#include <stdio.h>
#include <stdlib.h>

void add(List *pList, int number);
void print(List *pList);
void search(List *pList, int number);
void del(List *pList, int number);
void clear(List *pList);

int main(int argc, char const *argv[])
{
  List list;
  list.head = NULL;
  // list.tail = NULL;
  int number;

  do
  {
    scanf("%d", &number);
    if (number != -1)
    {
      add(&list, number);
    }
  } while (number != -1);

  print(&list);

  scanf("%d", &number);

  search(&list, number);

  scanf("%d", &number);

  del(&list, number);

  print(&list);

  clear(&list);

  print(&list);

  return 0;
}

void add(List *pList, int number)
{
  // add to linked list

  Node *p = (Node *)malloc(sizeof(Node));
  p->value = number;
  p->next = NULL;

  // head is not NULL
  if (pList->head)
  {
    // find the last
    Node *last = pList->head;
    // Node *last = pList->tail;
    while (last->next)
    {
      last = last->next;
    }

    // attach
    last->next = p;
  }
  // pList->head is NULL, init
  else
  {
    pList->head = p;
    pList->tail = p;
  }
}

void print(List *pList)
{
  for (Node *p = pList->head; p; p = p->next)
  {
    printf("%d\t", p->value);
  }
  printf("\n");
}

void search(List *pList, int number)
{
  int isFound = 0;
  for (Node *p = pList->head; p; p = p->next)
  {
    if (number == p->value)
    {
      printf("found");
      isFound = 1;
      break;
    }
  }

  if (!isFound)
  {
    printf("not found");
  }

  printf("\n");
}

void del(List *pList, int number)
{
  Node *q, *p;
  for (q = NULL, p = pList->head; p; q = p, p = p->next)
  {
    if (number == p->value)
    {
      if (q)
      {
        q->next = p->next;
      }
      // del head
      else
      {
        pList->head = p->next;
      }

      free(p);
      break;
    }
  }
}

void clear(List *pList)
{
  Node *p, *q;
  for (q = NULL, p = pList->head; p; p = q)
  {
    q = p->next;
    free(p);
  }
  pList->head = NULL;
}