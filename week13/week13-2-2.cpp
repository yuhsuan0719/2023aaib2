/// week13-2b.cpp 希望字串很長 <10位數
///Q1 有多長? Q2 怎麼判斷
#include <string.h>
#include <stdio.h>
int main()
{
    char line[20];
    scanf("%s",line);
    int N = strlen(line);
    int bad = 0;
    for(int i=0; i<N; i++){
        if( line[i] != line[N-1-i] ) bad = 1;
    }///若前後對應的字母不同 就失敗
    /// 0123456789 共 10個數字
    /// ^        ^相加是9
    ///  1      8
    ///   2    7
    ///    3  6
    ///     45
    ///     45
    ///    3  6
    ///   2    7
    ///  1       8
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
