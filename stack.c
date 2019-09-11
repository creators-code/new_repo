#include<stdio.h>
int main()
{
int global stack[10];
int choice;
while(1){
printf("Press 1 to Push\n");
printf("Press 2 to Pop\n");
printf("Press 3 to Delete\n");
printf("Press 4 to Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
//Push();
break;
case 2:
//Pop();
break;
case 3:
//Delete();
break;
case 4:
return 0;
}    
}
}
