#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct stu
{
	char name[20];
	int age;
	double score;
};

//struct Book
//{
//	char name[20];
//	float price;
//	char id;
//};



int main()
{
	struct stu s = { "ÕÅÉº",20,82.2 };
	printf("1: %s %d %lf\n", s.name, s.age, s.score);

	struct stu * ps = &s;
	printf("2: %s %d %lf\n",(*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
	//struct Book b = { "loser",20.5,"ab12"};
	//printf("%s %lf %s", b.name, b.price, b.id);

	return 0;
}
	
