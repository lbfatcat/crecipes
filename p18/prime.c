#include<stdio.h>
#include<math.h>

int main()
{
  int flag, isPrime;
  long int lngN, lngM, i;

  do{
    /* the imput varification looop;
     * a valid long int between 2 and 2000000000
     */
    do{
      flag=0;
      printf("Enter 0 to discontinue.\n");
      printf("Enter a number N (2<=N<=2000000000)\n");
      printf("to find wheter it is prime or not: ");
      scanf("%ld",&lngN);

      if(lngN==0) break;
      if( (lngN<2)||(lngN>2000000000) )
        flag=1;
    }while(flag);

    if(lngN==0) break;
    if(lngN==2){
      printf("\n2 is a prime number\n\n");
      continue;
    }

    /* the iterative process to determine
     * whether a number is a prime number.
     */
    isPrime=1; // the default state is positive;
    lngM= ceil(sqrt(lngM));

    for(i=2; i<=lngM; i++){
      if( (lngN%i)==0 ){
        isPrime=0;
        break;
      }
    }

    if(isPrime)
      printf("\n%ld is a prime number\n\n",lngN);
    else
      printf("\n%ld is not a prime number\n\n",lngN);
  }while(1);

  printf("\n Thank you.\n");
  return(0);
  
}
