#include <stdlib.h>
#include <math.h>
#include <stdio.h>

struct student
{
	int birthday;
	char name[20];
};

int main(void)
{   int k;
    printf("vved k ");
    scanf("%d",&k);
	struct student people[] = { {235, "Tom"}, {235, "Bob"}, {26, "Alice"}, {41, "Sam"}};
	int n = sizeof(people)/sizeof(people[0]);
	for(int i=0; i<n; i++)
	{   if (people[i].birthday == k){
		    printf("Name:%s \t Age: %d \n", people[i].name, people[i].birthday);}
	}
	
	return 0;
}

