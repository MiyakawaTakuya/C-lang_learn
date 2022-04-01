#include <stdio.h> //Standard Input Output のヘッダーファイル
//二行のコマンドで実行する場合
// gccで実行ファイルの生成
//./〇〇 で実行

//もしくは次の一行で実行できる
// gcc -o sample sample.c && ./sample

int main(void)
{
    // printf("Hello C !!\n");
    // printf("やりますよーーー！！\n");
    printf("%d", 100);
    printf("円\n");

    printf("%d円\n", 100);

    printf("%d+%d=%d\n", 100, 200, 300); // 100+200=300

    printf("%d+%d=%d\n", 100, 200, 100 + 200); // 100+200=300

    printf("%f\n", 3.14); // 3.140000

    int value; // int宣言で4バイト(ビットでなくて？？)分のメモリ(アドレス)を確保している
    // 1バイト 1024通り
    value = 10;
    printf("%d\n", value);

    int apple = 5;
    int orange = 10;
    printf("%d\n", apple + orange);
    orange += 10;
    printf("%d\n", apple + orange); // 25
    orange++;
    printf("%d\n", apple + orange); // 26

    printf("%f\n", 3.14 * 3 * 3); // 28.260000
    printf("%d\n", (int)3.14);    // 3

    // int input;
    // scanf("%d", &input);
    // printf("入力された値は%dです\n", input);

    // double input_double;
    // scanf("%lf", &input_double);
    // printf("入力された値は %lf です\n", input_double); //入力された値は 5.666000 です

    int apple_ = 10;
    if (apple_)
        printf("りんごの数は0個ではありません");
    if (apple_ - 10)
        printf("りんごの数は0個ではありません"); // 0となり偽
    return 0;
}