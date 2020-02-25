/*
给定不超过 6 的正整数 A，考虑从 A 开始的连续 4 个数字

本题要求：

编写程序输出由它们组成的无重复数字的 3 位数

输入格式：

输入在一行中给出的 A

输出格式：

输出满足条件的 3 位数，要求从小到大，每行 6 个整数。整数间以空格分隔，行末不能有多余空格

输入样例：

2

输出样例：

234 235 243 245 253 254
324 325 342 345 352 354
423 425 432 435 452 453
523 524 532 534 542 543
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int inInt;
  int cnt = 0;

  scanf("%d", &inInt);

  for (int i = inInt; i < inInt + 4; i++)
  {
    for (int j = inInt; j < inInt + 4; j++)
    {
      for (int k = inInt; k < inInt + 4; k++)
      {
        if (j != i && k != i && k != j)
        {
          printf("%d%d%d", i, j, k);
          cnt++;

          if (cnt == 6)
          {
            printf("\n");
            cnt = 0;
          }
          else
          {
            printf(" ");
          }
        }
      }
    }
  }

  return 0;
}
