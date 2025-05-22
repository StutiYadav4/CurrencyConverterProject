#include <stdio.h>
#include <string.h>

// this array consists of the exchange rates
float exchange_rates[10] = {0.01207, 0.04434, 0.009421, 0.01103, 1.785, 0.4301, 0.01823, 0.01626, 1.105, 0.01062};
// this array consists of all the currency options
char* currencies[10] = {"U.S Dollar", "UAE Dirhams", "Pound Sterling", "Euros", "Japanese Yen", "Thai Baht", "Australian Dollars", "Canadian Dollars", "Russian Rubles", "Swiss Francs"};

// a menu is made for the user to choose from
void menu() {
    printf("Select the conversion of your choice!\n\n");
    printf("1. Indian Rupee to U.S Dollar\n");
    printf("2. Indian Rupee to UAE Dirhams\n");
    printf("3. Indian Rupee to Pound Sterling\n");
    printf("4. Indian Rupee to Euros\n");
    printf("5. Indian Rupee to Japanese Yen\n");
    printf("6. Indian Rupee to Thai Baht\n");
    printf("7. Indian Rupee to Australian Dollars\n");
    printf("8. Indian Rupee to Canadian Dollars\n");
    printf("9. Indian Rupee to Russian Rubles\n");
    printf("10. Indian Rupee to Swiss Francs\n\n");
}

// a function for the conversion from one currency to another
void convert_currency(int choice) {
    float amount1,amount2;
    if (choice >= 1 && choice <= 10) {
        printf("Enter the amount of money in INR: ");
        scanf("%f", &amount1);
        float amount2 = amount1 * exchange_rates[choice - 1];
        printf("The converted amount in %s is: %.4f\n\n", currencies[choice - 1], amount2);
    }
    else {
        printf("Please enter a valid menu option.\n\n");
    }
    printf("****************************************************************\n");
    
    
}

int main() {
    printf("------------------------CURRENCY CONVERTER-------------------------\n\n");
    printf("Hello!!\n\nPlease choose any renowned currency conversion from below.\n\n");
    int choice,leave;
    leave=1;
    while (leave==1){
        menu();
        printf("Which option did you choose for:");
        scanf("%d", &choice);
        convert_currency(choice);
        printf("\n\nDo you want to continue?(yes=1/no=0)\n");
        scanf("%d",&leave);
    }
    if (leave==0){
        printf("Thank you for visiting!!");
    }
    return 0;
}