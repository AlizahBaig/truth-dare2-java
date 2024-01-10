#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 1000

typedef struct Product {
    char name[50];
    float price;
    int quantity;
    char section[20];
    int totalPurchasedQty;  
} Product;

void printProducts(Product products[], int size, const char* selectedSection) {
    printf("+---------------+--------+---------------+---------------+\n");
    printf("| Product Name  |     Price    |  Available Qty |  Section       |\n");
    printf("+---------------+--------+---------------+---------------+\n");
    for (int i = 0; i < size; i++) {
        if (_stricmp(products[i].section, selectedSection) == 0) {
            printf("| %-13s | pkr %.2f    |  %-13d  |  %-13s |\n", products[i].name, products[i].price, products[i].quantity, products[i].section);
        }
    }
    printf("+---------------+--------+---------------+---------------+\n");
}

int main() {
         Product products[MAX_PRODUCTS] = {
        // Fruits
        {"Apple", 50, 20, "Fruits", 0},
        {"Banana", 30, 30, "Fruits", 0},
        {"Orange", 25, 10, "Fruits", 0},
        {"Grape", 70, 15, "Fruits", 0},
        {"Pear", 45, 25, "Fruits", 0},
        {"Pomegrante", 120, 20, "Fruits", 0},
        {"Guava", 120, 20, "Fruits", 0},
        {"Blueberry", 120, 20, "Fruits", 0},
        {"Raspberry", 120, 20, "Fruits", 0},
        {"Strawberry", 120, 20, "Fruits", 0},
       
        // Vegetables
        {"Carrot", 10, 18, "Vegetables", 0},
        {"Tomato", 35, 22, "Vegetables", 0},
        {"Potato", 8, 20, "Vegetables", 0},
        {"Onion", 10, 18, "Vegetables", 0},
        {"Spinnich", 35, 22, "Vegetables", 0},
        {"Corriander", 12, 20, "Vegetables", 0},
        {"Cucumber", 10, 18, "Vegetables", 0},
        {"Green onion", 35, 22, "Vegetables", 0},
        {"Mint", 12, 20, "Vegetables", 0},
        {"Pumpkin", 20, 11, "Vegetables", 0},
        {"Beetroot", 20, 11, "Vegetables", 0},
        {"Cauliflower", 20, 11, "Vegetables", 0},

        // Meat
        {"Chicken", 365, 12, "Meat", 0},
        {"Beef", 540, 10, "Meat", 0},
        {"Mutton", 1200, 10, "Meat", 0},
        {"Fish", 1000, 10, "Meat", 0},

        // Dairy
        {"Milk", 150, 30, "dairy", 0},
        {"Eggs", 200, 30, "dairy", 0},
        {"Cheese", 450, 30, "dairy", 0},
        {"Yogurt", 250, 30, "dairy", 0},

        // Condiments
        {"Ketchup", 300, 20, "condiments", 0},
        {"Mustard", 300, 20, "condiments", 0},
        {"Hot sauce", 300, 20, "condiments", 0},
        {"Mayo", 300, 20, "condiments", 0},
        {"Soy sauce", 300, 20, "condiments", 0},
        {"Maple syrup", 300, 20, "condiments", 0},
        {"Honey", 300, 20, "condiments", 0},
        {"Vinegar", 300, 20, "condiments", 0},

        // Spices
        {"Salt", 50, 50, "spices", 0},
        {"Pepper", 50, 50, "spices", 0},
        {"Red papper powder", 50, 50, "spices", 0},
        {"Crushed chilli", 50, 50, "spices", 0},
        {"Cinnamon", 50, 50, "spices", 0},
        {"Cumin", 50, 50, "spices", 0},
        {"Cardamon", 50, 50, "spices", 0},
        {"Cloves", 50, 50, "spices", 0},
        {"Saffron", 50, 50, "spices", 0},
        {"Thyme", 50, 50, "spices", 0},
        {"Oregano", 50, 50, "spices", 0},
        {"Fennel", 50, 50, "spices", 0},
        {"Rosemary", 50, 50, "spices", 0},

        // Haircare
        {"Shampoo", 450, 40, "Haircare", 0},
        {"Conditioner", 450, 40, "Haircare", 0},
        {"Hair serum", 1500, 40, "Haircare", 0},
        {"Hair oil", 50, 40, "Haircare", 0},
        {"Hair mask", 400, 40, "Haircare", 0},

        // Skin care
        {"Soap", 100, 30, "Skincare", 0},
        {"Facewash", 300, 30, "Skincare", 0},
        {"Moisturizer", 480, 30, "Skincare", 0},
        {"Serum", 1000, 30, "Skincare", 0},
        {"Sunscreen", 800, 30, "Skincare", 0},
        {"Body Lotion", 600, 30, "Skincare", 0},

        // Dental care
        {"Toothpaste", 200, 30, "Dentalcare", 0},
        {"Dental floss", 60, 30, "Dentalcare", 0},
        {"Toothbrush", 60, 30, "Dentalcare", 0},
        {"Mouth wash", 60, 30, "Dentalcare", 0},

       
    };

    int continueShopping = 1;
    float total = 0;

    while (continueShopping) {
        printf("\nWelcome to the Grocery Store System\n");
        printf("Select a section to shop from:\n");
        printf("1. Fruits\n");
        printf("2. Vegetables\n");
        printf("3. Meat\n");
        printf("4. Dairy\n");
        printf("5. Condiments\n");
        printf("6. Spices\n");
        printf("7. Haircare\n");
        printf("8. Skincare\n");
        printf("9. Dental care\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");

        int selectedSection = 0;
        if (scanf("%d", &selectedSection) != 1) {
            printf("Invalid input. Please enter a number.\n");
            continue;
        }

        if (selectedSection == 0) {
            continueShopping = 0;
            break;
        } else if (selectedSection >= 1 && selectedSection <= 10) {
            const char* sectionName = NULL;
            switch (selectedSection) {
                case 1:
                    sectionName = "Fruits";
                    break;
                case 2:
                    sectionName = "Vegetables";
                    break;
                case 3:
                    sectionName = "Meat";
                    break;
                case 4:
                    sectionName = "Dairy";
                    break;
                case 5:
                    sectionName = "Condiments";
                    break;
                case 6:
                    sectionName = "Spices";
                    break;
                case 7:
                    sectionName = "Haircare";
                    break;
                case 8:
                    sectionName = "Skincare";
                    break;
                case 9:
                    sectionName = "Dentalcare";
                    break;
            
            }
            if (sectionName != NULL) {
                printProducts(products, MAX_PRODUCTS, sectionName);

                float sectionTotal = 0;
                printf("\nEnter the quantity for each product (0 to skip):\n");
                for (int i = 0; i < MAX_PRODUCTS; i++) {
                    if (_stricmp(products[i].section, sectionName) == 0) {
                        int purchasedQty = 0;
                        while (1) {
                            printf("Enter quantity of %s: ", products[i].name);
                            if (scanf("%d", &purchasedQty) != 1) {
                                printf("Invalid input. Please enter a number.\n");
                                continue;
                            }

                            if (purchasedQty >= 0 && purchasedQty <= products[i].quantity) {
                                sectionTotal += products[i].price * purchasedQty;    
                                products[i].quantity -= purchasedQty;                          //update quantity
                                products[i].totalPurchasedQty += purchasedQty;  
                                total += products[i].price * purchasedQty;                     //total 
                                break;
                            } else {
                                printf("Invalid quantity. Please enter a quantity between 0 and %d.\n", products[i].quantity);
                            }
                        }
                    }
                }
                printf("Section Total: pkr %.2f\n", sectionTotal);
            }
        } else {
            printf("Invalid selection\n");
        }
    }

    printf("\n--- Receipt ---\n");
    printf("+---------------+--------+---------------+-----------+\n");
    printf("| Product Name  |   Price   |  Quantity  |   Total    |\n");
    printf("+---------------+--------+---------------+-----------+\n");
    
    for (int i = 0; i < MAX_PRODUCTS; i++) {
        if (products[i].totalPurchasedQty > 0) {
            printf("| %-13s | pkr %-4.2f | %-13d | pkr %-4.2f |\n", products[i].name, products[i].price, products[i].totalPurchasedQty, products[i].price * products[i].totalPurchasedQty);
            
        }
    }
    printf("+---------------+--------+---------------+--------+\n");
    printf("Total: Rupees %.2f\n", total);

    printf("Thank you for shopping with us!\n");
    return 0;
}