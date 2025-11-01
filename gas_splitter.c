// GasSplitter
// This is a basic C program to split gasoline expenses among multiple people.
// It takes the total fuel cost and the number of participants as input,
// and calculates how much each person should contribute.


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char buffer[20];
	int km;
	printf("Welcome to GasSplitter. Please, enter total km: ");
       	fgets(buffer, sizeof(buffer), stdin);
	km = atoi(buffer);

	int travelers;
	printf("Please, enter number of travelers: ");
	fgets(buffer, sizeof(buffer), stdin);
	travelers = atoi(buffer);

	float gas_usage;
	printf("Please, enter average gas usage (l/100km): ");
	fgets(buffer, sizeof(buffer), stdin);
	gas_usage = atof(buffer);

	float gas_price;
	printf("Finally, enter gas price (€): ");
	fgets(buffer, sizeof(buffer), stdin);
	gas_price = atof(buffer);

	float total_price;
	float price_traveler;

	total_price = (float) km * (gas_usage / 100) * gas_price;
	price_traveler = total_price / (float) travelers;

	printf("Your trip total price is %.2f€, and the price per traveler is %.2f€.\nThank you for using GasSplitter. Safe travels!\n", total_price, price_traveler);
	
	return 0;
}

