//정수를 입력 받다 0이 입력 되면 지금까지 입력된 정수를 역순으로 출력

#include <stdio.h>
int main() {
	int a[100]={0}, num, i, size=0;
	for(i=0; i<100; i++){
		scanf("%d", &num);
		if(num == 0){
			size = i;
			break;
		}
		else {
			a[i] = num;
		}
	}
	for(i = size-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	
	return 0;
}