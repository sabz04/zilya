#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    int firstSize = 0, secondSize = 0, * firstMas, * secondMas, * thirdMas, thirdSize = 0, counter = 0;;

    printf("Enter first size mas\n");
    scanf_s("%d", &firstSize);
    firstMas = (int*)malloc(firstSize * sizeof(int));//выделение памяти под массив

    for (int i = 0; i < firstSize; i++) {
        firstMas[i] = rand() % 100;//заполнение данными 1-го массива
    }
    for (int i = 0; i < firstSize; i++) {
        printf(" %d ", firstMas[i]);//вывод 1 массива
    }
    printf("\nEnter second size mas\n");
    scanf_s("%d", &secondSize);//задание размерности 2 массива
    secondMas = (int*)malloc(secondSize * sizeof(int));

    for (int i = 0; i < secondSize; i++) {
        secondMas[i] = rand() % 100;//заполнение данными 2 массива
    }
    for (int i = 0; i < secondSize; i++) {
        printf(" %d ", secondMas[i]);//вывод 2 массива
    }
    thirdSize = firstSize + secondSize;
    thirdMas = (int*)malloc(thirdSize * sizeof(int));
    for (int i = 0; i < firstSize; i++) {
        thirdMas[i] = firstMas[i];
        counter++;
    }//2 цикла- заполнение 3 массива данными из первых двух  массивов, переменная counter – предназначена для запоминания счета индекса
    for (int i = 0; i < thirdSize; i++) {
        thirdMas[counter] = secondMas[i];
        counter++;
    }
    printf("\nThird mas \n");
    for (int i = 0; i < thirdSize; i++) {
        printf(" %d ", thirdMas[i]);//вывод 3 массива
    }
    return 0;
}
