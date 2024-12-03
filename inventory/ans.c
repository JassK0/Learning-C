#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for inventory items
typedef struct Item {
    char name[50];
    int quantity;
    float price;
    struct Item *next;
} Item;

// Function prototypes
Item *addItem(Item *head, char *name, int quantity, float price);
void displayInventory(Item *head);
void saveInventory(Item *head, const char *filename);

int main() {
    Item *inventory = NULL;
    int choice;
    char name[50];
    int quantity;
    float price;

    while (1) {
        printf("1. Add Item\n2. Display Inventory\n3. Save and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter name, quantity, and price: ");
            scanf("%s %d %f", name, &quantity, &price);
            inventory = addItem(inventory, name, quantity, price);
        } else if (choice == 2) {
            displayInventory(inventory);
        } else if (choice == 3) {
            saveInventory(inventory, "inventory.txt");
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Add a new item to the inventory
Item *addItem(Item *head, char *name, int quantity, float price) {
    Item *newItem = malloc(sizeof(Item));
    strcpy(newItem->name, name);
    newItem->quantity = quantity;
    newItem->price = price;
    newItem->next = head;
    return newItem;
}

// Display all items in the inventory
void displayInventory(Item *head) {
    Item *current = head;
    while (current != NULL) {
        printf("%s: %d units @ $%.2f each\n", current->name, current->quantity, current->price);
        current = current->next;
    }
}

// Save inventory to a file
void saveInventory(Item *head, const char *filename) {
    FILE *file = fopen(filename, "w");
    Item *current = head;
    while (current != NULL) {
        fprintf(file, "%s %d %.2f\n", current->name, current->quantity, current->price);
        current = current->next;
    }
    fclose(file);
}
