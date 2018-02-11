#include<stdio.h>
#include<conio.h>
void speedrise();
void slow();
void stop();
void main()
{
    int n;
    clrscr();
    printf("\n Enter the speed");
    scanf("%d",&n);
    while(1)
{
     int s;
     printf("\n enter the obstacle \n1.signal,\n2.speedbreaker,\n3.people,\n4.exit");
     scanf("%d",&s);
     switch(s)
     {
     case 1: speedrise(n);
             break;
    case 2: slow(n);
            speedrise(n);
            break;
    case 3:stop(n);
           break;
    default:exit(0);
            break;
     }
}getch();
}
void speedrise(int speed)
{
        int rise;
        printf("\n The car speed is %d",speed);
        rise=speed+10;
        printf("\n Now the car speed is %d ",rise);
}
void slow(int speed)
{ 
    int reduce;
  printf("\n the car speed is %d",speed);
  printf("\n Enter the speed to reduce");
  scanf("%d",&reduce);
  reduce=speed-reduce;
  printf("\n The reduced speed is %d",reduce);
  void speedrise();
}

void stop(int speed)
{
    printf("\n The car speed is %d",speed);
    if(speed!=0)
    {
        speed=speed-10;
        printf("\n the car is stopped");
    }
    else
    {
        printf("\n The car is moved");
    }
}
        
