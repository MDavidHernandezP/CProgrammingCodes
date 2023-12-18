#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
    int quantity;
    int next;
};

struct Product* createProduct(const char* name, float price, int quantity) {
    struct Product* newProduct = (struct Product*)malloc(sizeof(struct Product));
    strcpy(newProduct->name, name);
    newProduct->price = price;
    newProduct->quantity = quantity;
    newProduct->next = -1;
    return newProduct;
}

void deleteProduct(struct Product* product) {
    free(product);
}

void printProductInfo(const struct Product* product) {
    printf("\nProduct Information:\n");
    printf("Name: %s\n", product->name);
    printf("Price: %.2f\n", product->price);
    printf("Quantity in stock: %d\n", product->quantity);
}

void printProductList(const struct Product* products, const int* nextIndex) {
    printf("\nProduct List:\n");
    int current = nextIndex[0];
    while (current != -1) {
        printf("Name: %s | Price: %.2f | Quantity: %d\n", products[current].name, products[current].price, products[current].quantity);
        current = nextIndex[current];
    }
}

void createNewProduct(struct Product* products, int* nextIndex, int* size, int* capacity) {
    printf("\nYou selected to create a new product.\n");

    if (*size == *capacity) {
        *capacity *= 2;
        products = (struct Product*)realloc(products, (*capacity) * sizeof(struct Product));
        nextIndex = (int*)realloc(nextIndex, (*capacity) * sizeof(int));
    }

    char name[50];
    float price;
    int quantity;

    printf("Enter the name of the new product: ");
    scanf(" %[^\n]", name);

    printf("Enter the price of the new product: ");
    scanf("%f", &price);

    printf("Enter the quantity in stock of the new product: ");
    scanf("%d", &quantity);

    int newIndex = *size;
    products[newIndex] = *createProduct(name, price, quantity);
    nextIndex[newIndex] = nextIndex[0];
    nextIndex[0] = newIndex;
    (*size)++;

    // Commenting out the printProductList call to remove the display after creating a new product.
    // printProductList(products, nextIndex);
}

void readProductInfo(const struct Product* products, const int* nextIndex) {
    printf("\nYou selected to read stock and price of a product.\n");
    printf("Enter the product name: ");
    char productName[50];
    scanf(" %[^\n]", productName);

    int current = 0;
    int found = 0;

    while (current != -1) {
        if (strcmp(products[current].name, productName) == 0) {
            printProductInfo(&products[current]);
            found = 1;
            break;
        }
        current = nextIndex[current];
    }

    if (!found) {
        printf("Product not found.\n");
    }
}

void updateProductStock(struct Product* products, const int* nextIndex) {
    printf("\nYou selected to update the stock of a product.\n");
    printf("Enter the product name: ");
    char productName[50];
    scanf(" %[^\n]", productName);

    int current = 0;
    int found = 0;

    while (current != -1) {
        if (strcmp(products[current].name, productName) == 0) {
            int soldQuantity;
            printf("Enter the quantity sold of the product: ");
            scanf("%d", &soldQuantity);

            if (soldQuantity <= products[current].quantity) {
                products[current].quantity -= soldQuantity;
                printf("Sale made. Stock updated.\n");
            } else {
                printf("Not enough stock to complete the sale.\n");
            }
            found = 1;
            break;
        }
        current = nextIndex[current];
    }

    if (!found) {
        printf("Product not found.\n");
    }
}

void deleteProductOption(struct Product* products, int* nextIndex) {
    printf("\nYou selected to delete a product.\n");
    printf("Enter the product name: ");
    char productName[50];
    scanf(" %[^\n]", productName);

    int current = 0;
    int prev = -1;
    int found = 0;

    while (current != -1) {
        if (strcmp(products[current].name, productName) == 0) {
            if (prev == -1) {
                nextIndex[0] = nextIndex[current];
            } else {
                nextIndex[prev] = nextIndex[current];
            }
            deleteProduct(&products[current]);
            printf("Product deleted successfully.\n");
            found = 1;
            break;
        }
        prev = current;
        current = nextIndex[current];
    }

    if (!found) {
        printf("Product not found.\n");
    }
}

int main() {
    struct Product* products = NULL;
    int* nextIndex = NULL;
    int capacity = 5;
    int size = 0;

    products = (struct Product*)malloc(capacity * sizeof(struct Product));
    nextIndex = (int*)malloc(capacity * sizeof(int));

    nextIndex[0] = -1;

    products[0] = *createProduct("CocaCola", 30, 10);
    nextIndex[0] = 1;

    products[1] = *createProduct("Galletas", 13, 10);
    nextIndex[1] = 2;

    products[2] = *createProduct("Papas", 15, 10);
    nextIndex[2] = 3;

    products[3] = *createProduct("Andatti", 20, 10);
    nextIndex[3] = 4;

    products[4] = *createProduct("Chicles", 10, 10);
    nextIndex[4] = -1;

    printf("\nWelcome to the Corner Store system menu.");

    int repeat = 1;
    while (repeat == 1) {
        printf("\n\nWhat do you want to do?");
        printf("\nType 'create' if you want to create a new product.");
        printf("\nType 'read' if you want to read stock and price of a product.");
        printf("\nType 'update' if you want to update the stock of a product.");
        printf("\nType 'delete' if you want to delete a product.");
        printf("\nType 'finish' if you want to terminate the program.\n");

        char option[10];
        printf("Option: ");
        scanf("%s", option);

        if (strcmp(option, "create") == 0) {
            createNewProduct(products, nextIndex, &size, &capacity);
        } else if (strcmp(option, "read") == 0) {
            readProductInfo(products, nextIndex);
        } else if (strcmp(option, "update") == 0) {
            updateProductStock(products, nextIndex);
        } else if (strcmp(option, "delete") == 0) {
            deleteProductOption(products, nextIndex);
        } else if (strcmp(option, "finish") == 0) {
            printf("\nYou selected to terminate the program.\n");
            repeat = 0;
        } else {
            printf("\nInvalid option. Please select a valid option.\n");
        }
    }

    free(products);
    free(nextIndex);

    printf("\nThe system crashed\n");
    return 0;
}