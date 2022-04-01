#include <stdio.h>
#define N 10

int main(void)
{
    // char str[1000];
    // fgets(str, sizeof(str), stdin);
    // printf("%s", "XXXXXX");
    // return 0;

    //標準入力 整数値
    // char buf[100];
    // int n;
    // fgets(buf, sizeof(buf), stdin);  //これは使い回しが効く
    // sscanf(buf, "%d", &n);
    // printf("%d\n", n);

    //標準入力 文字列
    // char buf[100];
    // fgets(buf, sizeof(buf), stdin); //これは使い回しが効く
    // char str[N];
    // sscanf(buf, "%s", str);
    // printf("hello %s\n", str);
    // return 0;

    //標準入力 数値 スペース区切り
    // char buf[100];
    // int x, y;
    // fgets(buf, sizeof(buf), stdin); //これは使い回しが効く
    // sscanf(buf, "%d %d", &x, &y);
    // printf("%d\n", x);
    // printf("%d\n", y);
    // return 0;

    //標準入力 文字列 スペース区切り
    char buf[100];
    char s1[10];
    char s2[10];
    char s3[10];
    fgets(buf, sizeof(buf), stdin); //これは使い回しが効く
    sscanf(buf, "%s %s %s", s1, s2, s3);
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
    return 0;
}
