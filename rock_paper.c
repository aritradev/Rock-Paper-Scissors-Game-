#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

void winnerfunc(int robo,int hum)
{

    if(robo>hum)
    {
        system("color 6");
        printf("\n\n\t\t\tTotal Points:\n\n \t\t\t\t    Robot\t\t==>\t%d\n\n\t\t\t\t     You \t\t==>\t%d\n\n\t---------------------You lost in the game!---------------------",robo,hum);
    }
    else if(hum>robo)
    {
        system("color 2");
        printf("\n\n\t\t\tTotal Points:\n\n \t\t\t\t    Robot\t\t==>\t%d\n\n\t\t\t\t     You \t\t==>\t%d\n\n\t---------------------Congatulations! You won!---------------------",hum,robo);
    }
    else if(hum==robo)
    {
        system("color 5");
        printf("\n\n\t\t\tTotal Points:\n\n \t\t\t\t    Robot\t\t==>\t%d\n\n\t\t\t\t     You \t\t==>\t%d\n\n\t---------------------Match Draw!!!---------------------",hum,robo);
    }
}
int main()
{
    int robot,num,i,tp_human,tp_robot,repeat;
    system("color B");
    char human;
    printf("\n\n\t--------------------------------Welcome to the Rock-Paper-Scissor Game!--------------------------------\n\t");
    printf("========================================================================================================\n\n\n\n");
    start:
    tp_human=0;
    tp_robot=0;
    printf("\tEnter how many times you want to play\t:\t");
    scanf("%d",&num);
    fflush(stdin);
    printf("\n\t---------------------Lets start!---------------------\n");
    printf("\n\tNote : \tYou will get penalty if you input invalid characters.\n\n");

    for(i=0; i<num; i++)
    {   fflush(stdin);
        printf("\n\tChoose your option -->\t\n\t\tr. Rock\n\t\tp. Paper\n\t\ts. Scissor\n\n\tYour choice is -->\t");
        scanf("%c",&human);
        srand(time(NULL));
        robot=((rand()%3)+1);
        if(robot==1)
        {
            printf("\n\tRobot choosed Rock\n");
        }
        else if(robot==2)
        {
            printf("\n\tRobot choosed Paper\n");
        }
        else if(robot==3)
        {
            printf("\n\tRobot choosed Scissor\n");
        }

            if((human=='r'&&robot==1)||(human=='p'&&robot==2)||(human=='s'&&robot==3))
        {
            printf("\n\t\t\t       Draw!!!");
           /// system("color 1");
        }
           else if(human=='r'&&robot==2)
            {
                ///system("color 2");
                printf("\n\t\t\tRobot Got 1 point");
               /// tp_robot=tp_robot+1;
                tp_robot++;
            }
            else if(human=='r'&&robot==3)
            {
                printf("\n\t\t\tYou Got 1 point");
               /// tp_human=tp_human+1;
                tp_human++;
            }
            else if(human=='p'&&robot==1)
            {
                printf("\n\t\t\tYou Got 1 point");
              ///  tp_human=tp_human+1;
                 tp_human++;
            }
            else if(human=='p'&&robot==3)
            {
                printf("\n\t\t\tRobot Got 1 point");
              ///  tp_robot=tp_robot+1;
                 tp_robot++;
            }
            else if(human=='s'&&robot==1)
            {
                printf("\n\t\t\tRobot Got 1 point");
                ///tp_robot=tp_robot+1;
                 tp_robot++;
            }
            else if(human=='s'&&robot==2)
            {
                printf("\n\t\t\tYou Got 1 point");
               /// tp_human=tp_human+1;
                 tp_human++;
            }

            else{
            printf("\n\t\tInvalid Input!. As a penalty, Its gonna be counted as like draw.");
            }



        printf("\n\t\t---------------------------------");
        printf("\n\t\t---------------------------------");
        sleep(1);
    }
    winnerfunc(tp_robot,tp_human);
    printf("\n\n\t\t-------------------------------------------\n\n\n");
    sleep(1);
    printf("\tWant to Play Again?\n\t1. Yes\n\tEnter any other key to exit\n\t==>  ");{

    scanf("%d",&repeat);


    if(repeat==1){
        goto start;
    }else{
        printf("\t\t\t\t\tThank You!!!!!!\n\n\t\t\t\t\tCopyright@Aritra\n\n\n");
         return 0;
    }}

}
