#include<stdio.h>
#include<math.h>

int main(){

    int choice;
    int count = 0;

    do{

        printf("\n========== UNIT CONVERTER ==========\n");
        printf("1. Length\n");
        printf("2. Weight\n");
        printf("3. Temperature\n");
        printf("4. Time\n");
        printf("5. Area\n");
        printf("6. Volume\n");
        printf("7. Speed\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

        case 1: {

            printf("\n----- Length Converter -----\n");

            float length;
            int length_choice;

            printf("Enter Length in Meters: ");
            scanf("%f", &length);

            printf("1. Meters to Millimeters\n");
            printf("2. Meters to Centimeters\n");
            printf("3. Meters to Kilometers\n");
            printf("4. Meters to Inches\n");
            printf("5. Meters to Feet\n");
            printf("6. Meters to Yards\n");
            printf("7. Meters to Miles\n");

            printf("Enter your choice: ");
            scanf("%d", &length_choice);

            switch(length_choice){

            case 1:
                printf("%.2f Meters = %.2f Millimeters\n", length, length * 1000);
                break;

            case 2:
                printf("%.2f Meters = %.2f Centimeters\n", length, length * 100);
                break;

            case 3:
                printf("%.2f Meters = %.2f Kilometers\n", length, length / 1000);
                break;

            case 4:
                printf("%.2f Meters = %.2f Inches\n", length, length * 39.3701);
                break;

            case 5:
                printf("%.2f Meters = %.2f Feet\n", length, length * 3.28084);
                break;

            case 6:
                printf("%.2f Meters = %.2f Yards\n", length, length * 1.09361);
                break;

            case 7:
                printf("%.2f Meters = %.2f Miles\n", length, length * 0.000621371);
                break;

            default:
                printf("Invalid Choice\n");
            }

            break;
        }

        case 2: {

            printf("\n----- Weight Converter -----\n");

            float weight;
            int weight_choice;

            printf("Enter Weight in Kilograms: ");
            scanf("%f", &weight);

            printf("1. Kilograms to Grams\n");
            printf("2. Kilograms to Milligrams\n");
            printf("3. Kilograms to Pounds\n");
            printf("4. Kilograms to Ounces\n");

            printf("Enter your choice: ");
            scanf("%d", &weight_choice);

            switch(weight_choice){

            case 1:
                printf("%.2f Kilograms = %.2f Grams\n", weight, weight * 1000);
                break;

            case 2:
                printf("%.2f Kilograms = %.2f Milligrams\n", weight, weight * 1000000);
                break;

            case 3:
                printf("%.2f Kilograms = %.2f Pounds\n", weight, weight * 2.20462);
                break;

            case 4:
                printf("%.2f Kilograms = %.2f Ounces\n", weight, weight * 35.274);
                break;

            default:
                printf("Invalid Choice\n");
            }

            break;
        }

        case 3: {

            printf("\n----- Temperature Converter -----\n");

            float temperature;
            int temperature_choice;

            printf("Enter Temperature in Celsius: ");
            scanf("%f", &temperature);

            printf("1. Celsius to Fahrenheit\n");
            printf("2. Celsius to Kelvin\n");

            printf("Enter your choice: ");
            scanf("%d", &temperature_choice);

            switch(temperature_choice){

            case 1:
                printf("%.2f Celsius = %.2f Fahrenheit\n",
                       temperature,
                       (temperature * 9 / 5) + 32);
                break;

            case 2:
                printf("%.2f Celsius = %.2f Kelvin\n",
                       temperature,
                       temperature + 273.15);
                break;

            default:
                printf("Invalid Choice\n");
            }

            break;
        }

        case 4: {

            printf("\n----- Time Converter -----\n");

            float time;
            int time_choice;

            printf("Enter Time in Seconds: ");
            scanf("%f", &time);

            printf("1. Seconds to Minutes\n");
            printf("2. Seconds to Hours\n");
            printf("3. Seconds to Days\n");
            printf("4. Seconds to Weeks\n");

            printf("Enter your choice: ");
            scanf("%d", &time_choice);

            switch(time_choice){

            case 1:
                printf("%.2f Seconds = %.2f Minutes\n", time, time / 60);
                break;

            case 2:
                printf("%.2f Seconds = %.2f Hours\n", time, time / 3600);
                break;

            case 3:
                printf("%.2f Seconds = %.2f Days\n", time, time / 86400);
                break;

            case 4:
                printf("%.2f Seconds = %.2f Weeks\n", time, time / 604800);
                break;

            default:
                printf("Invalid Choice\n");
            }

            break;
        }

        case 5: {

            printf("\n----- Area Converter -----\n");

            float area;
            int area_choice;

            printf("Enter Area in Square Meters: ");
            scanf("%f", &area);

            printf("1. Square Meters to Square Kilometers\n");
            printf("2. Square Meters to Square Feet\n");
            printf("3. Square Meters to Square Yards\n");
            printf("4. Square Meters to Square Miles\n");

            printf("Enter your choice: ");
            scanf("%d", &area_choice);

            switch(area_choice){

            case 1:
                printf("%.2f Square Meters = %.2f Square Kilometers\n",
                       area,
                       area / 1000000);
                break;

            case 2:
                printf("%.2f Square Meters = %.2f Square Feet\n",
                       area,
                       area * 10.7639);
                break;

            case 3:
                printf("%.2f Square Meters = %.2f Square Yards\n",
                       area,
                       area * 1.19599);
                break;

            case 4:
                printf("%.2f Square Meters = %.2f Square Miles\n",
                       area,
                       area * 3.861e-7);
                break;

            default:
                printf("Invalid Choice\n");
            }

            break;
        }

        case 6: {

            printf("\n----- Volume Converter -----\n");

            float volume;
            int volume_choice;

            printf("Enter Volume in Liters: ");
            scanf("%f", &volume);

            printf("1. Liters to Milliliters\n");
            printf("2. Liters to Cubic Meters\n");
            printf("3. Liters to Cubic Feet\n");
            printf("4. Liters to Cubic Inches\n");

            printf("Enter your choice: ");
            scanf("%d", &volume_choice);

            switch(volume_choice){

            case 1:
                printf("%.2f Liters = %.2f Milliliters\n",
                       volume,
                       volume * 1000);
                break;

            case 2:
                printf("%.2f Liters = %.2f Cubic Meters\n",
                       volume,
                       volume / 1000);
                break;

            case 3:
                printf("%.2f Liters = %.2f Cubic Feet\n",
                       volume,
                       volume * 0.0353147);
                break;

            case 4:
                printf("%.2f Liters = %.2f Cubic Inches\n",
                       volume,
                       volume * 61.0237);
                break;

            default:
                printf("Invalid Choice\n");
            }

            break;
        }

        case 7: {

            printf("\n----- Speed Converter -----\n");

            float speed;
            int speed_choice;

            printf("Enter Speed in Meters per Second: ");
            scanf("%f", &speed);

            printf("1. Meters/Second to Kilometers/Hour\n");
            printf("2. Meters/Second to Miles/Hour\n");
            printf("3. Meters/Second to Feet/Second\n");

            printf("Enter your choice: ");
            scanf("%d", &speed_choice);

            switch(speed_choice){

            case 1:
                printf("%.2f Meters/Second = %.2f Kilometers/Hour\n",
                       speed,
                       speed * 3.6);
                break;

            case 2:
                printf("%.2f Meters/Second = %.2f Miles/Hour\n",
                       speed,
                       speed * 2.23694);
                break;

            case 3:
                printf("%.2f Meters/Second = %.2f Feet/Second\n",
                       speed,
                       speed * 3.28084);
                break;

            default:
                printf("Invalid Choice\n");
            }

            break;
        }

        case 8:

            printf("\nExiting Program... Goodbye!\n");
            count = 1;
            break;

        default:
            printf("\nInvalid Main Menu Choice\n");
        }

    } while(count == 0);

    return 0;
}