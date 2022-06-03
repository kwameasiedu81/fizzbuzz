/* Author: Kwame
   Purpose: This code prints integers from 1 - 100 */

#include <stdio.h>
#include <string.h>

int main() {

int i;

for(i = 1; i<=100; i++){


if(i%3 == 0 && i%5 == 0 && i%15 == 0)
	printf("fizzbuzz\n");
if(i%3 == 0)
	printf("fizz\n");
else if(i%5 == 0)
	printf("buzz\n");
else if (i%15 == 0)
	printf("fizzbuzz\n");
else
 	printf("%d\n", i);
}
    return 0;

}
