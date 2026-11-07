#include <stdio.h>
#include <time.h>
#include <string.h>
struct LogEntry
{
    int entry_id;
    char timestamp[30];
    int event_type[25];
    int severity;
    char description[60];
};
int main() 
{
    int choice;
    struct LogEntry L1[100];
    int id=1,count=0,i;
    time_t t;

    do
      {
    printf("\n-----------------------------");
    printf("\n-----------------------------");
    printf("\nEVENT LOGGERR & LOG ANALYZER ");
    printf("\n-----------------------------");
    printf("\n-----------------------------");
    printf("\n1.Log New Event");
    printf("\n2.View All Events");
    printf("\n3.Filter by Severity");
    printf("\n4.Filter by Event Type");
    printf("\n5.Generate Summary Report");
    printf("\n6.Clear Log");
    printf("\n7.Exit");
    printf("\n -----------------------------");
    printf("\nEnter Choice : ");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1:
                   L1[count].entry_id=id;
                   time(&t);
                   t = t + 19800;
                   strcpy(L1[count].timestamp, ctime(&t));
                   printf("\nEntry ID : %d",L1[count].entry_id);
                   printf("\nTimestamp : %s",L1[count].timestamp);
                   printf("Event Type [ 0=SENSOR_ERROR | 1=MOTOR_START ]: ");
                   scanf("%d",L1[count].event_type);
                   printf("Severity 0=INFO 1=WARNING 2=ERROR 3=CRITICAL : ");
                   scanf("%d",&L1[count].severity);
                   printf("Description : ");
                   scanf(" %59[^\n]",L1[count].description);
                   count++;
                   id++;
                   break;
            case 2:
                   if(count==0)
                   {
                       printf("\nNo Events Available");
                   }
                   else
                   {
                       for(i=0;i<count;i++)
                           {
                   printf("\nEntry ID : %d",L1[i].entry_id);
                   printf("\nTimestamp : %s",L1[i].timestamp);
                   printf("Event Type [ 0=SENSOR_ERROR | 1=MOTOR_START ]: %d",L1[i].event_type);
                   printf("\nSeverity [ 0=INFO | 1=WARNING | 2=ERROR | 3=CRITICAL ]: %d",L1[i].severity);
                   printf("\nDescription : %s",L1[i].description);
                           }
                   }
                    break;
            case 3:if(count==0)
                   {
                       printf("\nNo Events Available");
                   }
                   else
                   {
                   for(i=0;i<count;i++)
                       {
                           printf("\nINFO : %d",L1[i].severity==0);
                           printf("\nWARNING : %d",L1[i].severity==1);
                           printf("\nERROR : %d",L1[i].severity==2);
                           printf("\nCRITICAL : %d",L1[i].severity==3);
                       }
                   }
                    break;
            case 4: if(count==0)
                   {
                       printf("\nNo Events Available");
                   }
                   else
                   {
                   for(i=0;i<count;i++)
                       {
                           printf("\nSENSOR_ERROR : %d",L1[i].severity==0);
                           printf("\nMOTOR_START : %d",L1[i].severity==1);
                       }
                   }
                    break;
            case 5:
                   if(count==0)
                   {
                       printf("\nNo Events Available");
                   }
                else
                   {
                   printf("\nDIAGNOSTIC SUMMARY");
                   printf("\n -----------------------------");
                   for(i=0;i<count;i++)
                       {
                           printf("\nTotal Events : %d",count);
                           printf("\nINFO : %d",L1[i].severity==0);
                           printf("\nWARNING : %d",L1[i].severity==1);
                           printf("\nERROR : %d",L1[i].severity==2);
                           printf("\nCRITICAL : %d",L1[i].severity==3);
                           printf("\nMost Frequent Event : ");
                            if(L1[i].severity==0>L1[i].severity==1)
                             {
                               printf("SENSOR_ERROR (%d occurrences)",L1[i].severity==0);
                             }
                            else
                             {
                               printf("MOTOR_START (%d occurrences)",L1[i].severity==1);
                             }
                       }
                   }
                    break;
            case 6:                                           
                     {
                      char confirm;
                      printf("Are you sure you want to clear all events? (y/n): ");
                     scanf(" %c", &confirm);
                     if(confirm == 'y' || confirm == 'Y')
                     {
                       count = 0;
                       id = 1;
                     printf("Log cleared successfully.\n");
                     }
                     else
                     {
                     printf("Clear operation cancelled.\n");
                     }
                     }
                     break;
        }
      }while(choice!=7);
}

