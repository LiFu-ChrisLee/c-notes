#include <stdio.h>

void swap(int *prev, int *next);

int main(int argc, char const *argv[])
{
  int a, b;
  printf("请输入两个数字：");
  scanf("%d %d", &a, &b);

  swap(&a, &b);

  printf("这是交换后的数字：%d %d\n", a, b);

  return 0;
}

void swap(int *prev, int *next)
{
  const int temp = *prev;

  *prev = *next;

  *next = temp;
}
