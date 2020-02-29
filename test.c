#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void stripCRLF(char *s)
{
	while(*s)
	{
		if(*s=='\r') *s=0;
		if(*s=='\n') *s=0;
		s++;
	}
}

int main(int argc, char **argv)
{
	// our stack memory local vars and buffer
	char secretbyte2='#';
	char secretbyte1='@';
	char buf[10];

	printf("\n\n\n");
	printf("stack addresses\n");
	printf("---------------\n");
	printf("addr of buf is ..   %u\n", &buf[0]);
	printf("addr of byte1 is .. %u\n", &secretbyte1);
	printf("addr of byte2 is .. %u\n", &secretbyte2);
	printf("\n\n\n");

	// prompt for passwd
	printf("Enter password: \n");

	// get the password input
	gets(buf);
	//fgets(buf, sizeof(buf), stdin);
	stripCRLF(buf);

	// output the password and the control vars
	printf("\n\nYou entered    [%s]\n", buf);
	printf("secret byte1 = [%c] (%x in hex)\n", secretbyte1, secretbyte1);
	printf("secret byte2 = [%c] (%x in hex)\n", secretbyte2, secretbyte2);

	// should never run the code inside this IF
	if (secretbyte1 == 'U' && secretbyte2 == 'O')
	{
		printf("\n\n\n");
		printf("**** Access to secret location granted **** \n");
		printf("**** HOPEFULLY WE HAVE NOT BEEN HACKED **** \n");
	}
	printf("\n\n\n");
	return 0;
}
