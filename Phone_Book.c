#include <stdio.h>
#include <string.h>

struct contact
{
    char name[50];
    int phone_number[10];
};

int main()
{
    int i = 0, choice, j, k;
    struct contact c[10];
    char search_name[50];

    do
    {
        printf("\n1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (i == 10)
            {
                printf("Contact list is full!\n");
                break;
            }

            printf("Enter Name: ");
            scanf(" %[^\n]", c[i].name);

            printf("Enter 10-digit Phone Number: ");
            for (j = 0; j < 10; j++)
            {
                scanf("%d", &c[i].phone_number[j]);
            }

            i++;
            break;

        case 2:
            if (i == 0)
            {
                printf("No contacts found.\n");
            }
            else
            {
                for (j = 0; j < i; j++)
                {
                    printf("\nName: %s\n", c[j].name);
                    printf("Phone Number: ");
                    for (k = 0; k < 10; k++)
                    {
                        printf("%d", c[j].phone_number[k]);
                    }
                    printf("\n");
                }
            }
            break;

        case 3:
        {
            int found = 0;

            printf("Enter Name to Search: ");
            scanf(" %[^\n]", search_name);

            for (j = 0; j < i; j++)
            {
                if (strcmp(c[j].name, search_name) == 0)
                {
                    printf("\nName: %s\n", c[j].name);
                    printf("Phone Number: ");
                    for (k = 0; k < 10; k++)
                    {
                        printf("%d", c[j].phone_number[k]);
                    }
                    printf("\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found!\n");

            break;
        }

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}