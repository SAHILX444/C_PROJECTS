#include<stdio.h>
#include<math.h>

int main(){

    int choice;
    int count = 0;

    do{

        printf("\n====================================\n");
        printf("      SCIENTIFIC CALCULATOR\n");
        printf("====================================\n");

        printf("1. Arithmetic Operations\n");
        printf("2. Trigonometric Operations\n");
        printf("3. Exponential Operations\n");
        printf("4. Exit\n");

        printf("------------------------------------\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice){

        case 1: {

            float num1, num2;
            char symbol;

            printf("\n========== Arithmetic ==========\n");

            printf("Enter First Number  : ");
            scanf("%f", &num1);

            printf("Enter Second Number : ");
            scanf("%f", &num2);

            printf("\nAvailable Operations\n");
            printf("+  Addition\n");
            printf("-  Subtraction\n");
            printf("*  Multiplication\n");
            printf("/  Division\n");
            printf("%%  Modulus\n");

            printf("\nEnter Operation Symbol: ");
            scanf(" %c", &symbol);

            switch(symbol){

            case '+':
                printf("\nResult : %.2f + %.2f = %.2f\n",
                       num1, num2, num1 + num2);
                break;

            case '-':
                printf("\nResult : %.2f - %.2f = %.2f\n",
                       num1, num2, num1 - num2);
                break;

            case '*':
                printf("\nResult : %.2f * %.2f = %.2f\n",
                       num1, num2, num1 * num2);
                break;

            case '/':

                if(num2 == 0){
                    printf("\nDivision By Zero Not Possible\n");
                }
                else{
                    printf("\nResult : %.2f / %.2f = %.2f\n",
                           num1, num2, num1 / num2);
                }

                break;

            case '%': {

                int a = (int)num1;
                int b = (int)num2;

                if(b == 0){
                    printf("\nModulus By Zero Not Possible\n");
                }
                else{
                    printf("\nResult : %d %% %d = %d\n",
                           a, b, a % b);
                }

                break;
            }

            default:
                printf("\nInvalid Arithmetic Operation\n");
            }

            break;
        }

        case 2: {

            float num;
            float result;
            int input;

            printf("\n======== Trigonometry =========\n");

            printf("Enter Angle in Radians: ");
            scanf("%f", &num);

            printf("\n1. Sine\n");
            printf("2. Cosine\n");
            printf("3. Tangent\n");

            printf("\nEnter Choice: ");
            scanf("%d", &input);

            switch(input){

            case 1:

                result = sin(num);

                printf("\nSin(%.2f) = %.2f\n",
                       num, result);

                break;

            case 2:

                result = cos(num);

                printf("\nCos(%.2f) = %.2f\n",
                       num, result);

                break;

            case 3:

                result = tan(num);

                printf("\nTan(%.2f) = %.2f\n",
                       num, result);

                break;

            default:
                printf("\nInvalid Trigonometric Choice\n");
            }

            break;
        }

        case 3: {

            int point;
            float num3;
            float result1;

            printf("\n======== Exponential ==========\n");

            printf("1. Power\n");
            printf("2. Square Root\n");
            printf("3. Exponential\n");

            printf("\nEnter Your Choice: ");
            scanf("%d", &point);

            switch(point){

            case 1: {

                float base, power;

                printf("\nEnter Base  : ");
                scanf("%f", &base);

                printf("Enter Power : ");
                scanf("%f", &power);

                result1 = pow(base, power);

                printf("\n%.2f ^ %.2f = %.2f\n",
                       base, power, result1);

                break;
            }

            case 2:

                printf("\nEnter Number: ");
                scanf("%f", &num3);

                if(num3 < 0){
                    printf("\nSquare Root Of Negative Number Not Possible\n");
                }
                else{
                    result1 = sqrt(num3);

                    printf("\nSquare Root Of %.2f = %.2f\n",
                           num3, result1);
                }

                break;

            case 3:

                printf("\nEnter Number: ");
                scanf("%f", &num3);

                result1 = exp(num3);

                printf("\ne ^ %.2f = %.2f\n",
                       num3, result1);

                break;

            default:
                printf("\nInvalid Exponential Choice\n");
            }

            break;
        }

        case 4:

            printf("\n====================================\n");
            printf("     Exiting Calculator...\n");
            printf("====================================\n");

            count = 1;
            break;

        default:
            printf("\nInvalid Main Menu Choice\n");
        }

    } while(count == 0);

    return 0;
}