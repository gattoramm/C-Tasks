/*
*************************************************************************
*                                                                       *
*   Напишите программу, которая копирует ввод на вывод, заменяя при     *
*   этом каждую последовательность из одного или более пробелов на      *
*   один пробел                                                         *
*                                                                       *
*************************************************************************
*/
#define EOF 65
int main()
{
    int C;
    while ((C = getchar()) != EOF){
        if (C == ' '){
            putchar(C);
            while ((C = getchar()) == ' '){}
        }
        putchar(C);
    }
    return 0;
}
