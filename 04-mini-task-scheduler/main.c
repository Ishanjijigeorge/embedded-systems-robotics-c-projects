#include <stdio.h>
struct task
{
    int id;
    char name[20];
    int period;
    int priority;
    int status;
    int ticks_since_run;
    
};
int main() 
{
    int choice;
    struct task t1[100];
    int id=1,count=0,i,j;
    int ticks;
    t1[count].status = 0;
    t1[count].ticks_since_run = 0;
;
    do
      {
    printf("\n-----------------------------");
    printf("\n-----------------------------");
    printf("\n     MINI TASK SCHEDULER ");
    printf("\n-----------------------------");
    printf("\n-----------------------------");
    printf("\n1.Display Task Table");
    printf("\n2.Run Scheduler (N Ticks)");
    printf("\n3.Add Task");
    printf("\n4.Exit");      
    printf("\n -----------------------------");
    printf("\nEnter Choice : ");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1: 
                   if(count==0)
                   {
                       printf("\nNo Task Available");
                   }
                   else
                   {
                   for(int p = 1; p <= 10; p++)
                   {
                   for(i = 0; i < count; i++)
                      {
                   if(t1[i].priority == p)
                        {                          
                   printf("\nTask Name : %s",t1[i].name);
                   printf("\nTask Period : %d",t1[i].period);
                   printf("\nTask Priority : %d",t1[i].priority);
                   printf("\nTask Status : %d\n",t1[i].status);
                           }
                        }
                     }
                   }
                    break;

              case 2:
                     if(count == 0)
                     {
                       printf("\nNo Task Available");
                     }
                     else
                     {
                     printf("\nEnter number of ticks to run: ");
                     scanf("%d", &ticks);
                     for(j = 1; j <= ticks; j++)
                     {
                      printf("\nTick %d:\n", j);
                     for(i = 0; i < count; i++)
                     {
                       t1[i].ticks_since_run++;
                      }
                      for(int p = 1; p <= 10; p++)
                      {
                        for(i = 0; i < count; i++)
                      {
                      if(t1[i].ticks_since_run >= t1[i].period &&
                       t1[i].priority == p)
                    {
                        printf("Running -> %s (Priority %d)\n",t1[i].name,t1[i].priority);
                        t1[i].ticks_since_run = 0;
                           }
                        }
                      }
                    } 
                  }
                   break;
            
            case 3:
                   t1[count].id=id;
                   printf("\nEnter Task Name : ");
                   scanf(" %19[^\n]",t1[count].name );
                   printf("Enter Task Period : ");
                   scanf("%d",&t1[count].period);
                   printf("Enter Task Priority : ");
                   scanf("%d",&t1[count].priority);
                   t1[count].status = 0;
                   t1[count].ticks_since_run = 0;                   
                   printf("\nTask added successfully\n");
                   count++;
                   id++;
                   break;
        }
      }while(choice!=4);
}

