#include <iostream>

using namespace std;

int strConteins(char* a, char* str)
{	
	int pos = -1;

	int i = 0; int j = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] == a[0])
		{
			bool conteins = true;
			while (a[j] != '\0')
			{
				if (a[j] != str[i + j])
				{
					conteins = false;
					break;
				}
				j++;
			}
			if (conteins)
			{
				pos = i;
				break;
			}
		}
		i++;
	}
	return pos;
}	
