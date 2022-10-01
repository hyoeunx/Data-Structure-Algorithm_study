#include <stdio.h>
int main(){
  int a[100], i, num;
  for(i=0; i<100; i++){
    scanf("%d", &a[i]);
    if(a[i]==0){
      num = i;
      break;
      }
    }
  for(i=num-1; i>=0; i--){
    printf("%d ", a[i]);
  }
  
  return 0;
}

#include <stdio.h>
int main(){
  int a[100], i, num;
  for(i=0; i<100; i++){
    scanf("%d", &a[i]);
    if(a[i]==0){
      num = i;
      for(i=num-1; i>=0; i--){
        printf("%d ", a[i]);
      }
      break;
      }
    }
  return 0;
}

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