#include "types.h"
#include "stat.h"
#include "user.h"
#include "math.h"

int main(){
	char a = '\0';
	int d = 0;
	char *e = "\0";
	int x = 0;
	int y = 0;
	int z = 0;
	int b = 0;
	int c = 0;
	int f = 0;

	printf(1, "\nEnter a number : ");
	scanf(0, "%i", &x);
	printf(1, "\nEnter 2 hexadecimal numbers : " );
	scanf(0, "%x %x", &y, &b);	
	printf(1, "\nEnter an octal number : " );
	scanf(0, "%o", &z);	

	printf(1, "\nEnter a number and a string : ");
	scanf(0, "%d %s", &d, e);	
	printf(1, "\nEnter a character and 2 octal numbers : ");
	scanf(0, "%c %o %o", &a, &c, &f);

	printf(1, "\nYou Entered\n");
	printf(1, "\nDecimal Integer : %d\n", x);
	printf(1, "\nHexadecimal Numbers, with decimal value : %d %d\n", y, b);
	printf(1, "\nOctal Number, with decimal value : %d\n", z);
	printf(1, "\nNumber and string : %d %s\n", d, e);
	printf(1, "\nCharacter and octal numbers (decimal values) : %c %d %d\n", a, c, f);
	
	exit();
}
