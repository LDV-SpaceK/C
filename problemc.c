#include <stdio.h>
#include <math.h>
int main()
{
	int n, i;
	int num;
	scanf("%d",&n);

		for (num = 1; num < n; num++){
        int count = 0; 
        for (i = 2; i <= sqrt(num); i++){
            if (num % i == 0){
                count++;
            }
        }
        if (count == 0 && num > 1)
            printf("%d ", num);
    }
}
