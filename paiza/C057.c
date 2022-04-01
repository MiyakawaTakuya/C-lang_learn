#include <stdio.h>
// #define N 100
// #define N 10  //８割failed
#define N 15 // all passed

int main(void)
{
    char buf[N];
    int T, x, y, maxT;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d %d %d", &T, &x, &y);
    maxT = x;
    for (int i = 1; i <= T; i++)
    {
        char buf_[N];
        int x_, y_;
        fgets(buf_, sizeof(buf), stdin);
        sscanf(buf_, "%d %d", &x_, &y_);
        x += x_;
        if (maxT < x)
            maxT = x;
        y += y_;
        if (y <= 0)
            break;
    }
    printf("%d\n", maxT);
    return 0;
}

// static void Main()
// {
//     string[] ArrayData = Console.ReadLine().Trim().Split(' ');
//     int T = int.Parse(ArrayData[0]); // T秒間風がふく
//     int x = int.Parse(ArrayData[1]); //最初のx座標
//     int y = int.Parse(ArrayData[2]); //最初のx座標
//     int maxX = x;                    //最大値用の変数
//     for (int i = 1; i <= T; i++)
//     {
//         string[] ArrayData_xy = Console.ReadLine().Trim().Split(' ');
//         x += int.Parse(ArrayData_xy[0]);
//         if (maxX < x)
//             maxX = x; //最大値を適宜書き換え
//         y += int.Parse(ArrayData_xy[1]);
//         if (y <= 0)
//             break;
//     }
//     Console.WriteLine(maxX);
// }