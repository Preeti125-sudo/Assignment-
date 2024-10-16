    #include<stdio.h>

int main()
{
int customer_id;
char customer_name[10];
float units_consumed;
float charges_per_unit;
float total_amount;
float surcharge;
float final_bill;
float total_bill;

printf("Enter the customer_id:");
scanf("%d"&customer_id);
printf("Enter the customer_name:");
scanf("%s"&customer_name);
printf("Enter the units_consumed:");
scanf("%f"&units_consumed);

    if(units_consumed<200){
    charges_per_unit =1.20;
    total_bill=charges_per_unit*units_consumed;
    printf(" the bill is %.2f\n",total_bill);
    }
     else if(units_consumed<400){
    charges_per_unit=1.50;
    total_bill =charges_per_unit*units_consumed;
    printf ("the bill is %.2f\n",total_bill);
    }
    else if (units_consumed<600){
    charges_per_unit =1.80;
    total_bill =charges_per_unit* units_consumed;
    printf ("the bill is %.2f\n",total_bill);
    }
    else{
    charges_per_unit =2.00;
    total_bill = units_consumed*charges_per_unit;
    printf("the bill is %.2f\n",total_bill);
    }
     if(total_bill>400){
      surcharge=total_bill*0.15;
    }
    else if(surcharge=0);{
    }    
    final_bill =total_bill+ surcharge;
    if(final_bill <100){
    printf ("final_bill:%.2f\n",final_bill);
    }
     
     printf("customer_id: %d\n",customer_id);
     printf("customer_name:%s\n",customer_name);
     printf("charges_per_unit: Kshs.%.2f\n",charges_per_unit);
     printf ("total_amount to pay:Kshs.%.2f\n",total_amount);
     
     return 0;
}