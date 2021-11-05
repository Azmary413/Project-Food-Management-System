#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Node
{
char foodname[30];
int data;
float price;
struct Node *next;
};
typedef struct Node node;
node *head, *menu;
int credit_card[20];
void print(char list[])
{
printf("%s",list);
}
void scr()
{
system("cls");
}
fooodlist()
{
print("1.*Food Menu :\n");
print("2.*Exit :\n");
}
void insertfood(char foodname[30],int data,float price)
{
node *temp;
temp=(node*)malloc(sizeof(node));

temp->data=data;
temp->price=price;
strcpy(temp->foodname,foodname);
temp->next=NULL;
if(head==NULL)
{
head=temp;
menu=head;
}
else
{
while(head->next!=NULL)
{
head=head->next;
}
head->next=temp;
}
}
void foodlist()
{
node*start;
start=menu;
printf("\nItem Number |Food Name |Price \n");
while(start !=NULL)
{
printf("\t%d. %s|%0.2f \n ", start->data,start->foodname,start->price);
start=start->next;
}
}
int count()
{
int cnt=0;
node *temp;

temp=menu;
while(temp !=NULL)
{
temp=temp->next;
cnt++;
}
return cnt;
}
int total_money(int foodchoice, int much)
{
scr();
node *temp;
temp=(node*)malloc(sizeof(node));
temp=menu;
while(temp->data !=foodchoice)
{
temp=temp->next;
}
if(temp->data==foodchoice)
{
int o;
float total=temp->price*much;
print("Total money for your order : ");
printf("%.2f",total);
print("\nEnter your table number :");
scanf("%d",&o);
return total;
}
}
void payment(float money)
{

scr();
back_option:
print("How you pay this money :\n");
print("1. Cash\n");
print("2. Credit Card\n");
int choose;
float taka;
scanf("%d",&choose);
if(choose==1)
{
scr();
give :
print("Please pay your full bill : ");
scanf("%f",&taka);
}
else if(choose==2) {
scr();
int card_num[20] ,i=0;
print("please give your card number :");
scanf("%d",&card_num[i]);
credit_card[i]=card_num[i];
i++;
scr();
printf("Thank you sir");
}
}
int orderlist()
{
int foodchoice, much, i, j, k;
food_choice :

print("\nWhich product You Want:");
scanf("%d",&foodchoice);
i=count();
if(foodchoice>=1 && foodchoice<=i)
{
print("\nHow much you need:");
scanf("%d",&much);
k=total_money(foodchoice,much);
payment(k);
return k;
}
}
int main()
{
print("****************************\n");
print("* WELCOME TO OUR RESTURANT *\n");
print("****************************\n");
main_menu :
print("Enter Your choice SIR/MEDAM:\n\n");
fooodlist();
head=NULL;
insertfood("Khichuri ",1,150);
insertfood("Biriyani ",2,150);
insertfood("Chicken ",3,100);
insertfood("Morog Polao",4,120);
insertfood("Noodles ",5,50);
int choose,fooddata ;
float foodprice;
char choice,addfood[30];
char problem[2000],problem_box[2000];

print("\nEnter Your Choice:-->:");scanf("%c",&choice);
if(choice>='1' && choice<='2')
{
if(choice=='1')
{
food_list :
scr;
foodlist();
orderlist();
printf("\n Thank you \n");
}
else if(choice=='2')
{
scr();
print("........THANK YOU........\n");
}
}
return 0;
}
