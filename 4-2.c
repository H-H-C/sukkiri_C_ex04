#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool closeDoor = true; //ドアが閉まっているか？
  while (closeDoor == true)
  {
    printf("ノックする\n");
    printf("一分待つ\n");
  }

  return 0;
}