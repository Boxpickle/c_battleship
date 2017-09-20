#include <stdio.h>
#include <stdlib.h>

void print_letters();
void print_vert_lines();
void print_hor_line();
void print_user_line(int a);
void init_board();

int main ()
{
  printf("bs\n");
  init_board();
  
  return 0;
}
//=================
void print_letters()
{
  printf("  A   B   C   D   E   F   G   H   I   J\n"); 
}
//=====
void print_vert_lines()
{
  printf("|   |   |   |   |   |   |   |   |   |   |\n");
}
//=====
void print_hor_line()
{
  printf("-----------------------------------------\n");
}
//=====
void print_user_line(int a)
{
  printf("|   |   |   |   |   |   |   |   |   |   | %d\n",a);
}
//=====
void init_board()
{
  int i;

  system("clear");
  
  print_letters();
  print_hor_line();
  
  for(i=1;i<11;i++)
  {
    print_vert_lines();
    print_user_line(i);
    print_hor_line();
  }
}
