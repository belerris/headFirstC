/*
 * First head first c program
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int val = 0;
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    switch(card_name[0])
    {
	case 'K':
	    val = 10;
	    break;
	case 'Q':
	    val = 10;
	    break;
	case 'J':
	    val = 10;
	    break;
	case 'A':
	    val = 11;
	    break;
	default:
	    val = atoi(card_name);
    }
    if(val>=3 || val <= 6)
    {
	puts("Count has gone up");
    }
    else if(val>=10){
	puts("Count has gone down");
    }
    printf("The card value is: %i\n", val);

    return 0;
}

    
