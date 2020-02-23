#include <C:\Users\randy\source\repos\Project3\Project3\Hack.h>

int getHelp(outfile)
{
	int choice = 0;



	//	do {
	printf("Please choose the you need help with 1-5: \n");
	printf("     1. C\n");
	printf("     2. C#\n");
	printf("     3. C++\n");
	printf("     4. Python\n");
	printf("     5. Java\n");

	scanf("%d", &choice);

	if (choice == 1)
	{
		fprintf(outfile, "C\n");
		return choice;
	}
	else if (choice == 2)
	{
		fprintf(outfile, "C#\n");
		return choice;
	}
	else if (choice == 3)
	{
		fprintf(outfile, "C++\n");
		return choice;
	}
	else if (choice == 4)
	{
		fprintf(outfile, "Python\n");
		return choice;
	}
	else if (choice == 5)
	{
		fprintf(outfile, "Java\n");
		return choice;
	}
	else
	{
		system("cls");
		printf("Please try again.\n");
		return choice;
	};


	return 0;
}


int getLang(outfile) {
	int Lang;
	printf("Please choose the language you are looking to help with 1-5: \n");
	printf("     1. C\n");
	printf("     2. C#\n");
	printf("     3. C++\n");
	printf("     4. Python\n");
	printf("     5. Java\n");
	printf("     6. None\n");
	scanf("%d", &Lang);

	if (Lang == 1)
	{
		fprintf(outfile, "C\n");
		return Lang;
	}
	else if (Lang == 2)
	{
		fprintf(outfile, "C#\n");
		return Lang;
	}
	else if (Lang == 3)
	{
		fprintf(outfile, "C++\n");
		return Lang;
	}
	else if (Lang == 4)
	{
		fprintf(outfile, "Python\n");
		return Lang;
	}
	else if (Lang == 5)
	{
		fprintf(outfile, "Java\n");
		return Lang;
	}
	else if (Lang == 6)
	{
		fprintf(outfile, "None\n");
		return Lang;
	}
	else
	{
		system("cls");
		printf("Please try again.\n");
		return Lang;
	}



	return 0;
};


int getExp(outfile)
{



	printf("Please enter level of experience:\n");
	printf("     1. none \n");
	printf("     2. 100's level courses\n");
	printf("     3. 200's level courses\n");
	printf("     4. 300's and 400's level courses\n");
	printf("     5. bachelor's degree and/or graduate student\n");
	/*
	possible user errors: hobbyist/self learned
	*/


	int level = 0;
	scanf("%d", &level);
	if (level == 1)
	{
		fprintf(outfile, "none");
		return level;
	}
	else if (level == 2)
	{
		fprintf(outfile, "100's level");
		return level;
	}
	else if (level == 3)
	{
		fprintf(outfile, "200's level");
		return level;
	}
	else if (level == 4)
	{
		fprintf(outfile, "300's/400's level");
		return level;
	}
	else if (level == 5)
	{
		fprintf(outfile, "bachelor's degree and/or graduate student");
		return level;
	}
	else
	{
		system("cls");
		printf("Please try again. \n");
		return 0; //GetExperience();
	};
	//	} while (choice >= 0 && choice <= 5);


	return 0;
}