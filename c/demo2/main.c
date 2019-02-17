#include <stdio.h>

void change01(int *pNum)
{
    *pNum = 9527;
}

int main() {
    int intVar = 10;
    *(&intVar) = 3;//先取地址，在根据地址指向变量
    printf("%d \n",intVar);

    int intVar1 = 100;
    *&intVar1 = 19;
    printf("%d \n",intVar1);

    const int num1 = 300;
    (int)num1;
    *(int *)&num1 = 3000;
    printf("%d \n",num1);

    int num2 = 99;
    change01(&num2);
    printf("%d \n",num2);
    return 0;
}
