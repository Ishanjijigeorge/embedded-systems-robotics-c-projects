#include <stdio.h>
#include <string.h>

struct system
{
    int motor;
    int sensor;
    int battery;
    int communication;
    int fault;
    char fault_description[50];
    char severity[20];
};

int main()
{
    struct system s1;

    s1.motor = 0;
    s1.sensor = 1;
    s1.battery = 0;
    s1.communication = 1;
    s1.fault = 0;
    strcpy(s1.fault_description, "No Fault");
    strcpy(s1.severity, "NONE");

    int choice;
    int fault_choice;
    int operation_choice;

    do
    {
        printf("\n========================================");
        printf("\n       EMBEDDED DIAGNOSTIC CONSOLE");
        printf("\n========================================");
        printf("\n1. View System Status");
        printf("\n2. Set / Clear / Toggle Bit");
        printf("\n3. Inject Fault");
        printf("\n4. Run Diagnostics");
        printf("\n5. View Fault Log");
        printf("\n6. Save Configuration");
        printf("\n7. Exit");
        printf("\n----------------------------------------");
        printf("\nEnter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nMotor ON : %d", s1.motor);
                printf("\nSensor OK : %d", s1.sensor);
                printf("\nBattery LOW : %d", s1.battery);
                printf("\nCommunication OK : %d", s1.communication);
                printf("\nSystem FAULT : %d", s1.fault);
                break;


            case 2:
            {
                int bit_choice;

                printf("\n========== SET / CLEAR / TOGGLE ==========");
                printf("\n1. Motor");
                printf("\n2. Sensor");
                printf("\n3. Battery");
                printf("\n4. Communication");
                printf("\n5. System Fault");

                printf("\nSelect Component : ");
                scanf("%d", &bit_choice);

                switch(bit_choice)
                {
                    case 1:
                        printf("\n1. Set  2. Clear  3. Toggle  4. Check");
                        printf("\nEnter Choice : ");
                        scanf("%d", &operation_choice);

                        switch(operation_choice)
                        {
                            case 1: s1.motor = 1; break;
                            case 2: s1.motor = 0; break;
                            case 3: s1.motor = !s1.motor; break;
                            case 4: printf("\nMotor : %d", s1.motor); break;
                            default: printf("\nInvalid Choice");
                        }
                        break;

                    case 2:
                        printf("\n1. Set  2. Clear  3. Toggle  4. Check");
                        printf("\nEnter Choice : ");
                        scanf("%d", &operation_choice);

                        switch(operation_choice)
                        {
                            case 1: s1.sensor = 1; break;
                            case 2: s1.sensor = 0; break;
                            case 3: s1.sensor = !s1.sensor; break;
                            case 4: printf("\nSensor : %d", s1.sensor); break;
                            default: printf("\nInvalid Choice");
                        }
                        break;

                    case 3:
                        printf("\n1. Set  2. Clear  3. Toggle  4. Check");
                        printf("\nEnter Choice : ");
                        scanf("%d", &operation_choice);

                        switch(operation_choice)
                        {
                            case 1: s1.battery = 1; break;
                            case 2: s1.battery = 0; break;
                            case 3: s1.battery = !s1.battery; break;
                            case 4: printf("\nBattery : %d", s1.battery); break;
                            default: printf("\nInvalid Choice");
                        }
                        break;

                    case 4:
                        printf("\n1. Set  2. Clear  3. Toggle  4. Check");
                        printf("\nEnter Choice : ");
                        scanf("%d", &operation_choice);

                        switch(operation_choice)
                        {
                            case 1: s1.communication = 1; break;
                            case 2: s1.communication = 0; break;
                            case 3: s1.communication = !s1.communication; break;
                            case 4: printf("\nCommunication : %d", s1.communication); break;
                            default: printf("\nInvalid Choice");
                        }
                        break;

                    case 5:
                        printf("\n1. Set  2. Clear  3. Toggle  4. Check");
                        printf("\nEnter Choice : ");
                        scanf("%d", &operation_choice);

                        switch(operation_choice)
                        {
                            case 1: s1.fault = 1; break;
                            case 2: s1.fault = 0; break;
                            case 3: s1.fault = !s1.fault; break;
                            case 4: printf("\nSystem Fault : %d", s1.fault); break;
                            default: printf("\nInvalid Choice");
                        }
                        break;

                    default:
                        printf("\nInvalid Component Choice");
                }

                break;
            }


            case 3:
                printf("\n1. Sensor Failure");
                printf("\n2. Over Temperature");
                printf("\n3. Low Battery");
                printf("\n4. Motor Overload");
                printf("\n5. Communication Failure");
                printf("\nEnter Fault Choice : ");
                scanf("%d", &fault_choice);

                switch(fault_choice)
                {
                    case 1:
                        s1.sensor = 0;
                        s1.fault = 1;
                        printf("\nSensor Failure Injected!");
                        printf("\nSeverity : HIGH");
                        strcpy(s1.fault_description, "Sensor Failure");
                        strcpy(s1.severity, "HIGH");
                        break;

                    case 2:
                        s1.fault = 1;
                        printf("\nOver Temperature Injected!");
                        printf("\nSeverity : HIGH");
                        strcpy(s1.fault_description, "Over Temperature");
                        strcpy(s1.severity, "HIGH");
                        break;

                    case 3:
                        s1.battery = 1;
                        s1.fault = 1;
                        printf("\nLow Battery Injected!");
                        printf("\nSeverity : MEDIUM");
                        strcpy(s1.fault_description, "Low Battery");
                        strcpy(s1.severity, "MEDIUM");
                        break;

                    case 4:
                        s1.fault = 1;
                        printf("\nMotor Overload Injected!");
                        printf("\nSeverity : CRITICAL");
                        strcpy(s1.fault_description, "Motor Overload");
                        strcpy(s1.severity, "CRITICAL");
                        break;

                    case 5:
                        s1.communication = 0;
                        s1.fault = 1;
                        printf("\nCommunication Failure Injected!");
                        printf("\nSeverity : MEDIUM");
                        strcpy(s1.fault_description, "Communication Failure");
                        strcpy(s1.severity, "MEDIUM");
                        break;

                    default:
                        printf("\nInvalid Fault Choice");
                }
                break;

            case 4:
                if(s1.motor == 1)
                    printf("\nMotor Status : ON");
                else
                    printf("\nMotor Status : OFF");
                if(s1.sensor == 1)
                    printf("\nSensor Status : OK");
                else
                    printf("\nSensor Status : FAILED");
                if(s1.battery == 1)
                    printf("\nBattery Status : LOW");
                else
                    printf("\nBattery Status : NORMAL");
                if(s1.communication == 1)
                    printf("\nCommunication Status : OK");
                else
                    printf("\nCommunication Status : FAILED");
                if(s1.fault == 1)
                    printf("\nSystem Fault : DETECTED");
                else
                    printf("\nSystem Fault : NONE");
                break;

            case 5:
                if(s1.fault == 1)
                {
                    printf("\nFault Description : %s", s1.fault_description);
                    printf("\nSeverity          : %s", s1.severity);
                }
                else
                {
                    printf("\nNo Faults Recorded");
                }
                break;

            case 6:
            {
                FILE *fp;
                fp = fopen("config.txt", "w");
                if(fp == NULL)
                {
                    printf("\nFile Cannot Be Created");
                }
                else
                {
                    fprintf(fp, "%d %d %d %d %d",
                            s1.motor, s1.sensor, s1.battery,
                            s1.communication, s1.fault);
                    fclose(fp);
                    printf("\nConfiguration Saved Successfully!");
                }             
                break;
            }
            
        }
    } while(choice != 7);
}
