#include <stdio.h>
#include <stdlib.h>
int main() {
	int cols, rows,tmp;
	scanf("%d %d", &rows, &cols);
	int dp[301][301];
	for (int i = 0; i <= cols; i++) {
		dp[0][i] = 0;
	}
	for (int i = 0; i <= rows; i++) {
		dp[i][0] = 0;
	}
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= cols; j++) {
			scanf("%d", &tmp);
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + tmp;
		}
	}
	int testCase;
	scanf("%d", &testCase);
	int i, j, x, y;
	while(testCase--){
		scanf("%d %d %d %d", &i, &j, &x, &y);
		printf("%d", dp[x][y] - dp[x][j - 1] - dp[i - 1][y] + dp[i - 1][j - 1]);		
	}

}