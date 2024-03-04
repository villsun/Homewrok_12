#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

int main()
{
	// Завдання 1

	/*FILE* p_file_1 = fopen(R"(F:\text.txt)", "r");
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
	fclose(p_file_2);*/

	// Завдання 2

	/*FILE* p_file_1 = fopen(R"(F:\text.txt)", "r");
	FILE* p_file_2 = fopen(R"(E:\text.txt)", "w");
	char c;
	int counter = 0;
	char str_temp[50];

	if (p_file_1 == nullptr)
	{
		return -1;
	}

	do
	{
		c = fgetc(p_file_1);
		if (c == '\n')
		{
			str_temp[counter] = '\0';
			for (int i = strlen(str_temp); i >= 0; i--)
			{
				fprintf(p_file_2, "%c", str_temp[i]);
			}
			fprintf(p_file_2, "\n");
			counter = 0;
		}
		else
		{
			str_temp[counter++] = c;
		}
	} while (c != EOF);

	fclose(p_file_1);
	fclose(p_file_2);*/

	// Завдання 3

	FILE* p_file_1 = fopen(R"(F:\text.txt)", "r");
	FILE* p_file_2 = fopen(R"(E:\text.txt)", "w");
	char c;
	int counter_1 = 0;
	int counter_2 = 0;
	int counter_3 = 0;
	char str_temp[] = "------------";
	char str_temp_1[50];

	do
	{
		c = fgetc(p_file_1);
		if (c == '\n')
		{
			str_temp_1[counter_1] = '\0';
			for (int i = 0; i < strlen(str_temp_1); i++)
			{
				if (str_temp_1[i] == ' ')
				{
					counter_2++;
					break;
				}
			}
			if (counter_2 == 0)
			{
				counter_3++;
				fprintf(p_file_2, "%s\n", str_temp_1);
				fprintf(p_file_2, "%s\n", str_temp);
			}
			else
			{
				fprintf(p_file_2, "%s\n", str_temp_1);
			}
			counter_1 = 0;
			counter_2 = 0;
		}
		else
		{
			str_temp_1[counter_1++] = c;
		}

	} while (c != EOF);

	if (counter_3 == 0)
	{
		fprintf(p_file_2, "%s\n", str_temp);
	}

	fclose(p_file_1);
	fclose(p_file_2);

	return 0;
}
