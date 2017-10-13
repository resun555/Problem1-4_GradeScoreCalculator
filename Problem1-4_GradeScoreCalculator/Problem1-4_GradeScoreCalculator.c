// Problem1-4_GradeScoreCalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	float score;
	scanf("%f", &score);
	if (score < 0.f || score > 100.f)
	{
		printf("Invalid input");
		exit(EOF);
	}
	char grade;
	switch ((int)score / 10)
	{
	case 10:
		grade = 'A';
		break;
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'E';
		break;
	}
	putchar(grade);
    return 0;
}

