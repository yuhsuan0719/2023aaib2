#include <stdio.h>
void myPrintf(int a[10]){
    for(int i=0; i<10; i++) printf("%d",a[i] );
    printf("\n");
}
int main()
{
    int a[10] = {9,8,7,6,5,4,3,2,1,0};
    myPrintf(a);

    for(int k=0; k<9; k++){
        for(int i=0;i<9;i++){
            if(a[i]>a[i+1]){
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1] = temp;
            }
        }
        myPrintf(a);
    }
}

