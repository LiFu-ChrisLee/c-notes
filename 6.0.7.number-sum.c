/*
求 a 的连续和

本题要求：

输入两个整数 a 和 n，a 的范围是 [0,9]，n 的范围是 [1,8]，求数列之和 S = a + aa + ... + aa...a (n 个 a)。

输入格式：

输入在一行中给出的两个整数，先后表示 a 和 n

输出格式：

在一行中输出要求的数列之和

输入样例：

2 4

输出样例：

2468
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, n;
  int num = 0;
  int number_sum = 0;

  scanf("%d %d", &a, &n);

  // 表示有几个数需要累加
  for (int i = 0; i < n; i++)
  {
    // num 表示第 i + 1 个数的值，当前的值应为 (前一个数 * 10) + a
    num = num * 10 + a;

    number_sum += num;
  }

  printf("%d", number_sum);

  return 0;
}
