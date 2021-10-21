// 1000 이하의 소수를 구합니다(버전 3)
#include <stdio.h>

int main(void)
{
	int i, n;
	int prime[500]; //소수를 저장하는 배열
	int ptr = 0; //이미 얻은 소수의 개수
	unsigned long counter = 0; //곱셈과 나눗셈의 실행 횟수
	prime[ptr++] = 2;
	prime[ptr++] = 3;
	for(n = 5; n <= 1000; n += 2) {
		int flag = 0;
		for(i = 1; counter++, prime[i] * prime[i] <= n; i++) {
			counter++;
			if(n % prime[i] == 0) {
				flag = 1;
				break;
			}
		}
		if(!flag)
			prime[ptr++] = n;
	}
	for(i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);
	printf("곱셈과 나눗셈을 실행한 횟수 : %lu\n", counter);
	
	return 0;
}