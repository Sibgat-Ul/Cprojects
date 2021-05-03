#include <stdio.h>
#include <string.h>

void fun (int n)
{
if (n <= 0) return ;
printf ("%d " , n--) ; //4
fun (--n);

fun (n);
printf ("%d " , n) ;
}

int main(int argc, char const *argv[]) {

  fun(4);

  return 0;
}
