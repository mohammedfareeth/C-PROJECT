#include <stdio.h>

void menu_std(void)
{

	printf(" _______________________________________\n");
	printf("|     **** STUDENT RECORD MENU ****    	|\n");
	printf("|---------------------------------------|\n");
	printf("| a/A : Add New Record             	|\n");
	printf("| d/D : Delete a Record            	|\n");
	printf("| s/S : Show the List              	|\n");
	printf("| m/M : Modify a Record            	|\n");
	printf("| v/V : Save the List              	|\n");
	printf("| e/E : Exit                       	|\n");
	printf("| t/T : Sort the List              	|\n");
	printf("| l/L : Delete all the records     	|\n");
	printf("| r/R : Reverse the List      	   	|\n");
	printf("|                                  	|\n");
	printf("|_______________________________________|\n");
}
void menudel_std(void)
{
   printf(" ___________________________\n");
   printf("| R/r: enter roll to del    |\n");
   printf("| N/n: enter name to del    |\n");
   printf("|___________________________|\n");
}
void menusea_std(void)
{   
   printf(" ________________________________________________\n");
   printf("| Enter which record to search for modification  |\n");
   printf("| R/r: to search a rollno                        |\n");
   printf("| N/n: to search a name                          |\n");
   printf("| P/p: percentage based                          |\n");
   printf("|________________________________________________|\n");
}
void menumod_std(void)
{   
   printf(" __________________________________________________\n");
   printf("| Do you want to modify name or percentage or both |\n");
   printf("| N/n: enter to modify the name                    |\n");
   printf("| P/p: enter to modify the percentage              |\n");
   printf("| B/b: enther to modify name and percentage        |\n");
   printf("|__________________________________________________|\n");
}

void menuexit_std(void)
{
	
   printf(" ___________________________\n");
   printf("| Enter                     |\n");
   printf("| S/s: save and exit        |\n");
   printf("| E/e: exit without saving  |\n");
   printf("|___________________________|\n");
}
void menusort_std(void)
{
	
   printf(" ___________________________\n");
   printf("| N/n: sort with name       |\n");
   printf("| P/p: sort with percentage |\n");
   printf("|___________________________|\n");
}
