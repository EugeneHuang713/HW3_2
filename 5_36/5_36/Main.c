#include <stdio.h>
void hanoi(int n, char A, char B, char C)
{
    if (n > 0) 
    {
        hanoi(n - 1, A, C, B);
        printf("移動盤子%d從柱%c到柱%c\n", n, A, C);
        hanoi(n - 1, B, A, C);
    }
}

int main() {
    int n;
    printf("請輸入盤數：");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
