#include <stdio.h>
int i, key, count, n, result;
int arr[1000]={};

int search(){
	for(i=0; i<n; i++){
    count++;
    if(arr[i]==key) return count;
    }
    return -1;
}

int main(){
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    result=search();
    if(result==-1) printf("실패");
    else printf("%d", result);
    return 0;
}