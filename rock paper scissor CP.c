
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//main program 
int
rockPaperScissor (char you, char comp)
  
  //rock paper scissor logic start
{
  if (you != 'r' && you != 'p' && you != 's' && you != 'q')
    {
      return 2;
    }

  if (you == 'q')
    {
      return 3;
    }


  if (you == comp)
    {
      return 0;
    }

  

  if (you == 'p' && comp == 'r')
    {
      return 1;
    }
  else if (you == 'r' && comp == 'p')
    {
      return -1;
    }

  
  if (you == 'p' && comp == 's')
    {
      return -1;
    }
  else if (you == 's' && comp == 'p')
    {
      return 1;
    }

  if (you == 's' && comp == 'r')
    {
      return -1;
    }
  else if (you == 'r' && comp == 's')
    {
      return 1;
    }
}

//main function start

int
main ()
{
  int result;
  char you, comp;
  srand (time (0));
  int number = rand () % 100 + 1;

  if (number < 33)
    {
      comp = 'r';
    }
  else if (number > 33 && number < 66)
    {
      comp = 'p';
    }
  else
    {
      comp = 's';
    }

  printf("\nEnter ['r' for ROCK], ['p' for PAPER] and ['s' for SCISSOR]- (Press q to Quit) \n");
  scanf (" %c", &you);

  result = rockPaperScissor (you, comp);
  if (result == 2)
    {
      printf ("\nWRONG INPUT!\n");
      return main ();
    }
  else if (result == 3)
    {
      printf ("\nThanks for playing.");
      return 0;
    }

  printf ("You choose %c and computer choose %c \n", you, comp);
  if (result == 0)
    {
      printf ("Game draw!\n");
    }
  else if (result == 1)
    {
      printf ("You Win!\n");
    }
  else
    {
      printf ("\nComputer Win!");
    }
  return main ();
}
//end of program
