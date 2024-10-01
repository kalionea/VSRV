/*------------------------------------*/
/* Name: Alena Kostina, KVBO-04-22   */
/* Date: 2024/09/30 */
/* users's text output */
/* Programm name: prog2.c */

#include <stdio.h>
#include <string.h>
int main() {
  char a[80] = "";
  printf("\nВведите название Вашей любимой песни: ");
  fgets(a, sizeof(a), stdin);
  printf("\nВаша любимая песня:%s\n", a);
  return 0;
}
