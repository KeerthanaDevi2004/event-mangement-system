#include <stdio.h>
#include <string.h>
int main()
{
char username[15];
char password[12];

printf("Enter your username:\n");
scanf("%s",&username);

printf("Enter your password:\n");
scanf("%s",&password);

if(strcmp(username,"event")==0){
if(strcmp(password,"123")==0){

printf("\nWelcome.Login Success!");

}else{
printf("\nwrong password");
}
}else{
printf("\nUser doesn't exist");
}
struct event
{
char eventname[30];
char place[10];
int food[20];
int music[10];
char dec[10];
char members_count[10];
int n[20];
}eve[7];
char foods[30],decs[30],counts[30];
int i,input,n;
i=input=0;
while(input!=8)
{
 printf("\n\n****########WELCOME TO EVENT MANAGEMENT
SYSTEM########***");
printf("\n\n1.Wedding Event\n");
printf("2.birthday event\n");
printf("3.Reunion event\n");
printf("4.farwell party\n");
printf("5.baby shower function\n");
printf("6.ear piercing function\n");
printf("7.office party\n");
printf("8.exit\n");
printf("\n\nenter one of the above:");

scanf("%d",&input);
switch(input)
{
case 1:
printf("WELCOME TO WEDDING EVENT\n");
printf("enter the place of your event wants to happen\n");
scanf("%s",eve[i].place);
printf("enter the choice of your food\n1.veg\n2.non-veg\n");
scanf("%d",eve[i].food);
printf("enter one of your choice\n1.to arrange a musical
program\n2.to not arrange any musical program\n");
scanf("%d",eve[i].music);
printf("enter any of your choice for decoration\n1.high budget
decoration\n2.low budget decoration\n");
scanf("%s",eve[i].dec);
if(strcmp(decs,eve[i].dec)==1)
printf("your amount for high budget decoration is 50000\n");
else
printf("your amount for low budget decoration is 25000\n");
printf("enter the members count for the event\n");
scanf("%d",eve[i].n);
if(n>100&&n<=200)
printf("the total amount is 50,000");
else if(n>200&&n<=500)
printf("the total amount is 100000");
else
printf("SORRY!!!!\nservice not available for you required
members count\n");
break;

case 2:
printf("WELCOME TO BIRTHDAY PARTY EVENT\n");
printf("enter the place of your event wants to happen\n");
scanf("%s",eve[i].place);
printf("enter the choice of your food\n1.veg\n2.non-veg\n");
scanf("%d",eve[i].food);
printf("enter one of your choice\n1.to arrange a musical
program\n2.to not arrange any musical program\n");
scanf("%d",eve[i].music);
printf("enter any of your choice for decoration\n1.high budget
decoration\n2.low budget decoration\n");
scanf("%s",eve[i].dec);
if(strcmp(decs,eve[i].dec)==1)
printf("your amount for high budget decoration is 50000\n");
else
printf("your amount for low budget decoration is 25000\n");
printf("enter the members count for the event\n");
scanf("%d",&n);
if(n>100&&n<=200)
printf("the total amount is 50,000");
else if(n>200&&n<=500)
printf("the total amount is 100000");
else
printf("SORRY!!!!\nservice not available for you required
members count");
break;

case 3:
printf("WELCOME TO REUNION PARTY EVENT\n");
printf("enter the place of your event wants to happen\n");
scanf("%s",eve[i].place);
printf("enter the choice of your food\n1.veg\n2.non-veg\n");
scanf("%d",eve[i].food);
printf("enter one of your choice\n1.to arrange a musical
program\n2.to not arrange any musical program\n");
scanf("%d",eve[i].music);
printf("enter any of your choice for decoration\n1.high budget
decoration\n2.low budget decoration\n");
scanf("%s",eve[i].dec);
if(strcmp(decs,eve[i].dec)==1)
printf("your amount for high budget decoration is 50000\n");
else
printf("your amount for low budget decoration is 25000\n");
printf("enter the members count for the event\n");
scanf("%d",&n);
if(n>100&&n<=200)
printf("the total amount is 50,000");
else if(n>200&&n<=500)
printf("the total amount is 100000");
else
printf("SORRY!!!!\nservice not available for you required
members count");

break;

case 4:
printf("WELCOME TO FAREWELL PARTY EVENT\n");
printf("enter the place of your event wants to happen\n");
scanf("%s",eve[i].place);
printf("enter the choice of your food\n1.veg\n2.non-veg\n");
scanf("%d",eve[i].food);
printf("enter one of your choice\n1.to arrange a musical
program\n2.to not arrange any musical program\n");
scanf("%d",eve[i].music);
printf("enter any of your choice for decoration\n1.high budget
decoration\n2.low budget decoration\n");
scanf("%s",eve[i].dec);
if(strcmp(decs,eve[i].dec)==1)
printf("your amount for high budget decoration is 50000\n");
else
printf("your amount for low budget decoration is 25000\n");
printf("enter the members count for the event\n");
scanf("%d",&n);
if(n>100&&n<=200)
printf("the total amount is 50,000");
else if(n>200&&n<=500)
printf("the total amount is 100000");
else


printf("SORRY!!!!\nservice not available for you required
members count");
break;

case 5:
printf("WELCOME TO BABY SHOWER FUNCTION\n");
printf("enter the place of your event wants to happen\n");
scanf("%s",eve[i].place);
printf("enter the choice of your food\n1.veg\n2.non-veg\n");
scanf("%d",eve[i].food);
printf("enter one of your choice\n1.to arrange a musical
program\n2.to not arrange any musical program\n");
scanf("%d",eve[i].music);
printf("enter any of your choice for decoration\n1.high budget
decoration\n2.low budget decoration\n");
scanf("%s",eve[i].dec);
if(strcmp(decs,eve[i].dec)==1)
printf("your amount for high budget decoration is 50000\n");
else
printf("your amount for low budget decoration is 25000\n");
printf("enter the members count for the event\n");
scanf("%d",&n);
if(n>100&&n<=200)
printf("the total amount is 50,000");
else if(n>200&&n<=500)
printf("the total amount is 100000");
else

printf("SORRY!!!!\nservice not available for you required
members count");
break;

case 6:
printf("WELCOME TO EAR PIERCING FUNCTION\n");
printf("enter the place of your event wants to happen\n");
scanf("%s",eve[i].place);
printf("enter the choice of your food\n1.veg\n2.non-veg\n");
scanf("%d",eve[i].food);
printf("enter one of your choice\n1.to arrange a musical
program\n2.to not arrange any musical program\n");
scanf("%d",eve[i].music);
printf("enter any of your choice for decoration\n1.high budget
decoration\n2.low budget decoration\n");
scanf("%s",eve[i].dec);
if(strcmp(decs,eve[i].dec)==1)
printf("your amount for high budget decoration is 50000\n");
else
printf("your amount for low budget decoration is 25000\n");
printf("enter the members count for the event\n");
scanf("%d",&n);
if(n>100&&n<=200)
printf("the total amount is 50,000");
else if(n>200&&n<=500)
printf("the total amount is 100000");
else
printf("SORRY!!!!\nservice not available for you required
members count");
break;

case 7:
printf("WELCOME TO OFFICE PARTY\n");
printf("enter the place of your event wants to happen\n");
scanf("%s",eve[i].place);
printf("enter the choice of your food\n1.veg\n2.non-veg\n");
scanf("%d",eve[i].food);
printf("enter one of your choice\n1.to arrange a musical
program\n2.to not arrange any musical program\n");
scanf("%d",eve[i].music);
printf("enter any of your choice for decoration\n1.high budget
decoration\n2.low budget decoration\n");
scanf("%s",eve[i].dec);
if(strcmp(decs,eve[i].dec)==1)
printf("your amount for high budget decoration is 50000\n");
else
printf("your amount for low budget decoration is 25000\n");
printf("enter the members count for the event\n");
scanf("%d",&n);
if(n>100&&n<=200)
printf("the total amount is 50,000");
else if(n>200&&n<=500)
printf("the total amount is 100000");
else

printf("SORRY!!!!\nservice not available for you required
members count");
break;

case 8:
break;

}
}
}
