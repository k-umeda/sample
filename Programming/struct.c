#include <stdio.h>
#include <stdlib.h>

struct sample {
	int sum;
	int sum2;
};

int set_str(struct sample *sum);

int main()
{

	//struct sample *a;
	struct sample a;

	//a = (struct sample*)malloc(sizeof(struct sample));

	set_str(&a);
	//a->sum = 1;
	//a->sum2 = 2;

	printf("a.sum addr %p\n",&a.sum);
	printf("a.sum2 addr %p\n",&a.sum2);
	printf("sum = %d sum2 = %d\n",a.sum,a.sum2);
	
}

int set_str(struct sample *set_sum)
{
	
	set_sum->sum = 1;
	set_sum->sum2 = 4;

	printf("set_sum addr %p\n",&set_sum);
	printf("set_sum->sum addr %p\n",&(set_sum->sum));
	printf("set_sum->sum2 addr %p\n",&(set_sum->sum2));

}
