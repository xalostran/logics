#include <stdio.h>
#include <stdlib.h>

int *initializeArrayWithInput2(int *myArr, int inputSize)
{
    int firstNum;

    // printf("Ange storleken på arrayen: ");
    // scanf("%d", &inputSize);

    printf("Type first value: ");
    scanf("%d", &firstNum);

    int *arrayPointer = myArr;

    for (int i = 0; i < inputSize; i++)
    {
        *(arrayPointer++) = firstNum++;
    }

    arrayPointer = myArr;
    for (int i = 0; i < inputSize; i++)
    {
        printf("Value: %d Adress: %p\n", *arrayPointer, arrayPointer);
        arrayPointer++;
    }
    return myArr;
}

int *performOperations2(int *myArr, int inputSize)
{
    int firstNum = 1;

    // printf("Ange storlek på array: ");
    // scanf("%d", &inputSize);

    // iterera genom arrayen
    int *arrayPointer = myArr;

    for (int i = 0; i < inputSize * 2; i++)
    {
        *(arrayPointer)++ = firstNum++;
    }

    arrayPointer = myArr;
    for (int i = 0; i < inputSize; i++)
    {
        printf("Value: %d Adress: %p\n", *arrayPointer, arrayPointer);
        arrayPointer += 2;
    }
    return myArr;
}

int main(void)
{
    int inputSize;
    printf("Type size of array: ");
    scanf("%d", &inputSize);

    int *myArr = (int *)malloc(inputSize * sizeof(int));
    int *result = initializeArrayWithInput2(myArr, inputSize);
    // int *result = performOperations2(myArr, inputSize);
    free(result);

    short myInt = 3;
    char myChar = 'c';
    printf("%lu\n", sizeof(myInt));
    printf("%lu", sizeof(myChar));
    return 0;
}
