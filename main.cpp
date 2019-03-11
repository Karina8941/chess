#include <iostream>

void main()
{
	char dos[8][8];
	for(int i = 0; i < 8; i++)
		for(int j = 0; j < 8; j++)
			{
				if(i == 2 || i == 7) 
					dos[i][j] = 'p';
			}
}
