/* 此程序以交互方式生成N个斐波那契数。  */

#include <stdio.h>

int main()
{
  int intN, intK, flag;
  long int lngA, lngB, lngC;
  char ch;

  do{
    do{
      flag=0;
      printf("Please input a number N (1<=N<=45):\n");
      scanf("%d",&intN);
      if( (intN<1)||(intN>45) ) flag=1;
    }while(flag);

    lngA=0;
    lngB=1;
    for(intK=1; intK<= intN; intK++){
      if(intK==1) printf("the 1st fab number is: %ld\n",lngA);
      else if(intK==2) printf("the second fab number is: %ld\n",lngB);
      else{
        printf("the %dth fab number is: %ld\n",intK,lngA+lngB);
        lngC= lngA+lngB;
        lngA= lngB;
        lngB= lngC;
      }
    }
    printf("Do you want to continue? (Y/N): ");
    scanf(" %c",&ch);
  }while((ch=='y')||(ch=='Y'));
  printf("thank you.\n");
  return(0);
}
