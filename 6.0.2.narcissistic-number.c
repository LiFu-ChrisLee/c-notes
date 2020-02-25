/*
水仙花数是指一个 N 位正整数，N >= 3，它的每个位上的数字的 N 次幂之和等于它本身，如：153 = 1^3 + 5^3 + 3^3

本题要求：

编写程序计算出所有 N 位水仙花数

输入格式：

输入在一行中给出的正整数 N，3 <= N <=7

输出格式：

按递增的顺序输出所有 N 位水仙花数，每个数字占一行

输入样例：

3

输出样例：

153
370
371
407
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int in_num;
  scanf("%d", &in_num);

  const int MIN_NUM = pow(10, in_num - 1);
  const int MAX_NUM = pow(10, in_num);

  for (int i = MIN_NUM; i < MAX_NUM; i++)
  {
    int num_sum = 0;
    int temp_num = i;

    do
    {
      int d = temp_num % 10;
      num_sum += pow(d, in_num);
      temp_num /= 10;
    } while (temp_num > 0);

    if (num_sum == i)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}
