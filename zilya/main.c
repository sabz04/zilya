#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    int firstSize = 0, secondSize = 0, * firstMas, * secondMas, * thirdMas, thirdSize = 0, counter = 0;;

    printf("Enter first size mas\n");
    scanf_s("%d", &firstSize);
    firstMas = (int*)malloc(firstSize * sizeof(int));//��������� ������ ��� ������

    for (int i = 0; i < firstSize; i++) {
        firstMas[i] = rand() % 100;//���������� ������� 1-�� �������
    }
    for (int i = 0; i < firstSize; i++) {
        printf(" %d ", firstMas[i]);//����� 1 �������
    }
    printf("\nEnter second size mas\n");
    scanf_s("%d", &secondSize);//������� ����������� 2 �������
    secondMas = (int*)malloc(secondSize * sizeof(int));

    for (int i = 0; i < secondSize; i++) {
        secondMas[i] = rand() % 100;//���������� ������� 2 �������
    }
    for (int i = 0; i < secondSize; i++) {
        printf(" %d ", secondMas[i]);//����� 2 �������
    }
    thirdSize = firstSize + secondSize;
    thirdMas = (int*)malloc(thirdSize * sizeof(int));
    for (int i = 0; i < firstSize; i++) {
        thirdMas[i] = firstMas[i];
        counter++;
    }//2 �����- ���������� 3 ������� ������� �� ������ ����  ��������, ���������� counter � ������������� ��� ����������� ����� �������
    for (int i = 0; i < thirdSize; i++) {
        thirdMas[counter] = secondMas[i];
        counter++;
    }
    printf("\nThird mas \n");
    for (int i = 0; i < thirdSize; i++) {
        printf(" %d ", thirdMas[i]);//����� 3 �������
    }
    return 0;
}
