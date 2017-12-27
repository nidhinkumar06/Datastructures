/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void
Push (int x)
{
  if (top == MAX_SIZE - 1) //to check whether stack has reached the maxsize or not
    {
      printf ("Error: Stackoverflow\n");
      return;
    }
  A[++top] = x;
}

void
Pop ()
{
  if (top == -1) //to check stack has value to delete or not
    {
      printf ("No data to pop\n");
      return;
    }
  top--;
}

void
Print ()
{
  int i;
  printf ("Stack: ");
  for (int i = 0; i <= top; i++)
    {
      printf ("%d ", A[i]);
      printf ("\n");
    }
}

int
Top ()
{
  return A[top];
}

int
main ()
{
  Push (2);
  Print ();
  Push (10);
  Print ();
  Push (4);
  Print ();
  Pop ();
  Print ();
  Push (15);
  Print ();
}
