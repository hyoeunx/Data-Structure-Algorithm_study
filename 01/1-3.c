#include <stdio.h>
int main() {
	int input[100], num=0, n=0, i;
	for(i=1; i<=9; i++){
		scanf("%d", &input[i]);
		if(num < input[i]){
			num = input[i];
			n = i;
		}
	}
	printf("%d\n%d", num, n);
	return 0;
}
