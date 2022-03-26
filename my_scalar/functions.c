
#include <stdio.h>

void get_values(int vector1[], int vector2[],int vectorLength);
void get_vector(int vector[], int vectorLength);
int scalar_product(int vector1[],int vector2[],int vectorLength);
void print_scalar_product(int vector1[],int vector2[],int vectorLength);
int get_vectors_length();


/**
 * @brief The function get all the values that we need to calculate the scalar product and in the end print the scalar product
 * 
 * @param vector1 The first vector
 * @param vector2 The second vector
 * @param vectorLength the size of the vector
 */
void get_values(int vector1[], int vector2[],int vectorLength){
    vectorLength = get_vectors_length();
    printf("Please enter the values of the vectors to calculate the scalar product of them-\n");
    printf("Enter the values of the first vector:\n");
    get_vector(vector1,vectorLength);
    printf("Enter the values of the second vector:\n");
    get_vector(vector2,vectorLength);
    
    print_scalar_product(vector1,vector2,vectorLength);
}

/**
 * @brief The fonction put the valuse the user chose into the vector
 * 
 * @param vector The vector we put the valuse in 
 * @param vectorLength the size of the vector
 */
void get_vector(int vector[], int vectorLength){
    int i;
    for(i = 0;i<vectorLength;i++){
        scanf("%d",&vector[i]);
    }
}
/**
 * @brief The fonction calculate the scalar product of the vectors
 * 
 * @param vector1 The first vector
 * @param vector2 he second vector
 * @param vectorLength the size of the vector
 * @return The scalar product of the vectors
 */
int scalar_product(int vector1[],int vector2[],int vectorLength){
    int i;
    int sum = 0;
    for(i = 0;i<vectorLength;i++){
        sum = sum +(vector1[i] * vector2[i]);
    }
    return sum;
} 
/**
 * @brief The fonction print the scalar product of the vectors
 * 
 * @param vector1 The first vector
 * @param vector2 he second vector
 * @param vectorLength the size of the vector
 */
void print_scalar_product(int vector1[],int vector2[],int vectorLength){
    printf("The scalar product is: %d\n",scalar_product(vector1,vector2,vectorLength));
}

/**
 * @brief Get the vectors size
 * 
 * @return the vector size the user entered
 */
int get_vectors_length(){
    int length;
    printf("Please enter the length of the vectors:");
    scanf("%d",&length);
    return length;
}


