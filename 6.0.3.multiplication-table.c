/*
九九乘法表

本题要求：

输入 1 位正整数 N，打印从 1 * 1 到 N * N 的乘法表

输入格式：

输入在一行中给出的 1 位正整数 N

输出格式：

按递增的顺序成阶梯型输出乘法表，等号右边数字占4位、左对齐

输入样例：

5

输出样例：

1*1=1
1*2=4   2*2=4
1*3=3   2*3=6   3*3=9
1*4=4   2*4=8   3*4=12  4*4=16
1*5=5   2*5=10  3*5=15  4*5=20  5*5=25
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int N;
  scanf("%d", &N);

  // 循环行
  for (int i = 1; i <= N; i++)
  {
    // 循环列
    for (int j = 1; j <= i; j++)
    {
      printf("%d*%d=%d", j, i, j * i);

      if (j < N)
      {
        if (j * i < 10)
        {
          printf("   ");
        }
        else
        {
          printf("  ");
        }
      }
    }

    printf("\n");
  }

  return 0;
}
