#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, c;
	int i, j;
	int age[6] = { 11,12,10,15,1,2 };
	for (i = 0; i < 6; i++) {
		for (j = 0; j < i; j++) {
			if (age[j] > age[i]) {
				t = age[j];
				age[j] = age[i];
				age[i] = t;
				if (age[0] < age[1] && age[1] < age[2] && age[2] < age[3] && age[3] < age[4] && age[4] < age[5])
				{
					for (int j = 0; j < 6; j++)
						printf("%d  ", age[j]);
					return 0;
				}
			}
		}
	}
	for (int j = 0; j < 6; j++)
		printf("%d  ", age[j]);
	return 0;
}