#include <stdio.h>

int main() {
    char string[1000],reversed[1000];
    int length = 0,palindrome=0;

    printf("Enter string: ");
    gets(string); 
    
	//To find length
    for ( int i = 0 ; string[i] != 0 ; i++){ 
        length++;
  }
   //reversing the string
    for(int i=0;i<length;i++){
    	reversed[i]=string[length-1-i];
	}
   //now checking if reversed is equal to original string
   for (int i = 0; string[i]!=0 ;i++ )
	 if ( reversed[i] == string[i] )
	     palindrome = 1;
	   
	//checking palindrome
	if ( palindrome )  
	 printf ("It is a palindrome");
	else
	 printf ("It is not a palindrome");

   return 0;
}

