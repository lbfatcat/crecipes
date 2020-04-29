#include<stdio.h>

main()
{
  double dblCosine, dblX, dblZ;
  int i, j, flag, factorial, sign;
  char ch;

  do{               /* the outter layer do-while begins; */

    /* deal with input with a do-while loop */
    do{             /* the inner layer do-while ends; */
      flag=0;
      printf("Enter angle in radian (-1<= X <=1): ");
      scanf("%lf",&dblX);
      if((dblX<-1)||(dblX>1)){ /* invalid X input */
        flag=1;
      }
    }while(flag);   /* the inner layer do-while ends; */

    dblCosine=0;
    sign= -1;

    for(i=2; i<=10; i+=2){
      dblZ=1;
      factorial=1;
      for(j=1;j<=i;j++){
        dblZ= dblZ*dblX;
        factorial= factorial*j;
      }
      dblCosine += sign*dblZ/factorial;
      sign = -1*sign;
    }
    dblCosine= 1+dblCosine; // add the first term;

    printf("Cosine of %lf is %lf\n",dblX,dblCosine);
    printf("Do you want to continue?(y/n):");
    scanf(" %c",&ch);
  }while((ch=='y')||(ch=='Y'));         /* the outter layer do-while ends; */

  printf("Thank you.\n");
  return(0);
}
