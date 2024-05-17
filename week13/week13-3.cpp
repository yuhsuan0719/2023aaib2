///week13-3.cpp 剝皮法,也要做迴文判斷
#include <stdio.h>
int main()
{
    int n; ///要把數字每一位剝開
    scanf("%d",&n);
    int N = 0;
    int a[20] = {};
    while(n>0){
        int now = n%10;
        printf("now:%d\n",now);
        n = n / 10;
    }
    int bad = 0;
    for(int i=0; i<N; i++){
        if(a[i]!=a[N-1-i]) bad = 1;
    }
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
