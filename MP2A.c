/*Programmer's Block
Program Name: MP2A
Developer and Date of Submission: Shaw Jie Yao, October 16, 2021
Description of the program: Finds the factors of the two inputted non-zero positive numbers and provides the GCF or LCM of those numbers which is displayed on a menu.     
*/

#include <stdio.h>

int main();
char MainMenu(void);
unsigned long long int FirstUserInput(char);
unsigned long long int SecondUserInput(char);
unsigned long long int GCF();
unsigned long long int LCM();


int main(){
char choice, CHOICE;
unsigned long long int N1, N2;
do{
choice = MainMenu();
switch (choice)
{
 case 'A': 
 case 'a':;
     N1 = FirstUserInput(choice);
     N2 = SecondUserInput(choice);
     GCF(N1, N2);
 break;
        
 case 'B':
 case 'b':;
     N1 = FirstUserInput(choice);
     N2 = SecondUserInput(choice);
     LCM(N1, N2);
 break;

 case 'C':
 case 'c':;
 printf("\nThank You for using Number Manipulation!");
 break;

 default:
 printf("\nEnter Valid Choice (A, B, C) only");}
}
 
 while (choice != 'C' && choice != 'c');
 return 0;
}


char MainMenu (){
  
  char CHOICE;
  printf("\n\nNUMBER MANIPULATION");
  printf("\n A.GCF");
  printf("\n B.LCM");
  printf("\n C.Exit");
  printf("\nEnter your choice:");
  scanf(" %c", &CHOICE);    
  
  return CHOICE;
}


unsigned long long int FirstUserInput(char CHOICE){

unsigned long long int N;
if (CHOICE == 'A')
{printf("Enter the first number:" );}
if (CHOICE == 'a')
{printf("Enter the first number:" );}
if (CHOICE == 'B')
{printf("Enter the first number:" );}
if (CHOICE == 'b')
{printf("Enter the first number:" );}
 scanf("%llu", &N);

return N;
}


unsigned long long int SecondUserInput(char CHOICE){

unsigned long long int N2;
if (CHOICE == 'A')
{printf("Enter the second number:" );}
if (CHOICE == 'a')
{printf("Enter the second number:" );}
if (CHOICE == 'B')
{printf("Enter the second number:" );}
if (CHOICE == 'b')
{printf("Enter the second number:" );}
 scanf("%llu", &N2);

return N2;
}


unsigned long long int GCF(unsigned long long int N1, unsigned long long int N2){

unsigned long long int n1, n2, f1, f2, GCF, gcf;
if(N1 < 100000001 && N2 < 100000001){
   n1 = N1, n2 = N2;
   printf("\nFACTORS of\n %llu: ", n1);
   for(f1 = 1; f1 <= n1; f1++)
      {
       if(n1%f1 == 0)
      {
         printf("%llu", f1);
      }
       if(f1<n1 && n1%f1==0)
         {
          printf(",");
         }
      }
         printf("\n %llu: ", n2);
   for(f2 = 1; f2 <= n2; f2++)
      {
       if(n2%f2 == 0)
      {
         printf("%llu", f2);
      }
       if(f2<n2 && n2%f2==0)
         {
          printf(",");
         }
      }
   for(gcf = 1; gcf <= n1; gcf++)
      {
       if(N1%gcf == 0 && N2%gcf == 0)
       {
       GCF = gcf;
       }
      }
      printf("\nGCF = %llu", GCF);}
}


unsigned long long int LCM(unsigned long long int N1, unsigned long long int N2){

unsigned long long int  n1, n2, f1, f2, gcf, LCM;
if(N1 < 100000001 && N2 < 100000001){
   n1 = N1, n2 = N2;
   printf("\nFACTORS of\n %llu: ", n1);
   for(f1 = 1; f1 <= n1; f1++)
      {
       if(n1%f1 == 0)
      {
        printf("%llu", f1);
      }
      if(f1<n1 && n1%f1==0)
       {
         printf(",");
       }
      }
         printf("\n %llu: ", n2);
   for(f2 = 1; f2 <= n2; f2++)
      {
       if(n2%f2 == 0)
       {
         printf("%llu", f2);
       }
        if(f2<n2 && n2%f2==0)
         {
          printf(",");
         }
      }
   for (gcf = 1; gcf <= n1; gcf++)
      {
       if(N1%gcf == 0 && N2%gcf == 0)
       {
       LCM = (N1*N2) / gcf;
       }
      }
      printf("\nLCM = %llu", LCM);}
}