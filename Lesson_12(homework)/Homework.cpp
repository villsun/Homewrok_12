#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

int main()
{
	// Завдання 1

	FILE* p_file_1 = fopen(R"(F:\text.txt)", "r");
	FILE* p_file_2 = fopen(R"(E:\text.txt)", "w");
	char c;
	int counter = 0;
	char str_temp[50] = "";

	if (p_file_1 == nullptr)
	{
		return -1;
	}

	do
	{
		c = fgetc(p_file_1);
		if (c != '\n')
		{
			str_temp[counter++] = c;
		}
		else
		{
			str_temp[counter] = '\0';
			if (counter > 7)
			{
				fprintf(p_file_2, "%s\n", str_temp);
			}
			counter = 0;
		}
	} while (c != EOF);

	fclose(p_file_1);
	fclose(p_file_2);

	return 0;
}
