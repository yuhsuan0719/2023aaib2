///week09-3.cpp�禡�̪��ܼ� vs. �~�����ܼ�
#include <stdio.h>
int globalA = 300; ///�~���������ܼ�

void myFuncA()
{
    int localA = 500; ///�̭������ܼ�
    globalA = 0; ///�ç�~�����ܼ�
    printf("myFunc(): globalA:%d localA:%d\n",globalA, localA);
}


int main()
{
    int localA = 200;
    printf("main(): globalA:%d localA:%d\n", globalA, localA);
    myFuncA();
    printf("main(): globalA:%d localA:%d\n", globalA, localA);
}
