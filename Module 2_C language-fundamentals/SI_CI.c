//find the simple interest and compound interest.

#include<stdio.h>
#include<math.h>
int main()

{
	float SI,p,r,t,CI,Amount;
	printf("Enter principal value : ");
	scanf("%f",&p);
	printf("\nEnter Rate of interest in percent : ");
	scanf("%f",&r);
	printf("\nEnter Time in year : ");
	scanf("%f",&t);
	SI=(p*r*t)/100;
	printf("Simple Interest = %f\n", SI);
	Amount=p*(pow(1+(r/100),t));
    CI=Amount-p;
	printf("Compound Interest = %f\n",CI);
	return 0;
}
