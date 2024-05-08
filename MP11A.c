/*Programmer's Block
Program Name: MP1A
Developer and Date of Submission: Shaw Jie Yao, October 07, 2021
Description of the program: Finds the factors of the two inputted non-zero positive numbers and provides the GCF or LCM of those numbers which is displayed on a menu.     
*/

#include <stdio.h>
int main(void)
{
    unsigned long long int N1, n1, N2, n2, f1, f2, GCF, gcf, LCM;
    char choice;

    do {
    printf("\n\nNumber Manipulation:");
    printf("\nA.GCF");
    printf("\nB.LCM");
    printf("\nC.Exit");
    printf("\nEnter your choice:");
    scanf(" %c", &choice);

    switch (choice)
    {
        case 'A': 
        case 'a':
        printf("Enter the first number: ");
        scanf("%llu", &N1);
        printf("Enter the second number: ");
        scanf("%llu", &N2);
          if(N1 < 100000001 && N2 < 100000001)
            {
            n1 = N1, n2 = N2;
            printf ("FACTORS of\n%llu: ", n1);
        for (f1 = 1; f1 <= n1; f1++)
        {
          if(n1%f1 == 0)
        {
           printf ("%llu, ", f1);
        }
        }
           printf ("\n%llu: ", n2);
        for (f2 = 1; f2 <= n2; f2++)
        {
          if(n2%f2 == 0)
        {
           printf ("%llu, ", f2);
        }
        }
        for (gcf = 1; gcf <= n1; gcf++)
        {
          if(N1%gcf == 0 && N2%gcf == 0)
       {
         GCF = gcf;
       }
       }
        printf("\nGCF = %llu", GCF);
       }
       break;


    case 'B': 
    case 'b':
        printf("Enter the first number: ");
        scanf("%llu", &N1);
        printf("Enter the second number: ");
        scanf("%llu", &N2);
          if(N1 < 100000001 && N2 < 100000001)
            {
            n1 = N1, n2 = N2;
            printf ("FACTORS of\n%llu: ", n1);
        for (f1 = 1; f1 <= n1; f1++)
        {
          if(n1%f1 == 0)
        {
           printf ("%llu, ", f1);
        }
        }
           printf ("\n%llu: ", n2);
        for (f2 = 1; f2 <= n2; f2++)
        {
          if(n2%f2 == 0)
        {
           printf ("%d, ", f2);
        }
        }
        for (gcf = 1; gcf <= n1; gcf++)
        {
          if(N1%gcf == 0 && N2%gcf == 0)
       {
           GCF = gcf;
       }
       }
        LCM = (N1*N2) / GCF;
        printf("\nLCM = %llu", LCM);
        }   
    break;


    case 'C': 
    case 'c':
    printf("\nThank You for using Number Manipulation!");
    break;

    default:
    printf("\nEnter Valid Choice (A, B, C) only");

    }
    }
    
    while (choice != 'C' && choice != 'c');

    return 0;
}