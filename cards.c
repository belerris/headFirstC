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
    if (card_name[0] == 'K')
    {
	val = 10;
    }
    else if(card_name[0] == 'Q')
    {
	val = 10;
    }
    else if(card_name[0] == 'J')
    {
	val = 10;
    }
    else if(card_name[0] == 'A')
    {
	val = 11;
    }
    else
    {
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

    
