#include <string.h>
#include <stdio.h>

int main()
{
   char str[80] = "This is - www.tutorials-poi-nt.com - website";
   const char s[2] = "-";
   char *token;
   
   /* get the first token */
   token = strtok(str, s);
   printf( " %s\n", token );
   /* walk through other tokens */
   while( token != NULL ) 
   {
      
    
      token = strtok(NULL, s);
      printf( " %s\n", token );
   }
   
   return(0);
}