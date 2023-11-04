#include <stdio.h>
#define N 10

void print_array(int A[])
{
    for(int i = 0; i < N; ++i)
        printf(" %3d ", A[i]);
    printf("\n");
}

int main(int args, char* argv[])
{
    int A[N] = {0, 10, 20, 30, 40 ,50 ,60 ,70 ,80, 90};
    int B[N] = {0};

    for (int i = 0; i < N; i++)
        B[i] = A[N-i-1];

    print_array(A);
    print_array(B);

    return 0;
}
