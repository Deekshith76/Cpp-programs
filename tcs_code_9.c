/* FULLY AUTOMATIC VENDING MACHINE – dispenses your cuppa on just press of button. A vending machine can serve range of products as follows:

Coffee

    Espresso Coffee
    Cappuccino Coffee
    Latte Coffee

Tea

    Plain Tea
    Assam Tea
    Ginger Tea
    Cardamom Tea
    Masala Tea
    Lemon Tea
    Green Tea
    Organic Darjeeling Tea

Soups 

    Hot and Sour Soup
    Veg Corn Soup
    Tomato Soup
    Spicy Tomato Soup

Beverages

    Hot Chocolate Drink
    Badam Drink
    Badam-Pista Drink

Write a program to take input for main menu & sub menu and display the name of sub menu selected in the following format (enter the first letter to select main menu):

Welcome to CCD 

Enjoy your

Example 1:

    Input:
        c
        1
    Output
        Welcome to CCD!
        Enjoy your Espresso Coffee!

Example 2:

    Input
        t
        9
    Output
        INVALID OUTPUT! */
        
#include <stdio.h>
#include <ctype.h> // for tolower(), toupper()

int main(void){

    char c[3][25] = {"Espresso Coffee", "Cappuccino Coffee", "Latte Coffee"};
    char t[8][25] = {"Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea", "Masala Tea", "Lemon Tea", "Green Tea", "Organic Darjeeling Tea"};

    char s[4][25]={"Hot and Sour Soup","Veg Corn Soup","Tomato Soup","Spicy Tomato Soup"};

    char b[3][25]={"Hot Chocolate Drink","Badam Drink","Badam-Pista Drink"};
    char ch;
    int item ,i;
    scanf("%c", &ch);
    scanf("%d", &item);
    
    // Coffee
    if (tolower(ch) == 'c'){

        for(i=0; i<3; i++){
            if(item == i+1){
                printf("Welcome to CCD\nEnjoy your %s!\n", c[i]);
                break;
            }
        }
                        
        if (i == 3){
            printf("INVALID OPTION!\n");
        }

    }
    
    // Tea
    if (tolower(ch)=='t'){
    for (i = 0; i<8; i++){
        if (item == i+1){
                printf("Welcome to CCD\nEnjoy your %s!\n", t[i]);   
                break;
        }
    }
    if (i == 8){
        printf("INVALID OPTION!\n");
    }
    }
    
    // Soups
  if (tolower(ch)=='s'){
    for (i = 0; i<4; i++){
        if (item == i+1){
                printf("Welcome to CCD\nEnjoy your %s!\n", s[i]);   
                break;
        }
    }
    if (i == 4){
        printf("INVALID OPTION!\n");
    }
    }
    
    //Beverages
   if (tolower(ch)=='b'){
    for (i = 0; i<3; i++){
        if (item == i+1){
                printf("Welcome to CCD\nEnjoy your %s!\n", t[i]);   
                break;
        }
    }
    if (i == 3){
        printf("INVALID OPTION!\n");
    }
    }
}
