#include <stdio.h>

/* functions*/

int get_length(char* string);

/*
* main - is the entry of code .
* Return: 0 code is good .
*/

int main(void)

{

  int i ;
  int j;

  /*ANY STRING BESIDE UPPER CHARs COUSE A BUG - ( infinit loop )*/
  
  char* str = "HELLOWORLDFROMCREAM";

  /* return len of string */
  int length = get_length(str);

  /* LOOP len of string times*/
  
  while(i < length )
    {
      /* LOOP NUMBER OF CHARS TIMES */
      while(j >= 65 && j < 91)
	{
	  /* COMPAIRE THE VALUE STORED IN EACH CHAR OF STRING WITH EACH VALUE OF J */
	  if (j == str[i])
	    {
	      for(int n = 0;n < i + 1 ;n++)
		{
		  printf("%c", str[n]);
		}
	      printf("\n");
	      i++;
	      break;
	    }
	  else if (j != str[i] )
	    {
	      for (int n = 0; n < i + 1  ;n++)
		{
		  printf("%c",str[n-1]);
		}
	      printf("%c",j);
	      printf("\n");
	      j++;

	    }
	      /* MORE CONDITIONS HERE TO AVOID BUG WHEN STRING INCLUDE NONE UPPER CHAR*/	  

	}
      j = 65;
      
    }
  
}

  /* get int function return the length of gaven string */
  int get_length(char* string)
  {
    int i = 0;
    
    while(string[i]!=0)
      {
	i++;
      }
  
    return i;
  }
