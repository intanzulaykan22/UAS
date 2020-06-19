#include <stdio.h>
#include <stdlib.h>

struct NODE {
 int number;
 struct NODE *next;
};

void append_node(struct NODE *llist, int num);
int  search_value(struct NODE *llist, int num);
void display_list(struct NODE *llist);


int main(void) {
 int num = 0;
 int input = 5;
 int retval = 0;
 struct NODE *llist;

 llist = (struct NODE *)malloc(sizeof(struct NODE));
 llist->number = 0;
 llist->next = NULL;

while(input != 0) {
  printf("Nama : Intan Zulayka Nursholiha\n");
  printf("NPM  : 197006084\n");
  printf("Kelompok : 5\n");
  printf("0");
  printf("1");
  printf("2");
  printf("3");
  printf("4");
  printf("5");
  printf("\nPress any key to continue... ");scanf("%d", &input);
}

 free(llist);
 return(0);
}

void append_node(struct NODE *llist, int num) {
 while(llist->next != NULL)
  llist = llist->next;

 llist->next = (struct NODE *)malloc(sizeof(struct NODE));
 llist->next->number = num;
 llist->next->next = NULL;
}

int search_value(struct NODE *llist, int num) {
 int retval = -1;
 int i = 1;

 while(llist->next != NULL) {
  if(llist->next->number == num)
   return i;
  else
   i++;

  llist = llist->next;
 }

 return retval;
}

void display_list(struct NODE *llist) {
 while(llist->next != NULL) {
  printf("%d ", llist->number);
  llist = llist->next;
 }

 printf("%d", llist->number);
}
