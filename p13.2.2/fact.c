#include <stdio.h>

int main()
{
  int intN, intCounter, flag;
  unsigned long int ulngFact;
  char ch;

  do{
    do{
      flag=0;
      printf("Enter a number (0<N<=12): ");
      scanf("%d",&intN);
      if((intN<=0)||(intN>12))
        flag=1;
    }while(flag);                       /* innter do-while loop ends */

    ulngFact=1;

    for(intCounter=1; intCounter<=intN; intCounter++){
      ulngFact= ulngFact* intCounter;
    }
    printf("Required facorial is: %lu\n", ulngFact);
    printf("Do you want to continue? (Y/N): ");
    scanf("%c",&ch);
  }while((ch=='y')||(ch=='Y'));         /* outer do-while loop ends */
  printf("Do you want to continue? (Y/N): ");

  printf("Thank you.\n");
  return(0);

}
