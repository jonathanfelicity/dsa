#include <stdio.h>

#define LENGHT_OF_ARRAY 10

// insertting item
void insertItem(int array[], int* size, int item) {
    if (*size >= LENGHT_OF_ARRAY) {
        printf("Array is full. Cannot insert item.\n");
        return;
    }

    // Add the item at the end of the array
    array[*size] = item;

    // Increment the size of the array
    (*size)++;
    printf("Item %d inserted into the array.\n", item);
}



// removing item from an array
void eraseElement(int arr[], int length, int index){
    if(index < 0 || index >= length){
        printf("Invalid array index\n");
        return;
    }
    
    // Rest of the code to remove the element at the given index
}

// inserting item to array
void removeItemAt(int array[], int* size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index %d. Cannot remove item.\n", index);
        return;
    }

    // Shift the elements after the index to the left
    for (int i = index; i < *size - 1; i++) {
        array[i] = array[i + 1];
    }

    // Decrement the size of the array
    (*size)--;
    printf("Item at index %d removed from the array.\n", index);
}


// updating item from an array
void update(int arr[], int index, int value){
    arr[index] = value;
    return;
}


// getting item from an array
void getElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        printf("Invalid array index\n");
        return;
    }

    printf("Element at index %d: %d\n", index, arr[index]);
}



int main(void){

    int nums[LENGHT_OF_ARRAY] = {1, 2, 3 ,4 ,5 ,6, 7, 8};


    getElement(nums, 8, 1);

    return 0;
}