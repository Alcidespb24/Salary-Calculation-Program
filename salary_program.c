#include<stdio.h>
void main (void){
	char code;
	float basicSalary;
	float houseAllowance,medicalAllowance,milageAllowance,utilitiesAllowance;
	float grossSalary,taxRate,taxAmount,netSalary;

	printf("Insert a designation code: ");
	scanf(" %c", &code);
	printf("\n");
	printf("SALARY INFORMATION\n");
	printf("===================\n");
	switch(code){
		case 'C':basicSalary=5000;break;
		case 'D':basicSalary=4800;break;
		case 'M':basicSalary=3950;break;
		case 'S':basicSalary=3100;break;
		case 'T':basicSalary=2800;break;
		case 'R':basicSalary=1450;break;
		case 'B':basicSalary=1770;break;
		default:
			printf("You have selected an Invalid code");
	}
	houseAllowance=basicSalary*0.25;
	medicalAllowance=basicSalary*0.085;
	milageAllowance=basicSalary*0.037;
	utilitiesAllowance=basicSalary*0.072;

	grossSalary=basicSalary+houseAllowance+medicalAllowance+milageAllowance+utilitiesAllowance;
	if(grossSalary>5500)taxRate=0.14;
	else if(grossSalary>5000)taxRate=0.10;
	else if(grossSalary>4500)taxRate=0.08;
	else if(grossSalary>4000)taxRate=0.06;

	taxAmount=grossSalary*taxRate;
	netSalary=grossSalary-taxAmount;

	printf("Basic Salary: $%.2f\n",basicSalary);
	printf("House Rent Allowance: $%.2f\n",houseAllowance);
	printf("Medical Allowance: $%.2f\n",medicalAllowance);
	printf("Monthly Milage Allowance: $%.2f\n",milageAllowance);
	printf("Utilities Allowance: $%.2f\n",utilitiesAllowance);
	printf("Gross Salary: $%.2f\n",grossSalary);
	printf("Income Tax: $%.2f\n",taxAmount);
	printf("Net Payable Salary: $%.2f\n",netSalary);
}
