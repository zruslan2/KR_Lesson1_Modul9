#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <iostream>
#include <time.h>
#include <windows.h>
#include "Structs.h"

void bestFor(struct footbol *team, int count)
{
	int maxGol = 0;
	int ind = 0;
	for (int i = 0;i < count;i++)
	{
		if (team[i].countGols > maxGol)
		{
			maxGol = team[i].countGols;
			ind = 0;
		}
	}
	printf("Лучший форвард %s, забил - %d голов\n", team[ind].lname, team[ind].countGols);
}
