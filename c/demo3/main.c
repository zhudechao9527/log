#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main1(){
    char str[10] = "我";
    printf("%s\n","main1 运行结果");
    printf("%c%c\n",str[0],str[1]);
    printf("%s\n",str);
    /**
     * main1 运行结果
     * �
     * 我
     */
}

int main() {
    main1();
    return 0;
}