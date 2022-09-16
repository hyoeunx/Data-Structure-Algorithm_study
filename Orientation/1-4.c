#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[81];
    int result[81] = { 0, };
    for (int j = 0; j < n; j++) {
        int sum = 0;
        int score = 1;
        scanf("%s", &a);
        for (int k = 0; k < strlen(a); k++) {
            if (a[k] == 'O') {
                sum += score++;
            }
            if (a[k] == 'X') {
                score = 1;
            }
        }
        result[j] = sum;
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", result[i]);
    }
	return 0;
}
