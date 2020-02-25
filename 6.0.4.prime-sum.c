/*
统计素数并求和

本题要求：

统计给定整数 M 和 N 区间内素数的个数并对它们求和

输入格式：

输入在一行中给出的 2 个正整数 M 和 N，1 <= M <= N <= 500

输出格式：

在一行中顺序输出 M 和 N 区间内素数的个数以及它们的和，数字间以空格分隔

输入样例：

10 31

输出样例：

7 143
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int min, max;
  int cnt = 0;
  int number_sum = 0;

  scanf("%d %d", &min, &max);

  if (min == 1)
  {
    min = 2;
  }

  for (int i = min; i <= max; i++)
  {
    int isPrime = 1;

    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        isPrime = 0;
        break;
      }
    }

    if (isPrime)
    {
      number_sum += i;
      cnt++;
    }
  }

  printf("%d %d\n", cnt, number_sum);

  return 0;
}
