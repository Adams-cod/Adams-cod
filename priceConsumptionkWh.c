#include <stdio.h>
int main()
{
    float currentValue,previousValue,price,totalPrice;
    //prompt user for current and previous electricity meter values in kWh
    printf("Enter the Current electricity meter values in kWh :\n");
    scanf("%f",&currentValue);
    printf("Enter the Previous electricity meter values in kWh :\n");
    scanf("%f",&previousValue);
    //prompt user to input Price per kWh
    printf("Enter the Price in shillings per kWh : \n");
    scanf("%f",&price);
    //calculate the total price for the consumption
    totalPrice=((previousValue-currentValue)*price);
    //Display the Total price for the current consumption
    printf("The total price for the consumption is %f shillings per kWh",totalPrice);

    return 0;
}
