#include <stdio.h>
struct device
{
    int id;
    char name[20];
    int type;
    int status;
    
};
int main() 
{
    int choice;
    struct device d1[100];
    int id=1,count=0,i,j;
    int search_id;
    int delete_id;
    int update_id;
    do
      {
    printf("\n-----------------------------");
    printf("\n-----------------------------");
    printf("\n DYNAMIC DEVICE REGISTRY ");
    printf("\n-----------------------------");
    printf("\n-----------------------------");
    printf("\n1.Add Device");
    printf("\n2.Delete Device");
    printf("\n3.Search Device");
    printf("\n4.Update Device");
    printf("\n5.Display Device");
    printf("\n6.Count Device");
    printf("\n7.Sort Device");
    printf("\n8.Clear Registry");
    printf("\n9.Exit");       
    printf("\n -----------------------------");
    printf("\nEnter Choice : ");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1:
                   d1[count].id=id;
                   printf("\nEnter Device Name : ");
                   scanf("%s",d1[count].name );
                   printf("Enter Device type [ 0=SENSOR 1=MOTOR ] : ");
                   scanf("%d",&d1[count].type);
                   printf("Enter Device status [ 0=IN ACTIVE / 1=ACTIVE / 2=FAULT ] :");
                   scanf("%d",&d1[count].status);
                   printf("\nDevice added successfully");
                   count++;
                   id++;
                   break;
            
            case 2:
                    printf("\nEnter Device ID to delete: ");
                   scanf("%d",&delete_id);
                   int found=0;
                   for(i=0;i<count;i++)
                    {
                     if(delete_id==d1[i].id)
                     {
                         for(j=i;j<count-1;j++)
                             {
                                 d1[j]=d1[j+1];
                             }
                         count--;
                         found=1;
                         printf("\nDevice deleted successfully");
                         break;
                      }
                     }
                    if(found == 0)
                     {
                       printf("\nInvalid ID");
                     }
                    break;
            
            case 3:printf("\nEnter the Device ID to search : ");
                   scanf("%d",&search_id);
                   for(i=0;i<count;i++)
                    {
                   if(search_id==d1[i].id)
                   {
                       printf("\nDevice Founded Successfully");
                   }
                   else
                   {
                       printf("\nInvalid Device ID");
                       }
                     }
                    break;
            case 4:  
                   printf("\nEnter Device ID to Update: ");
                   scanf("%d",&update_id);
                    for(i=0;i<count;i++)
                     {
                       if(update_id==d1[i].id)
                        {
                      printf("\nEnter Device Name : ");
                   scanf("%s",d1[i].name );
                   printf("Enter Device type [ 0=SENSOR 1=MOTOR ] : ");
                   scanf("%d",&d1[i].type);
                   printf("Enter Device status [ 0=IN ACTIVE / 1=ACTIVE / 2=FAULT ] :");
                   scanf("%d",&d1[i].status);
                   printf("\nDevice Updated successfully");
                           break;
                        }
                     }
                       if(i==count)
                        {
                           printf("\nInvalid ID"); 
                        }
                    break;
            case 5:
                   
                   if(count==0)
                   {
                       printf("\nNo Devices Available");
                   }
                   else
                   {
                       for(i=0;i<count;i++)
                           {
                   printf("\nDevice ID : %d",d1[i].id);
                   printf("\nEnter Device Name : %s",d1[i].name);
                   printf("\nEnter Device type [ 0=SENSOR 1=MOTOR ] : %d",d1[i].type);
                   printf("\nEnter Device status [ 0=IN ACTIVE / 1=ACTIVE / 2=FAULT ] : %d",d1[i].status);
                           }
                   }
                    break;
            case 6:
                    if(count==0)
                   {
                       printf("\nNo Devices Available");
                   }
                   else
                   {
                       for(i=0;i<count;i++)
                        {
                       printf("\nTotal No.of Devices: %d",count);
                         }
                   }
                   break;
            case 7:
                    if(count==0)
                   {
                       printf("\nNo Devices Available");
                   }
                   else
                   {
                   for(i=0;i<count;i++)
                       {
                           printf("\nSENSOR_TYPE : %d",d1[i].type==0);
                           printf("\nMOTOR_TYPE : %d",d1[i].type==1);
                           printf("\nDevices Sorted by Type Successfully");
                       }
                   }
            break;
            case 8:
                     {
                      char confirm;
                      printf("\nAre you sure you want to clear registry? (y/n): ");
                     scanf(" %c", &confirm);
                     if(confirm == 'y' || confirm == 'Y')
                     {
                       count = 0;
                       id = 1;
                     printf("Registry cleared successfully.\n");
                     }
                     else
                     {
                     printf("Registry Clear operation cancelled.\n");
                     }
                     }
                     break;
        }
      }while(choice!=9);
}
   
