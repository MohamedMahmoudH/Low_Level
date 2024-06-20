/*
https://www.hackerrank.com/challenges/recursion-in-c/problem?isFullScreen=true
*/

#include <stdio.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    int *mem = (int *)calloc(n , sizeof(int)); // memoization

    mem[0] = a;
    mem[1] = b;
    mem[2] = c;

    for(short index1 = 3 ; index1 < n ; ++index1)
    {
        mem[index1] = mem[index1 - 1] + mem[index1 - 2] + mem[index1 - 3];
    }
    return mem[n - 1];
    free(mem);
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}

