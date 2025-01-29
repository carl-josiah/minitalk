#include <unistd.h>
#include <signal.h>
#include <stdio.h>

int main()
{
	while (string is true)
	{
		if (c == 1) true 
			kill(50802, SIGUSR1);
		else false
			kill(50802, SIGUSR2);
	}
}


101 10001

/*

1

1000 0000  1 << 7
	&
0110 0001
__________
0                  siguser1 false

0100 0000  1 << 6
	&
0110 0001
_________          siguser2 True
1

0010 0000 1 << 5
	&
0110 0001
_________



siguser1 siguser2 siguser2 siguser1     siguser1 siguser1 siguser1 siguser2




c = 0000 0000

0000 0000 c = 0000 0000
	|
0100 0000   1 << 6
_________
0100 0000  c = 0100 0000

i--
i--




0100 0000 
	|
0010 0000
__________
0110 0000


0000 0001
	|
0110 0000
_________
0110 0001

siguser1 siguser2 siguser2 siguser1		siguser1 siguser1 siguser1 siguser2

*/