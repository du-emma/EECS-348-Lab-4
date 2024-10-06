/* Name: Emma Du
 * KUID: 3134852
 * Lab Session: Friday at 1pm with Toye
 * Lab Assignment: 04
 * Program Description: Program performs temperature conversions between Fahrenheit, Celsius, and Kelvin.
 * Program also categorizes temperatures into predefined ranges based on its value and provides a weather advisory
*/


#include <stdio.h>

// Convert temperature from Celsius to Fahrenheit
float celsius_to_farenheit(float celsius) {
    return((9.0/5.0) * (celsius)) + 32.0;
}


// Convert temperature from Celsius to Kelvin
float celsius_to_kelvin(float celsius) {
    return(celsius + 273.15);
}

// Convert temperature from Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit) {
    return(fahrenheit - 32.0) * (5.0/9.0);
}

// Convert temperature from Fahrenheit to Kelvin
float fahrenheit_to_kelvin(float fahrenheit) {
    return((fahrenheit - 32.0) * (5.0/9.0) + 273.15);
}

// Convert temperature from Kelvin to Celsius
float kelvin_to_celsius(float kelvin) {
    return(kelvin - 273.15);
}

// Convert temperature from Kelvin to Fahrenheit
float kelvin_to_fahrenheit(float kelvin) {
    return(kelvin - 273.15) * (9.0/5.0) + 32.0;
}

/*
 * Function that categorizes the temperature into “Freezing,” “Cold,” “Comfortable,”
 * “Hot,” or “Extreme Heat” based on the Celsius value, and provides an advisory message
 */
 void categorize_temperature(float celsius) {
    if(celsius < 0){
        printf("Temperature category: Freezing\nWeather advisory: Stay indoors\n");
    }else if(celsius >= 0 && celsius < 10) {
        printf("Temperature category: Cold\nWeather advisory: Wear a jacket\n");
    }else if(celsius >= 10 && celsius < 25) {
        printf("Temperature category: Comfortable\nWeather advisory: Enjoy the weather\n");
    }else if(celsius >= 25 && celsius < 35) {
        printf("Temperature category: Hot\nWeather advisory: Stay hydrated\n");
    }else {
        printf("Temperature category: Extreme Heat\nWeather advisory: Stay indoors\n");
    }
}

/*
 * Main function that takes in use input and call other functions to get job done.
 */
int main() {
    float temp;
    int current_choice;
    int converter;

    printf("Enter temperature: ");
    scanf("%f", &temp);
    printf("Choose the current scale (1)Celsius (2)Fahrenheit (3)Kelvin: ");
    scanf("%d", &current_choice);
    printf("Convert to (1)Celsius (2)Fahrenheit (3)Kelvin: ");
    scanf("%d", &converter);

    if (current_choice == 1){
        if (converter == 1){
            printf("Invalid conversion\n");
        }else if(converter == 2) {
            printf("Temperature in Fahrenheit: %.2f degrees Fahrenheit\n", celsius_to_farenheit(temp));
        }else if(converter == 3) {
            printf("Temperature in Kelvin: %.2f Kelvin\n", celsius_to_kelvin(temp));
        }else {
            printf("Invalid option, try again.\n");
        }
        categorize_temperature(temp);

    }else if (current_choice == 2){
        if (converter == 1){
            printf("Temperature in Celsius: %.2f degrees Celsius\n", fahrenheit_to_celsius(temp));
        }else if(converter == 2) {
            printf("Invalid conversion\n");
        }else if(converter == 3) {
            printf("Temperature in Kelvin: %.2f Kelvin\n", fahrenheit_to_kelvin(temp));
        }else {
            printf("Invalid option, try again.\n");
        }
        categorize_temperature(fahrenheit_to_celsius(temp));

    }else if (current_choice == 3){
        if (converter == 1){
            printf("Temperature in Celsius: %.2f degrees Celsius\n", kelvin_to_celsius(temp));
        }else if(converter == 2) {
            printf("Temperature in Fahrenheit: %.2f degrees Fahrenheit\n", kelvin_to_fahrenheit(temp));
            categorize_temperature(kelvin_to_fahrenheit(temp));
        }else if(converter == 3) {
            printf("Invalid conversion\n");
        }else {
            printf("Invalid option, try again.\n");
        }
        categorize_temperature(kelvin_to_celsius(temp));

    }
}