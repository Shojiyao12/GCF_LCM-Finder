/*Programmer's Block
Program Name: MP1A
Developer and Date of Submission: Shaw Jie Yao, October 07, 2021
Description of the program: Finds the factors of the two inputted non-zero positive numbers and provides the GCF or LCM of those numbers which are displayed on a menu.
*/

#include <stdio.h>

int main(void){
  long int n1, n2, f1, f2, GCF, gcf, LCM, lcm;
  int hasFactor = 0, hasFactor2 = 0;
  char choice;

  do {
    printf("\n\nNUMBER MANIPULATION");
    printf("\n A.GCF");
    printf("\n B.LCM");
    printf("\n C.Exit");
    printf("\nEnter your choice: ");
    scanf(" %c", &choice);

    switch (choice) {
      case 'A':
      case 'a':
          printf("Enter the first number: ");
          scanf("%ld", &n1);
          printf("Enter the second number: ");
          scanf("%ld", &n2);

          if(n1 < 100000001L && n2 < 100000001L) {
            printf ("\nFACTORS of\n %ld: ", n1);

            for(f1 = 1; f1 <= n1; f1++) {
              if(n1%f1 == 0) {
                if(hasFactor == 1) {
                  printf(", ");
                }
                printf("%ld", f1);
                hasFactor = 1;
              }
            }
            printf ("\n %ld: ", n2);

            for(f2 = 1; f2 <= n2; f2++) {
              if(n2%f2 == 0) {
                if(hasFactor2 == 1) {
                  printf(", ");
                }
                printf("%ld", f2);
                hasFactor2 = 1;
              }
            }

            hasFactor = 0;
	    hasFactor2 = 0;

            for(gcf = n1; gcf >= 1; gcf--) {
              if(n1%gcf == 0 && n2%gcf == 0) {
                GCF = gcf;
                break;
              }
            }
            printf("\nGCF = %ld", GCF);
          }
          break;

      case 'B':
      case 'b':
          printf("Enter the first number: ");
          scanf("%ld", &n1);
          printf("Enter the second number: ");
          scanf("%ld", &n2);

          if(n1 < 100000001L && n2 < 100000001L) {
            printf ("\nFACTORS of\n %ld: ", n1);

            for(f1 = 1; f1 <= n1; f1++) {
              if(n1%f1 == 0) {
                if(hasFactor == 1) {
                  printf(", ");
                }
                printf("%ld", f1);
                hasFactor = 1;
              }
            }
            printf ("\n %ld: ", n2);

            for(f2 = 1; f2 <= n2; f2++) {
              if(n2%f2 == 0) {
                if(hasFactor2 == 1) {
                  printf(", ");
                }
                printf("%ld", f2);
                hasFactor2 = 1;
              }
            }

            hasFactor = 0;
	    hasFactor2 = 0;

            lcm = (n1 > n2) ? n1 : n2;
	    LCM = lcm;

            for (;;) {
              if (LCM % n1 == 0 && LCM % n2 == 0) {
                break;
	      }
	      LCM += lcm;
            }
	    printf("\nLCM = %ld", LCM);
          }
          break;

      case 'C':
      case 'c':
          printf("\nThank You for using Number Manipulation!");
          break;

      default:
	  printf("\nEnter Valid Choice (A, B, C) only.");

    }
  }
  while (choice != 'C' && choice != 'c');

  return 0;
}
