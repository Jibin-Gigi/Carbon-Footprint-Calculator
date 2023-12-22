//This was built in the starting stage.The estimated value maybe wrong

#include<stdio.h>

void main() {
    int electricBill, gasBill, oilBill, carMileage, shortFlights, longFlights, newspaper, aluminumAndTin;
    char recycle;

    printf("Enter your monthly electric bill: ");
    scanf("%d", &electricBill);

    printf("Enter your monthly gas bill (Enter 0 if you don't use gas): ");
    scanf("%d", &gasBill);

    printf("Enter total yearly mileage of your car: ");
    scanf("%d", &carMileage);

    printf("Enter your monthly oil bill (Enter 0 if you don't use oil): ");
    scanf("%d", &oilBill);

    printf("Enter no. of short flights (less than 4 hours) you have taken in the past year: ");
    scanf("%d", &shortFlights);

    printf("Enter the no. of long flights (4 hrs or more) you have taken in the past year: ");
    scanf("%d", &longFlights);

    printf("Do you recycle newspaper (y/n): ");
    scanf(" %c", &recycle);
    newspaper = (recycle == 'n') ? 184 : 0;

    printf("Do you recycle aluminium or tin (y/n): ");
    scanf(" %c", &recycle);
    aluminumAndTin = (recycle == 'n') ? 166 : 0;

    double electricEmissionFactor = 0.42; 
    double gasEmissionFactor = 2.20; 
    double oilEmissionFactor = 2.31; 
    double carEmissionFactor = 0.79; 
    double shortFlightEmissionFactor = 0.25; 
    double longFlightEmissionFactor = 1.00; 

    double totalCarbonFootprint = electricBill * electricEmissionFactor +
                                 gasBill * gasEmissionFactor +
                                 oilBill * oilEmissionFactor +
                                 carMileage * carEmissionFactor +
                                 shortFlights * shortFlightEmissionFactor +
                                 longFlights * longFlightEmissionFactor +
                                 newspaper + aluminumAndTin;
    printf("Your carbon footprint is: %.2f\n", totalCarbonFootprint);
}
