#include <stdio.h>
int a[10000001];
int main() {
	int n, m, i, t;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &t);
		a[t]=1;
	}
	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d", &t);
		if(a[t]==1){
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
	return 0;
}
