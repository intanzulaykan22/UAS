#include<stdio.h>
#include<conio.h>
 
#define MAX 50
#define true 1
#define false 0
 
char stack[MAX];
int top;
 
void init(void);
int full (void);
int empty (void);
char pop (void);
void clear (void);
void push (char info);
void baca (void);
 
main()
{
printf("Nama	: Intan Zulayka Nursholiha \n");
printf("Npm	: 197006084 \n");
printf("Kelompok: 5 \n");
 char pilih,elm;
 
printf("----Operasi Single Stack----\n");
 init();
 
do
 {
 printf("operasi single stack:\n");
 printf("[1] PUSH\n");
 printf("[2] POP\n");
 printf("[3] CLEAR\n");
 printf("[4] BACA\n");
 printf("[5] SELESAI...\n");
 printf(" Pilihan : ");scanf("%s",&pilih);
 switch(pilih)
 {
 case '1': printf("PUSH ");scanf("%s",&elm);push(elm);break;
 case '2': elm=pop();printf("POP %c\n",elm);break;
 case '3': clear();break;
 case '4': baca();break;
 case '5': break;
 default : printf("Salah pilih...\n");
 }
 printf("\n");
 }while(pilih!='5');
 getche();
}
 
void init(void)
{
 top=0;
}
 
void push(char info)
{
 if(full()!=true)
 { top++;
 stack[top]=info; }
 else printf("Stack overflow...\n");
}
 
char pop(void)
{
 char info;
 if(empty()!=true)
 { info=stack[top];
 top--;
 return(info);
 }
 else printf("Stack underflow...\n");
}
 
void clear(void)
{
 top=0;
}
 
int full(void)
{
 if(top==MAX) return(true);
 else return(false);
}
 
int empty(void)
{
 if(top==0) return(true);
 else return(false);
}
 
void baca(void)
{
 int i;
 printf("isi stack : ");
 if(top>0)
 {
 for(i=1;i<=top;i++)
 printf("%c ",stack[i]);
 }
 else printf("(kosong)");
 printf("\n");
}
