//  Задача 13 только с извлечением и записью в файл
#include <stdio.h>
#include <stdlib.h>

void input_key(int *a,int n)
{
	
	printf("input array:\n");
  
    int x,y,sum;
    printf("vod x");
    scanf("%d",&x);
    printf("vod y");
    scanf("%d",&y);
    for (int i=0; x <y+1;)
{
    a[i]=x;
    x+=1;
	++i;
    
}}
void print_arr(int *a,int n)
{
	for(int i=0; i<n; i++)
printf("%d  ",a[i]);
}


void input_file(int *a,int n)
{
	FILE *ft;
	ft=fopen("input.txt","rt");
	
	for(int i=0; i<n; i++){
    	fscanf(ft,"%d",&a[i]);}
	fclose(ft);
	print_arr(a,n);
}


int sum_array(int *a,int n)
{    int sum=0;
	for (int i=0;i < n;){
        sum += a[i];
        i+=2;
    }
	return sum;
}
void output_file(int sum)
{
	FILE* f=fopen("output.txt","w+");
	
	fprintf(f,"%d\n ",sum);
	fclose(f);
}

int main()
{
	int a[100];
	int n;
	int ch;
	do
{
		printf("n= ");
		scanf("%d",&n);
	} while ((n<0)||(n>=100));
	printf("input array:\n 1-from keyboard, 2-from file");
	scanf("%d",&ch);
	switch (ch)
{
	case 1:
		input_key(a,n);
		break;
	case 2:
		input_file(a,n);
		
		break;
	}
	int sum = sum_array(a,n);
	printf("\n%d",sum );
	output_file(sum);
	return 0;
}