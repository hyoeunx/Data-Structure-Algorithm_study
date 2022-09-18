#include <stdio.h>

int n_mul(int i, int j){
  if(j <= 9){
    printf("%d X %d = %d\n", i, j, i*j);
    n_mul(i, j+1);
  }
}

int mul(int i, int j){
  if(j <= 9){
    printf("%d X %d = %d\t", i, j, i*j);
    if(i < 9){
      mul(i+1, j);
    }
    else{
      printf("\n");
      mul(2, j+1);
    }
  }
}

int main(){
  int n;
  printf("원하는 단 : ");
  scanf("%d", &n);
  n_mul(n, 1);

  printf("\n");
  
  mul(2, 1);
  
}