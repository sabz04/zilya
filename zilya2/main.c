#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    int** p = NULL;
    unsigned i;
    int ROW_NUM = 4, COL_NUM = 5;
    p = (int**)malloc(ROW_NUM * sizeof(int*));
    for (i = 0; i < ROW_NUM; i++) {
        p[i] = (float*)malloc(COL_NUM * sizeof(float));//объявление двумерного массива
    }

    for (int i = 0; i < ROW_NUM; i++) {
        for (int j = 0; j < COL_NUM; j++) {
            p[i][j] = rand() % 20 - 6;//заполнение двумерного массива значениями от -6 до 20
        }
    }
    printf("\nMain mas= \n");
    for (int i = 0; i < ROW_NUM; i++) {
        for (int j = 0; j < COL_NUM; j++) {
            printf(" %d\t ", p[i][j]);//вывод массива до его изменения
        }
        printf("\n");
    }
    printf("\nResult mas= \n");
    for (int i = 0; i < ROW_NUM; i++) {
        for (int j = 0; j < COL_NUM; j++) {
            if (i == ROW_NUM - 1 && p[i][j] > 0)
            {
                printf(" %d\t ", p[i][j] * p[i][j]);//вывод массива с увеличением последней строки в 2 раза, если число массива -  положительное
            }
            else {
                printf(" %d\t ", p[i][j]);
            }

        }
        printf("\n");
    }
}
