#include<stdio.h>

main()
{
  double dblSine, dblTerm, dblX, dblZ;
  int intK, i, flag;
  char ch;

  do{
    do{                         /* inner do-while loop begins */
      flag=0;
      printf("Enter angle in radius (-1<=X<=1):");
      scanf("%lf",&dblX);
      if((dblX<-1)||(dblX>1))
        flag=1;
    }while(flag);             /* inner do-while loop ends */

    dblTerm= dblX;
    dblSine= dblX;
    intK=1;
    dblZ= dblX*dblX;

    for(i=1; i<=10; i++){
      intK= intK+2;
      dblTerm= -dblTerm*dblZ/(intK*(intK-1));
      dblSine= dblSine+dblTerm;
    }

    printf("Sine of %lf is %lf\n",dblX,dblSine);
    printf("Do you want to continue?(y/n):");
    scanf(" %c",&ch);
  }while((ch=='y')||(ch=='Y')); /* outer do-while ends */

  printf("Thank you.\n");
  return(0);
}
