#include <stdio.h>


int isBitSetInRange(unsigned char ch, int low, int hi);

void toBinary(unsigned int,unsigned int base);

int main(){

	unsigned char ch = 255;
	int rv = isBitSetInRange(ch, 2, 5);
	if (rv == 0)
		printf("Not set\n");
	else
		printf("Set \n");
	

	toBinary(27,2);
	toBinary(27,8);
	toBinary(27,16);

	return 0;
}

int isBitSetInRange(unsigned char ch, int low, int hi){

	//Add your code here

	return 0;
}

void toBinary(unsigned int num, unsigned int base)
{
	if(base == 2)
	{
		//Add your code here for converting decimal number to binary
		
	}
	else if(base == 8)
	{
		//Add your code here for converting decimal number to octal
	}
	else if(base ==16)
	{
		//Add your code here for converting decimal number to hexadecimal
	}

}
