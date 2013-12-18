/*
 * First head first c program
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int val = 0;
    int count = 0;
    while(card_name[0] != 'X'){
	puts("Enter the card_name: ");
    	scanf("%2s", card_name);
    	switch(card_name[0])
    	{
    	    case 'K':
    	    case 'Q':
    	    case 'J':
    	        val = 10;
    	        break;
    	    case 'A':
    	        val = 11;
    	        break;
    	    case 'X':
    	        continue;
    	    default:
    	        val = atoi(card_name);
    	        if((val<1) || (val>10))
    	        {
    	        puts("I don't understand that value");
    	        continue;
    	        }
    	}
    	if(val>=3 && val <= 6)
    	{
    	    puts("Count has gone up");
    	    count++;
    	}
    	else if(val==10 || val==11)
	{
    	    puts("Count has gone down");
    	    count--;
    	}
    	printf("The card value is: %i\n", val);
    	printf("The count value is: %i\n", count);
    }
    return 0;
}

    
