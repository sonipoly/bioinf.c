#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{
char seq[ 10000 ];
int i;
int k;
int length;
int startcodon;
int stopcodon;

while (scanf("%s", seq) == 1)
{
length = strlen( seq );
startcodon = 0;
stopcodon = 0;
	for( i = 0 ; i < length -2 ; i++ )
	{
	if (seq[i] == 'A' &&  seq[i+1] == 'T' &&  seq[i+2] == 'G')
		{ startcodon = 1; break; }
	}


	for( k = i + 3; k < length-2; k += 3 )
	{
	if(seq[k] == 'T' && seq[k+1] == 'A' && seq[k+2] == 'G')
		{ stopcodon= 1; }

	if(seq[k] == 'T' && seq[k+1] == 'A' && seq[k+2] == 'A')
                { stopcodon= 1; }

	if(seq[k] == 'T' && seq[k+1] == 'G' && seq[k+2] == 'A')
                { stopcodon= 1; }
	}

	if( startcodon == 1 && stopcodon == 1)
	{
	printf("Yay! This is a prokaryotic coding sequence!:) \n");
	}

	else { printf("This is not a prokaryotic coding sequence. \n"); }


}
}

