#include <stdio.h>

void hanoi(int n, char from, char aux, char to) {
    if (n == 1) {
        printf("%c -> %c\n", from, to);
        return;
    }

    // 先把 n-1 个盘子从 from 移到 aux，借助 to
    hanoi(n - 1, from, to, aux);

    // 把最大的盘子从 from 移到 to
    printf("%c -> %c\n", from, to);

    // 再把 n-1 个盘子从 aux 移到 to，借助 from
    hanoi(n - 1, aux, from, to);
}

int main() {
    int n;
    printf("请输入盘子个数: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}