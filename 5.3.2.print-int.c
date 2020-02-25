/*
给定一个自然数

本题要求：

编写程序正序输出它的每一位数字

输入格式：

输入在一行中给出的自然数

输出格式：

输出自然数的每一位，中间以空格隔开，末尾不含空格

输入样例：

20

输出样例：

2 0
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int inInt = 0;
  int count = 1;
  scanf("%d", &inInt);
  int primaryInt = inInt;

  while (inInt > 9)
  {
    count *= 10;

    inInt /= 10;
  };

  do
  {
    printf("%d", primaryInt / count);
    if (count > 9)
    {
      printf(" ");
    }
    primaryInt %= count;
    count /= 10;
  } while (count > 0);

  printf("\n");

  return 0;
}
