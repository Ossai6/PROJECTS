#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Defining a struct to store two contacts
struct contact{
	char name[100];
	char email[100];
	char num[100];
	char location[];
};
//Assigning the struct with contact details
struct contact Caleb={"Akpe Caleb Chukwuemeka", "akpec116@gmail.com", "09039104783", "Abuja"};
struct contact Ruth={"Williams Ruth Anwuli", "ruthwill@gmail.com", "08012345678", "Abuja"};
struct contact *ptr; //Declaring a pointer to the struct

int main()
{
	int UserChoice;

	printf("Welcome, what would you like to do?\nEnter 1 to save a new contact\nEnter 0 to search for a contact\n");
	scanf("%d", &UserChoice); //requesting input from the user
       if (UserChoice == 1 || UserChoice == 0)
       {
	       if (UserChoice == 1)
	       {
			printf("Enter the informations you would like to save\n");
			//Allocating a memory to store user data
			ptr = (struct contact *)malloc(sizeof(struct contact));
			printf("Enter your Full name\n");
			scanf("%s", ptr->name);
			printf("Enter your Email\n");
			scanf("%s", ptr->email);
			printf("Enter your Phone number\n");
			scanf("%s", ptr->num);
			printf("Enter your Location\n");
			scanf("%s", ptr->location);
			
			printf("Contact saved.\nWould you like to retrieve your details?\nYes/No\n");
			char ch[10], yes[]="Yes", no[]="No";
			scanf("%s", &ch);
			if ((strcmp(ch, yes)==0) || (strcmp(ch, no)==0))
			{
				if (strcmp(ch, yes)==0)
				{
					printf("%s\n%s\n%s\n%s\n", ptr->name, ptr->email, ptr->num, ptr->location);
				}
				else
				{
					printf("Alright, Goodbye.");
				}
			}
			else
			{
				printf("Please enter Yes or No");
			}

		}
	       else
		{
	       printf("Enter the first name of the contact you are looking for\n");
	       char cm[10];
	       scanf("%s", &cm);
			if ((strcmp(cm, "Caleb")==0) || (strcmp(cm, "Ruth")==0))
			{
				printf("%s\n%s\n%s\n%s\n", ptr->name, ptr->email, ptr->num, ptr->location);
			}
		}
       }
       else
       {
	       printf("Sorry\nEnter 1 - Save a new contact\nEnter 0 - Search for a contact");
       }
}
