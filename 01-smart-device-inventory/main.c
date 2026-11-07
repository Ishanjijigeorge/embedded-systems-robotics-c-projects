#include <stdio.h>
struct add_device
{
    int id;
    char name[10];
    char type[10];
    char version[10];
    int sampling;
};
int main() 
{
    int choice;
    int id=1,count=0,i,j;
    int delete_id;
    int search_id;
    int update_id;
    struct add_device a1[100];
    do
      {
    printf("\n-----------------------------");
    printf("\n-----------------------------");
    printf("\n  DEVICE MANAGEMENT SYSTEM");
    printf("\n-----------------------------");
    printf("\n-----------------------------");
    printf("\n1.Add Device");
    printf("\n2.Delete Device");
    printf("\n3.Search Device");
    printf("\n4.Update Device");
    printf("\n5.Display Devices");
    printf("\n6.Save Configuration");
    printf("\n7.Exit");
    printf("\n -----------------------------");
    printf("\nEnter Choice : ");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1:
                   a1[count].id=id;
                   printf("\nEnter device name : ");
                   scanf("%s",a1[count].name);
                   printf("Enter device type : ");
                   scanf("%s",a1[count].type);  
                   printf("Enter firmware version : ");
                   scanf("%s",a1[count].version);
                   printf("Enter sampling interval : ");
                   scanf("%d",&a1[count].sampling);
                   printf("\nDevice registered successfully with ID : %d",a1[count].id);
                   count++;
                   id++;
                   break;
            
            case 2:
                   printf("\nEnter Device ID to delete: ");
                   scanf("%d",&delete_id);
                   int found=0;
                   for(i=0;i<count;i++)
                    {
                     if(delete_id==a1[i].id)
                     {
                         for(j=i;j<count-1;j++)
                             {
                                 a1[j]=a1[j+1];
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
            case 3:
                   printf("\nEnter Device ID to Search: ");
                   scanf("%d",&search_id);
                    for(i=0;i<count;i++)
                     {
                       if(search_id==a1[i].id)
                        {
                           printf("\nDevice ID : %d",a1[i].id);
                           printf("\nDevice name : %s",a1[i].name);
                           printf("\nDevice type : %s",a1[i].type);
                           printf("\nFirmware version : %s",a1[i].version);
                           printf("\nSampling interval : %d",a1[i].sampling);
                      
                        }
                     }
                       if (i==count)
                        {
                           printf("\nInvalid ID"); 
                        }
                    break;
            
            case 4:
                   printf("\nEnter Device ID to Update: ");
                   scanf("%d",&update_id);
                    for(i=0;i<count;i++)
                     {
                       if(update_id==a1[i].id)
                        {
                           printf("\nUpdated Device name : ");
                           scanf("%s",a1[i].name);
                           printf("\nUpdated Device type : ");
                           scanf("%s",a1[i].type);
                           printf("\nUpdated Firmware version : ");
                           scanf("%s",a1[i].version);
                           printf("\nUpdated Sampling interval : ");
                           scanf("%d",&a1[i].sampling);
                           printf("\nDevice Updated Successfully");
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
                           printf("\nAvailable Devices");
                      for(i=0;i<count;i++)
                        {
                           printf("\n");
                           printf("\nDevice ID : %d",a1[i].id);
                           printf("\nDevice name : %s",a1[i].name);
                           printf("\nDevice type : %s",a1[i].type);
                           printf("\nFirmware version : %s",a1[i].version);
                           printf("\nSampling interval : %d",a1[i].sampling);
                         }
                       }
                    break; 
            
            case 6: 
                    {
                      FILE *fp;

                      fp = fopen("devices.txt", "w");

                      if(fp == NULL)
                      {
                        printf("\nFile cannot be opened");
                      }
                      else
                      {
                        for(i = 0; i < count; i++)
                          {
                           fprintf(fp, "%d %s %s %s %d\n",
                                                 a1[i].id,
                                               a1[i].name,
                                               a1[i].type,
                                            a1[i].version,
                                          a1[i].sampling);
                          }

                     fclose(fp);

                     printf("\nConfiguration saved successfully");
                     }

                     break;
                    }
                   
        }

    } while(choice != 7);
}

