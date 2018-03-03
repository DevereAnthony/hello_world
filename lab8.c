/* This program will iput and store meteorological data into an array
 * Developer: Devere Anthony 
 * Date: 2 March 2018 */

#define NUMMONTHS 12
#define NUMYEARS 5
#include <stdio.h>

// Function prototype
void inputdata();
void printdata();
float sumdata();

// Global variables available to all functions 
float Raindata[NUMYEARS][NUMMONTHS];
float Winddata[NUMYEARS][NUMMONTHS];
char years[NUMYEARS][5] = {"2011", "2012", "2013", "2014", "2015"};
char months[NUMMONTHS][12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
float sum2011 = 0, sum2012 = 0, sum2013 = 0, sum2014 = 0, sum2015 = 0; 

int main ()
{
	char enterData = 'y'; 
	printf("Do you want to input Precipatation data? (y for yes)\n");
	scanf("%c", &enterData);
	if (enterData == 'y') {
		// Call function to Input Data
		inputdata();

		// Call funtion to Display Data
		printdata();

		// Call funtion to add data
		sumdata();	
	}
	else {
		printf("No data was input at this time\n");
	}
	printf("\nPlease try the Precipitation program again.\n"); 
	return 0;
}

// Function Definitions 
// Function to inputdata
void inputdata()
{
	/* variable definition */ 
	float Rain = 1.0;
	float Wind = 1.0;
	// Input data
	for (int year = 0; year < NUMYEARS; year++){
		for (int month = 0; month < NUMMONTHS; month++){
		printf("Enter rain for %d, %d:\n", year+1, month+1);
		scanf("%f", &Rain);
		printf("Enter windspeed for %d, %d:\n", year+1, month+1);
		scanf("%f", &Wind);
		Raindata[year][month] = Rain;
		Winddata[year][month] = Wind;	
		}
	}
}

//Function to printdata
void printdata(){
	// Print data 
	printf("year\t month\t rain\t wind\n");
	for (int year = 0; year < NUMYEARS; year++){
		for (int month = 0; month < NUMMONTHS; month++){
			printf("%s\t %s\t %5.2f %5.2f\n", years[year], months[month], Raindata[year][month], Winddata[year][month]);
		}
	}
}

// Function to add all data
float windspeed2011 = 0.0, windspeed2012 = 0.0, windspeed2013 = 0.0, windspeed2014 = 0.0, windspeed2015 = 0.0;  
float sumdata() {
	for (int year = 0; year < NUMYEARS; year++){
		for (int month = 0; month < NUMMONTHS; month++){
			if (year == 0){
				sum2011 = sum2011 + Raindata[year][month];
				windspeed2011 = windspeed2011 + Winddata[year][month];
			}
			else if (year == 1){
				sum2012 = sum2012 + Raindata[year][month];
				windspeed2012 = windspeed2012 + Winddata[year][month];
			}
			else if (year == 2){
				sum2013 = sum2013 + Raindata[year][month];
				windspeed2013 = windspeed2013 + Winddata[year][month];
			}
			else if (year == 3){
				sum2014 = sum2014 + Raindata[year][month];
				windspeed2014 = windspeed2014 + Winddata[year][month];
			}
			else if (year == 4){
				sum2015 = sum2015 + Raindata[year][month];
				windspeed2015 = windspeed2015 + Winddata[year][month];
			}
			       	
		}
	}
	printf("\nSum of rainfall.\n");
	printf("2011: %.2fin.\n2012: %.2fin.\n2013: %.2fin.\n2014: %.2fin.\n2015: %.2fin.\n", sum2011, sum2012, sum2013, sum2014, sum2015);
	printf("\nSum of windspeed.\n");
	printf("2011: %.2fmph\n2012: %.2fmph\n2013: %.2fmph\n2014: %.2fmph\n2015: %.2fmph\n", windspeed2011, windspeed2012, windspeed2013, windspeed2014, windspeed2015);
	
}
